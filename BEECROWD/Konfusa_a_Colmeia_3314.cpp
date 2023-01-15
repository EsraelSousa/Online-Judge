#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;
const int LOG = 19;

vector<int> listAdj[MAXN];
vector< pair<int, char> > grafo[MAXN];
bool visitado[MAXN];
int ordemVisitado[MAXN];
int altura[MAXN];
int pai[MAXN];
int lca[MAXN][LOG];

typedef pair<string, int> psi;

void bfs(int v){
    priority_queue<psi, vector<psi>, greater<psi> > fila;
    int u, nivel;
    string atual = "";
    int qtd = 1;
    fila.push({"", v});
    lca[v][0] = v;
    altura[v] = 0;
    while(fila.size()){
        atual = fila.top().first;
        u = fila.top().second;
        fila.pop();
        ordemVisitado[qtd++] = u;
        for(int k=1; k<LOG; k++)
            lca[u][k] = lca[ lca[u][k-1] ][ k-1 ];
        for(auto edg: grafo[u]){
        	fila.push({atual + edg.second, edg.first});
        	altura[edg.first] = altura[u]+1;
        	lca[edg.first][0] = u;
        }
    }
}

int getLca(int u, int v){
    if(altura[u] > altura[v]) swap(u, v);
    for(int k=18; k>=0; k--)
        if(altura[ lca[v][k] ] >= altura[u]) v = lca[v][k];
    if(u == v) return u;
    for(int k=18; k>=0; k--){
        if(lca[u][k] != lca[v][k]){
            u = lca[k][u];
            v = lca[k][v];
        }
    }
    return lca[u][0];
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, query, u, v;
    char letra;
    cin >> n >> query;
    for(int i=2; i<=n; i++){
        cin >> u >> letra;
        grafo[u].push_back({i, letra});
    }
    bfs(1);
    while(query--){
        cin >> u >> v;
        cout << u << ' ' << v << ' ';
        cout << altura[ getLca(ordemVisitado[u], ordemVisitado[v]) ] << '\n';
    }
    return 0;
}