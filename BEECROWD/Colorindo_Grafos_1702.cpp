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

int n, m, p, k;

class DSU {
    private:
        vector<int> parent, rank;
    
    public:
        DSU(int n) {
            parent.resize(n);
            rank.resize(n, 1);
            for (int i = 0; i < n; i++) {
                parent[i] = i;
            }
        }
    
        int find(int x) {
            if (parent[x] != x) {
                parent[x] = find(parent[x]); // Path compression
            }
            return parent[x];
        }
    
        void unite(int x, int y) {
            int rootX = find(x);
            int rootY = find(y);
            if (rootX != rootY) {
                if (rank[rootX] > rank[rootY]) {
                    parent[rootY] = rootX;
                } else if (rank[rootX] < rank[rootY]) {
                    parent[rootX] = rootY;
                } else {
                    parent[rootY] = rootX;
                    rank[rootX]++;
                }
            }
        }
    
        bool sameSet(int x, int y) {
            return find(x) == find(y);
        }
    };
    

void task(){
    cin >> n >> m >> p >> k;
    vi colors(n);
    bool ok = 1;
    DSU trees(n);
    vector<vector<bool>> adj(n, vector<bool>(n, false));
    for(auto &x: colors)
        cin >> x;
    int used = 0;
    
    while(m--){
        int a, b;
        cin >> a >> b;
        a--, b--;
        adj[a][b] = adj[b][a] = 1;
        if(!trees.sameSet(a, b)){
            used++;
            trees.unite(a, b);
        }
        ok &= (colors[a] != colors[b]);
    }
    if(!ok){ // já existe uma aresta ligando dois vertices com a mesma cor
        cout << "N\n";
        return ;
    }
    int qtdEdgesAdd = 0;
    int qtdNecessary = 0;
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(colors[i] != colors[j] && !adj[i][j]){
                adj[i][j] = adj[j][i] = 1;
                if(!trees.sameSet(i, j)){
                    trees.unite(i, j);
                    qtdNecessary++;
                }
                else
                    qtdEdgesAdd++;
            }
    if(qtdNecessary > p){
        cout << "N\n";
        return ;
    }
    cout << ((qtdEdgesAdd + qtdNecessary >= p && qtdNecessary + used == n-1)? "Y\n" : "N\n");
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--)
        task();
    return 0;
}