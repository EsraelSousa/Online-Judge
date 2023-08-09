#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

const int MAXL = 2e5+5;

ll restos[MAXL];
ll potencias[MAXL];

void preCalculaRestos(vi &n, ll base){
	int l = sz(n)-1;
	ll m = base + 1;
	potencias[l] = 1;
	restos[l] = n[l] % m;
	for(int i=l-1; i>=0; i--){
		potencias[i] = (potencias[i+1] * base) % m;
		restos[i] = (potencias[i] * n[i] + restos[i+1]) % m;
	}
}

int main(){
    fast
    ll B, base, L;
    vi number;
    int sum = 0;
    cin >> base >> L;
    B = base + 1;
    for(int i=0; i<L; i++){
        int c;
        cin >> c;
        sum += c;
        number.push_back(c);
    }
    preCalculaRestos(number, base);
    if(!restos[0]){
        cout << "0 0\n";
    }
    // caso especial aqui
    else if(sum == number[0]){
        for(int i=0; i<number[0]; i++){
            if((base * i + restos[i+1]) % B == 0){
                cout << "1 " << i << "\n";
                return 0;
            }
        }
        cout << "-1 -1\n";
    }
    else{
        // busca
        /*for(int i=0; i<L; i++)
        	cout << restos[i] << ' ';
        cout << '\n';*/
        ll rest = 0;
        // nao faz o ultimo, e especial tbm
        for(int i=0; i<L-1; i++){
        	// vamos comecar colocando 0 na posicao i
        	ll ans = 0;
            ll aux = (base * rest + ans) % B;
            aux = (potencias[i] * aux + restos[i+1]) % B;
          
            //cout << i+1 << ' ' << aux << " ans = 0 " << x << '\n';
            if(aux == 0 && ans < number[i]){
            	cout << i+1 << ' ' << ans << '\n';
            	return 0;
            }
            // vou subindo tentando colocar caras
            //while(aux && ans < number[i]){
            	ll copy = aux;
            	ans = B - aux;
            	aux = (base * rest + ans) % B;
            	aux = (potencias[i] * aux + restos[i+1]) % B;
            //}
            if(aux == 0 && ans < number[i]){
            	cout << i+1 << ' ' << ans << '\n';
            	return 0;
            }
            ans = copy;
            	aux = (base * rest + ans) % B;
            	aux = (potencias[i] * aux + restos[i+1]) % B;
            //}
            if(aux == 0 && ans < number[i]){
            	cout << i+1 << ' ' << ans << '\n';
            	return 0;
            }
            rest = (base * rest + number[i]) % B;
        }
        // resta modificar apenas o ultimo algarismo
        for(int i=0; i<number[L-1]; i++)
        	if((base * rest + i) % B == 0){
        		cout << L << ' ' << i << '\n';
        		return 0;
        	}
        // não encontra
        cout << "-1 -1\n";
    }
    return 0;
}
/*
10 5
4 0 7 8 2
*/
