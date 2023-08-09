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

const int MAXN = 1e5+5;

vi adj[MAXN];
bool vis[MAXN];

void dfs(int v){
	vis[v] = 1;
	for(auto &x: adj[v])
		if(!vis[x])
			dfs(x);
}

int main(){
    fast
    int n, m, ans = 0;
    cin >> n >> m;
    while(m--){
    	int a, b;
    	cin >> a >> b;
    	adj[a].push_back(b);
    	adj[b].push_back(a);
    }
    for(int i=1; i<=n; i++)
    	if(!vis[i]){
    		ans++;
    		dfs(i);
    	}
    cout << ans << '\n';
    return 0;
}
