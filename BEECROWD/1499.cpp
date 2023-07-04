#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

const int MAX = 4e4+5;

vi adj[2][MAX];
int maxDist[2][MAX];
bool vis[MAX];

int dfs(int tree, int v, int distB){
    vis[v] = 1;
    int ans = 0;
    for(auto &x: adj[tree][v])
        if(!vis[x])
            ans = max(ans, dfs(tree, x, distB+1));
    maxDist[tree][v] = max(distB, ans);
    return ans + 1;
}

int main(){
    fast
    int n, m;
    int u, v;
    while(cin >> n >> m){
        // limpa memoria
        for(int i=0; i<2; i++)
            for(int j=1; j<=max(n, m); j++)
                adj[i][j].clear();
        // leitura
        for(int i=0; i<n; i++){
            cin >> u >> v;
            adj[0][u].push_back(v);
            adj[0][v].push_back(u);
        }
        for(int i=0; i<m; i++){
            cin >> u >> v;
            adj[1][u].push_back(v);
            adj[1][v].push_back(u);
        }
        // porc
        memset(vis, 0, sizeof(vis));
        dfs(0, 1, 0);
        memset(vis, 0, sizeof(vis));
        dfs(1, 1, 0);
        int sum = 0;
        for(int i=1; i<=n; i++) cout << maxDist[0][i] <<' ';
        cout << '\n';
        for(int i=1; i<=m; i++) cout << maxDist[1][i] <<' ';
        cout << '\n';
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                sum += maxDist[0][i] + maxDist[1][j] + 1;
        cout << sum << '\n';
    }
    return 0;
}