#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e3+5;

int n, p, k;
vector<int> graph[MAXN];
bool vis[MAXN];
int grau[MAXN];

int dfs(int u) {
    vis[u] = true;
    int ans = 1;
    for(auto x: graph[u])
    	if(!vis[x] && grau[x] >= k){
    		ans += dfs(x);
    	}
    return ans;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    while (true) {
        cin >> n >> p >> k;
        if (n == 0 && p == 0 && k == 0) {
            break;
        }
        for (int i = 1; i <= n; i++) {
            graph[i].clear();
            grau[i]=0;
        }
        for (int i = 0; i < p; i++) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
            grau[u]++;
            grau[v]++;
        }
        memset(vis, 0, sizeof vis);
        for(int i=1; i<=n; i++)
            cout << i << " -> " << grau[i] << '\n';
        int ans = 0;
        for(int i=1; i<=n; i++)
        	if(grau[i] >= k && !vis[i]){
        		ans = max(ans, dfs(i));
        	}
        cout << ans << '\n';
    }
    return 0;
}