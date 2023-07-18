#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

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

using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, 
             tree_order_statistics_node_update> data_gcc;

const int MAXN = 1e5+5;

int notas[MAXN];
int vis[MAXN];
vi adj[MAXN];
vector<data_gcc> compo(MAXN);

void dfs(int v, int c){
	vis[v] = c;
	compo[c].insert(notas[v]);
	for(auto &x: adj[v])
		if(!vis[x])
			dfs(x, c);
}

void update(int id, int newNota){
	compo[ vis[id] ].erase(compo[ vis[id] ].upper_bound(notas[id]));
	compo[ vis[id] ].insert(newNota);
	notas[id] = newNota;
}

int query(int id){
	return (int)(compo[ vis[id] ].order_of_key(notas[id]));
}

int main(){
    fast
    int n, m, q;
    int u, v;
    int op;
    cin >> n;
    for(int i=1; i<=n; i++){
    	cin >> notas[i];
    }
    cin >> m;
    while(m--){
    	cin >> u >> v;
    	adj[u].push_back(v);
    	adj[v].push_back(u);
    }
    u = 1;
    for(int i=1; i<=n; i++){
    	if(!vis[i]){
    		dfs(i, u);
    		u++;
    	}
    }
    	
    cin >> q;
    while(q--){
    	cin >> op;
    	if(op == 1){
    		cin >> v;
    		cout << query(v) << '\n';
    	}
    	else{
    		cin >> u >> v;
    		update(u, v);
    		
    	}
    }
    return 0;
}
