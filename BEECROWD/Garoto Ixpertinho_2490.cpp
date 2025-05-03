#include <bits/stdc++.h>

using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
#define sz(x) (int)(x.size())
#define all(x) x.begin(), x.end()
#define ii pair<int, int>
#define ff first
#define ss second
#define str string
#define pb push_back

struct DSU {
    std::vector<int> parent, size;

    DSU(int n) {
        parent.resize(n);
        size.assign(n, 1);
        for (int i = 0; i < n; ++i)
            parent[i] = i;
    }

    int find(int u) {
        if (parent[u] != u)
            parent[u] = find(parent[u]);
        return parent[u];
    }

    bool unite(int u, int v) {
        u = find(u);
        v = find(v);
        if (u == v)
            return false;
        if (size[u] < size[v])
            std::swap(u, v);
        parent[v] = u;
        size[u] += size[v];
        return true;
    }

    bool same(int u, int v) {
        return find(u) == find(v);
    }

    int get_size(int u) {
        return size[find(u)];
    }
};


void solve() {
	int n, m;
	double T, t;
	int u, v;
	while(cin >> n >> m >> T && n){
		vector<tuple<double, int, int>> edges;
		while(m--){
			cin >> u >> v >> t;
			edges.emplace_back(tuple(t, u, v));
		}
		sort(all(edges));
		double cost = 0;
		int countStop = 0;
		DSU dsu(n+1);
		for(auto &[dist, u, v]: edges){
			if(!dsu.same(u, v)){
				if(dist - T > 1e-6){
					countStop += 1;
                    cost += 2;
                }
				cost += dist;
				dsu.unite(u, v);
			}
		}
		cout << cost << ' ' << countStop << '\n';
	}
}

int main() {
    fast;
    int tes = 1;
    cout << fixed << setprecision(2);
    //cin >> tes;
    while (tes--) {
        solve();
    }
    return 0;
}
