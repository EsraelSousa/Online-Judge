#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <climits>

// #include <bits/stdc++.h>
using namespace std;

const int MAXN = 2501;

vector<int> adj[MAXN];
int N;

pair<int, int> bfs(int start, vector<int>& comp_nodes, vector<int>& parent, int ignore_u, int ignore_v) {
    vector<int> dist(N + 1, -1);
    queue<int> q;
    dist[start] = 0;
    q.push(start);

    int farthest = start;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if ((u == ignore_u && v == ignore_v) || (u == ignore_v && v == ignore_u)) continue;
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
                if (dist[v] > dist[farthest])
                    farthest = v;
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        if (dist[i] != -1) comp_nodes.push_back(i);
    }

    return {farthest, dist[farthest]};
}

pair<int, int> get_diameter_and_center(int start, int ignore_u, int ignore_v) {
    vector<int> comp_nodes, parent(N + 1, -1);

    int u = bfs(start, comp_nodes, parent, ignore_u, ignore_v).first;

    comp_nodes.clear();
    parent.assign(N + 1, -1);

    int v = bfs(u, comp_nodes, parent, ignore_u, ignore_v).first;

    vector<int> path;
    for (int x = v; x != -1; x = parent[x])
        path.push_back(x);

    int diameter = path.size()-1;
    int center = path[path.size() / 2 - (path.size() % 2 == 0)];

    return {diameter, center};
}

int main() {
    cin >> N;
    vector<pair<int, int>> edges;

    for (int i = 0; i < N - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges.push_back({u, v});
    }

    int min_diameter = INT_MAX;
    pair<int, int> oldEdge, newEdge;

    for (auto [u, v] : edges) {
	    auto [diam1, center1] = get_diameter_and_center(u, u, v);
	    auto [diam2, center2] = get_diameter_and_center(v, u, v);
	
	    int new_diameter = max({diam1, diam2, (diam1 + 1) / 2 + (diam2 + 1) / 2 + 1});
	    if(new_diameter <= min_diameter){
	    	min_diameter = new_diameter;
	    	oldEdge = {u, v};
	    	newEdge = {center1, center2};
	    }
	}
    cout << min_diameter << '\n';
	cout << oldEdge.first << ' ' << oldEdge.second << '\n';
	cout << newEdge.first << ' ' << newEdge.second << '\n';
    return 0;
}