#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <iomanip>

using namespace std;

typedef pair<int, int> ii;
typedef long long ll;
#define ff first
#define ss second

const int MAXN = 15, IFN = 1e9;
int adj[MAXN][MAXN];
ll dist[MAXN], vis[MAXN];

int dijkstra(int s, int t){
	dist[s] = 0;
	priority_queue<ii, vector<ii>, greater<ii>> fila;
	int v, d;
	fila.push({0, s});
	while(fila.size()){
		v = fila.top().ss;
		d = fila.top().ff;
		fila.pop();
		if(vis[v]) continue;
		vis[v] = 1;
		for(int i=1; i<MAXN; i++){
			if(d + adj[v][i] < dist[i] && adj[v][i] < IFN) {
				dist[i] = d + adj[v][i];
				fila.push({d + adj[v][i], i});
			}
		}
	}
	return dist[t];
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int chegada, n, v;
	string a, b;
	int p, cont, id1, id2;
	map<string, int> ids;
	int tes = 1;
	while(cin >> chegada >> n >> v && (chegada + n + v)){
		for(int i=1; i<=v; i++){
			 vis[i] = 0;
			 dist[i] = IFN;
			 for(int j=i; j<=v; j++)
			 	adj[i][j] = adj[j][i] = IFN;
		}
		ids.clear();
		cont = 1;
		while(n--){
			cin >> a >> b >> p;
			if(ids.find(a) == ids.end())
				ids[a] = cont++;
			if(ids.find(b) == ids.end())
				ids[b] = cont++;
			id1 = ids[a];
			id2 = ids[b];
			adj[id1][id2] = p;
		}
		int ans = dijkstra(ids["varzea"], ids["alto"]);
		int hora = 17*60;
		if(chegada > 30) hora += 50;
		else hora += 30;
		hora += ans;
		cout << setw(2) << setfill('0') << hora/60 << ':';
		cout << setw(2) << setfill('0') << hora%60 << '\n';
		cout << ((hora <= 18*60)? "Nao ira se atrasar\n" : "Ira se atrasar\n");
	}
	return 0;
}
