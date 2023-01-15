#include <bits/stdc++.h>

using namespace std;

const int MAXN = 20005;
const int MAXM = 100005;
const int K = 18;

typedef pair<int, int> pii;
struct edge{
    int peso;
    int u, v;
};

edge arestas[MAXM];
int lca[MAXN][K], maximo[MAXN][K];
int pai[MAXN], peso[MAXN];
int nivel[MAXN];
int IFN = 1e9;
vector<pii> listAdj[MAXN];
bool visitado[MAXN];

bool comp(edge& a, edge& b){
    return a.peso > b.peso;
}

// funções do union find
int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int a, int b){ 
    a = find(a);
    b = find(b);
    
    if(peso[a] < peso[b]) pai[a] = b;
    else if(peso[b] < peso[a]) pai[b] = a;
    else{
        pai[a] = b;
        peso[b]++;
    }
    
}

void dfs(int v, int niv){
    visitado[v] = true;
    nivel[v] = niv;
    for(int i=1; i<K; i++){
        lca[v][i] = lca[ lca[v][i-1] ][i-1];
        maximo[v][i] = min(maximo[v][i-1], maximo[ lca[v][i-1] ][i-1]);
    }
    for(auto x: listAdj[v]){
        if(!visitado[x.first]){
            lca[x.first][0] = v;
            maximo[x.first][0] = x.second;
            dfs(x.first, niv+1);
        }
    }
}

int getAns(int u, int v){
    int ans = IFN;
    if(nivel[u] < nivel[v]) swap(u, v);
    for(int i = K-1;i >= 0;i--){
        if(lca[u][i] != -1 && nivel[ lca[u][i] ] >= nivel[v]){
            ans = min(ans, maximo[u][i]);
            u = lca[u][i];
        }
    }
    if(u == v) return ans;
    for(int i = K-1;i >= 0;i--){
        if(lca[u][i] != lca[v][i]){
            ans = min(ans, min(maximo[u][i], maximo[v][i]));
            u = lca[u][i];
            v = lca[v][i];
        }
    }
    return min(ans, min(maximo[u][0], maximo[v][0]));
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, m, s;
    int a, b, cont;
    while(cin >> n >> m >> s){
        for(int i=0; i<m; i++) cin >> arestas[i].u >> arestas[i].v >> arestas[i].peso;
        sort(arestas, arestas+m, comp); // ordenar as arestas por peso
        // agora fazer uma arvore geradora maxima
        for(int i = 1;i <= n;i++) pai[i] = i, peso[i] = 0; // kruskal
        cont = 0; // qtd arestas 
        for(int i=0; i<m && cont < n-1; i++){
            a = find(arestas[i].u);
            b = find(arestas[i].v);
            if(a != b){
                join(a, b);
                listAdj[ arestas[i].u ].push_back({arestas[i].v, arestas[i].peso});
                listAdj[ arestas[i].v ].push_back({arestas[i].u, arestas[i].peso});
                cont++;
            }
        }
        lca[1][0] = 1;
        for(int i=1; i<=n; i++){
            for(int j=0; j<K; j++)
                maximo[i][j] = IFN;// cout << maximo[i][j] << ' ';
            //cout << '\n';
        }
        dfs(1, 0);
        while(s--){
            cin >> a >> b;
            cout << getAns(a, b) << '\n';
        }

        for(int i=1; i<=n; i++){
            listAdj[i].clear();
            visitado[i] = 0;
        }
    }
    return 0;
}