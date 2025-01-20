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

struct DSU {
    vector<int> parent, rank;

    DSU(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int find(int u) {
        if (u == parent[u]) return u;
        return parent[u] = find(parent[u]); // Path compression
    }

    bool unite(int u, int v) {
        u = find(u);
        v = find(v);
        if (u == v) return false; // Já estão no mesmo componente
        if (rank[u] < rank[v]) swap(u, v);
        parent[v] = u;
        if (rank[u] == rank[v]) rank[u]++;
        return true; // Conseguiu unir
    }
};

void task(){
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    DSU F(n), G(n);
    vector<ii> edgesF(m1), edgesG(m2);
    for(auto &edge: edgesF){
        cin >> edge.ff >> edge.ss;
    }

    for(auto &edge: edgesG){
        cin >> edge.ff >> edge.ss;
        G.unite(edge.ff, edge.ss);
    }

    int ans = 0;
    for(auto &edge: edgesF){
        if(G.find(edge.ff) != G.find(edge.ss)){
            ans++;
            //cout << edge.ff << ' ' << edge.ss << " rem\n";
            continue;
        }
        F.unite(edge.ff, edge.ss);
    }

    for(auto &edge: edgesG){
        if(F.find(edge.ff) != F.find(edge.ss)){
            ans++;
            F.unite(edge.ff, edge.ss);
        }
    }

    cout << ans << '\n';
}

int main(){
    fast
    int tes = 1;
    cin >> tes;
    while(tes--)
        task();
    return 0;
}