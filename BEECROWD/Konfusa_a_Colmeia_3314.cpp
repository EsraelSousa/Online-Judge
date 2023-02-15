#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;
const int LOGN = 18;

vector<int> listAdj[MAXN][26];
int ordemVisitado[MAXN];
int nivel[MAXN], T=1;
int lca[MAXN][LOGN];

void dfs(int v, int pai){
    ordemVisitado[T] = v;
    T++;
    lca[v][0] = pai;
	for(int k=1; k<LOGN; k++)
		lca[v][k] = lca[ lca[v][k-1] ][k-1];
	for(int i=0; i<26; i++){
		for(int x: listAdj[v][i]){
            nivel[x] = nivel[v] + 1;
			dfs(x, v);
		}
	}
}

int getLca(int u, int v){
    if(u == v) return u;
    if(nivel[u] < nivel[v]) swap(u, v);
    for(int k=LOGN-1; k>=0; k--)
        if(nivel[ lca[u][k] ] >= nivel[v]) 
    		u = lca[u][k];
    if(u == v) return u;
    for(int k=LOGN-1; k>=0; k--){
        if(lca[u][k] != lca[v][k]){
            u = lca[u][k];
            v = lca[v][k];
        }
    }
    return lca[u][0];
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, query, u, v, a;
    char letra;
    cin >> n >> query;
    for(int i=2; i<=n; i++){
        cin >> u >> letra;
        listAdj[u][letra-'a'].push_back(i);
    }
    nivel[1] = 0;
    dfs(1, 1);
    while(query--){
        cin >> u >> v;
        if(u > v) swap(u, v);
        a = getLca(ordemVisitado[u], ordemVisitado[v]);
        cout << nivel[a] << '\n';
    }
    return 0;
}
