#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ii, ii> iiii;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

const int MAXN = 1e3+5;
const int MAXK = 1e2+5;

void rota(set<string> &cubos, string s){
	queue<string> fila;
	set<string> vis;
	string a, cur;
	fila.push(s);
	while(sz(fila)){
		cur = fila.front();
		fila.pop();
		if(cubos.find(cur) != cubos.end()) return;
		// rotacoes horizontais
		//cout << cur << '\n';
		a = cur;
		for(int i=0; i<3; i++){
			char c = a[4];
			for(int j=4; j>1; j--)
				a[j] = a[j-1];
			a[1] = c;
			if(vis.find(a) == vis.end()){
				vis.insert(a);
				fila.push(a);
			}
		}
		// rotacoes verticais
		a = cur;
		for(int i=0; i<3; i++){
			char c = a[3];
			a[3] = a[5];
			a[5] = a[1];
			a[1] = a[0];
			a[0] = c;
			if(vis.find(a) == vis.end()){
				vis.insert(a);
				fila.push(a);
			}
		}
	}
	cubos.insert(s);
}

int main(){
    fast
    int n;
    string s = "123456";
    while(cin >> n && n){
    	set<string> cubos;
    	while(n--){
    		for(int i=0; i<6; ++i)
    			cin >> s[i];
    		if(sz(cubos))
    			rota(cubos, s);
    		else
    			cubos.insert(s);
    	}
    	cout << sz(cubos) << '\n';
    }
    return 0;
}
