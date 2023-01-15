#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

priority_queue<ll, vector<ll>, greater<ll> > fila;

ll pow10(int e){
	ll n=1;
	for(int i=0; i<e; i++) n*=10;
	return n;
}

int contDigits(ll n){
    int ans = 1;
    while(n>10) ans++, n/=10;
    return ans;
}

ll bfs(ll n, ll m){
	ll atu, aux;
    int casas = contDigits(n), x, y;
    for(int i=1; i<10; i++){
        aux = i;
        aux *= pow10(casas);
        x = contDigits((ll)i);
        if(aux % m == 0) return aux;
        cout << aux << " *\n";
        y = 1;
        aux *= 10;
        while(x+casas+y < 17){
            if(contDigits(m - (aux % m)) <= y) return aux + m - (aux % m);
            y++;
            aux *= 10;
        }

    }
	return -1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	ll n, m= pow10((ll)18);
	//cout << m << endl;
	cin >> n >> m;
	cout << bfs(n, m) << endl;
	return 0;
}
