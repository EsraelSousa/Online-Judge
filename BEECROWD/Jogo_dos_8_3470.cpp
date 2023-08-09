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

typedef pair<int, string> psi;

vvi dx = {{1}, {0, 2}, {1}, {4}, {3, 5}, {4}, {7}, {6, 8}, {7}};
vvi dy = {{3}, {4}, {5}, {0, 6}, {1, 7}, {2, 8}, {3}, {4}, {5}};

int bfs(string &s){
	set<string> vis;
	priority_queue<psi, vector<psi>, greater<psi>> fila;
	string aux, t = "123456780";
	fila.push(psi(0, s));
	while(sz(fila)){
		int d = fila.top().ff;
		s = fila.top().ss;
		fila.pop();
		
		if(s == t) return d;
		vis.insert(s);
		int x = 0;
		while(s[x] != '0') x++;
		for(int i=x; i<=x; i++){
			for(auto &j: dx[i]){
				aux = s;
				swap(aux[x], aux[j]);
				if(vis.find(aux) != vis.end()) continue;
				fila.push(psi(d+1, aux));
				vis.insert(aux);
			}
			for(auto &j: dy[i]){
				aux = s;
				swap(aux[x], aux[j]);
				if(vis.find(aux) != vis.end()) continue;
				fila.push(psi(d+1, aux));
				vis.insert(aux);
			}
		}
	}
	return -1;
}

int main(){
    fast
    string s;
    for(int i=0; i<9; i++){
    	char x;
    	cin >> x;
    	s.push_back(x);
    } 
    cout << bfs(s) << '\n';
    return 0;
}
