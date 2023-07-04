#include <bits/stdc++.h>

using namespace std;

/*
  Esse problema é apenas selecionara maior componete de um subgrafo induzido onde as
  arestas ligam dois vertices de grau >= k, pode usar a ideia de ordenação topologica para
  remover arestas entre vertices com grau < k, (grau[x]-- remove a aresta)
 */

int n, m, k; // vertices, arestas, fator k

const int MAX = 1e3+5;
vector<int> adj[MAX];
int vis[MAX], grau[MAX];

int dfs(int v){
	vis[v] = 1;
	int ans = 1;
	for(auto &x: adj[v])
		if(!vis[x] && grau[v] >= k && grau[x]>=k)
			ans += dfs(x);
	return ans;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
	int u, v;
	int ans = 0;
	queue<int> fila;
	while(cin >> n >> m >> k && n){
		// limpa memoria
		for(int i=1; i<=n; i++){
			adj[i].clear();
			vis[i] = grau[i] = 0;
		}
		ans = 0;
		while(!fila.empty()) fila.pop();
		// le arestas
		while(m--){
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
			grau[u]++;
			grau[v]++;
		}
		// remove arestas
		for(int i=1; i<=n; i++){
			if(grau[i] < k)
				fila.push(i);
		}
		while(fila.size()){
			u = fila.front();
			fila.pop();
			if(vis[u]) continue;
			vis[u] = 1;
			for(auto &x: adj[u]){
				grau[x]--;
				if(grau[x] < k)
					fila.push(x);
			}
		}
		// Pega a maior componente conexa
		memset(vis, 0, sizeof(vis));
		for(int i=1; i<=n; i++)
			if(!vis[i])
				ans = max(ans, dfs(i));
		// mostra resposta
		cout << (ans==1? 0 : ans) << "\n";
	}
	return 0;
}
