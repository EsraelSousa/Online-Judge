#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) x.begin(), x.end()

const int MAX = 455, MAXL = 15;
int dist[MAX][MAX], distA[MAX][MAX];
int n;
int pai[MAX], peso[MAX];
int lca[MAX][MAXL];
bool visitado[MAX], nivel[MAX];
ll distR[MAX];
set<pair<int, int>> usada;

struct edge{
	int u, v;
	int distancia;
	bool operator<(const edge& o) const{
		return this->distancia < o.distancia;
	}
};

vector<int> adj[MAX];

int find(int x){
	if(x == pai[x]) return x;
	return pai[x] = find(pai[x]);
}

void junta(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b) return;
	if(peso[a] < peso[b])
		pai[a] = b;
	else if(peso[a] > peso[b])
		pai[b] = a;
	else{
		pai[a] = b;
		peso[b]++;
	}
}

void dfs(int v, ll d){
	visitado[v] = 1;
	distR[v] = d;
	for(int i=1; i<15; i++)
		lca[v][i] = lca[ lca[v][i-1] ][i-1];
	
	for(auto& x: adj[v])
		if(!visitado[x]){
			lca[x][0] = v;
			nivel[x] =nivel[v]+1;
			dfs(x, d + dist[v][x]);
		}
}

int LCA(int u, int v){
    
    if(nivel[u] < nivel[v]) swap(u, v); // isto é para definir u como estando mais abaixo
    
    // vamos agora fazer nivel[u] ser
    // igual nivel[v], subindo pelos
    // ancestrais de u
    
    for(int i = MAXL-1;i >= 0;i--)
        if(nivel[u] - (1<<i) >= nivel[v])
            u = lca[u][i];
            
    // agora, u e v estão no mesmo nível
    if(u == v) return u;
    
    // subimos o máximo possível de forma
    // que os dois NÃO passem a ser iguais
    
    for(int i = MAXL-1;i >= 0;i--)
        if(lca[u][i] != -1 && lca[u][i] != lca[v][i]){
            u = lca[u][i];
            v = lca[v][i];
        }
    
    // como subimos o máximo possível
    // sabemos que u != v e que pai[u] == pai[v]
    // logo, LCA(u, v) == pai[u] == pai[v]
    
    return lca[u][0];
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int flag=1, k, ans=0;
	edge a;
	vector<edge> arestas;
	cin >> n >> k;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++){
			cin >> dist[i][j];
			distA[i][j] = dist[i][j];
		}
	for(int i=1; i<=n; i++)
		for(int j=i+1; j<=n; j++){
			flag &= dist[i][j] == dist[j][i];
			a.u = i;
			a.v = j;
			a.distancia = dist[i][j];
			arestas.push_back(a);
		}
    for(int k=1; k<=n; k++)
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                distA[i][j] = min(distA[i][j], distA[i][k]+distA[k][j]);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            flag &= (distA[i][j] == dist[i][j]);
	if(!flag){
		cout << "*\n";
		return 0;
	}
	
	sort(all(arestas));
	for(int i=1; i<=n; i++) pai[i]=i, peso[i]=0;
	for(auto& x: arestas){
		adj[ x.u ].push_back(x.v);
		adj[ x.v ].push_back(x.u);
		cout << x.distancia << '\n';
		int v1 = find(x.u);
		int v2 = find(x.v);
		if(v1 != v2){
			junta(x.u, x.v);
			ans++;
		}
	}
	lca[1][0] = nivel[1] = 1;
	dfs(1, 0LL);
	cout << ans << " ans pos kruskal\n";

	for(int k=1; k<=n; k++)
		for(int i=1; i<=n; i++)
			for(int j=1; j<=n; j++)
				distA[i][j] = min(distA[i][j], distA[i][k]+distA[k][j]);
	for(int i=1; i<=n; i++)
		for(int j=i+1; j<=n; j++){
			int lc = LCA(i, j);
			if(distA[i][j] < distR[i] + distR[j] - 2*distR[lc]){
				ans++;
				cout << i << ' ' << j << ' ' << distR[i] << ' ' << distR[j] << ' ' << distR[lc] << '\n';
			}
		}
		
	cout << ans << ' ' << k << ' ' << (usada.size()-n)<< '\n';
	set<pair<int,int>>:: iterator it;
	it = usada.begin();
	while(it != usada.end() ){
		cout << it->first << ' ' << it->second << '\n';
		it++;
	}
	return 0;
}

/*
5 8
0 3 4 9 5
3 0 5 6 2
4 5 0 11 7
9 6 11 0 4
5 2 7 4 0

2-5 2
1-2 3
1-3 4
4-5 4
1
	2
		5
			4
	3
*/