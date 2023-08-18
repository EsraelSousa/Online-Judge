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
#define precision(x) fixed << setprecision(x)

const int MAXN = 1e4+5;

bool S[MAXN];

void task(){
	string s, vogais, consoantes;
	set<char> isVogal = {'a', 'e', 'i', 'o', 'u'};
	cin >> s;
	int q, op, x;
	for(int i=0; i<sz(s); i++){
		if(isVogal.find(s[i]) != isVogal.end()){
			S[i] = 1;
			vogais.push_back(s[i]);
		}
		else{
			S[i] = 0;
			consoantes.push_back(s[i]);
		}
	}
	
	int V = 0, C = 0;
    if(!sz(vogais)) vogais.push_back('*');
    if(!sz(consoantes)) consoantes.push_back('*');
	cin >> q;
	while(q--){
		cin >> op;
		if(op == 2){
			int i = V, j = C;
			for(int k=0; k<sz(s); k++){
				cout << (S[k]? vogais[i++] : consoantes[j++]);
				i %= sz(vogais);
				j %= sz(consoantes);
			}
			cout << '\n';
		}
		else if(op == 1){
			cin >> x;
			x = x % sz(consoantes);
            if(x)
                C = (C - x + sz(consoantes)) % sz(consoantes);
		}
		else{
			cin >> x;
			x = x % sz(vogais);
            if(x)
                V = (V - x + sz(vogais)) % sz(vogais);
		}
	}
}

int main(){
	fast
	int testes;
	cin >> testes;
	int t=1;
	while(testes--){
		cout << "Caso #" << t++ << ":\n";
		task();
	}
	return 0;
}
