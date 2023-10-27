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

const int MAXN = 505;

char mapa[MAXN][MAXN];
bool vis[MAXN][MAXN], vis1[MAXN][MAXN];
int aux[MAXN][MAXN];
int X[] = {1, -1, 0, 0}, Y[] = {0, 0, 1, -1};
int n, m, x, y;

bool ehValido(int i, int j){
	if(i < 0 || i >= n || j < 0 || j >= m) return 0;
	if(vis1[i][j] || mapa[i][j] != '.') return 0;
	return 1;
}

void bfs(int i, int j){
	queue<ii> fila;
	fila.push({i, j});
	int maiorDistancia = 0;
	memset(vis1, 0, sizeof(vis1));
	aux[i][j] = 0;
	vis1[i][j] = 1;
	while(sz(fila)){
		i = fila.front().ff;
		j = fila.front().ss;
		fila.pop();
		if(aux[i][j] > maiorDistancia)
			x = i, y = j, maiorDistancia = aux[i][j];
		vis[i][j] = vis1[i][j];
		for(int d = 0; d<4; d++){
			int ii = i + X[d];
			int jj = j + Y[d];
			if(ehValido(ii, jj)){
				fila.push({ii, jj});
				aux[ii][jj] = aux[i][j]+1;
				vis1[ii][jj] = 1;
			}
		}
	}
}

int main(){
    fast
    while(cin >> n >> m && (n+m)){
    	for(int i=0; i<n; i++)
    		cin >> mapa[i];
    	memset(vis, 0, sizeof(vis));
    	
    	int ans = 0;
    	
    	for(int i=0; i<n; i++)
    		for(int j=0; j<m; j++){
    			if(!vis[i][j] && mapa[i][j] == '.'){
    				bfs(i, j);
    				bfs(x, y);
    				ans = max(ans, aux[x][y]);
    			}
    		}
    	cout << ans << '\n';
    }
    return 0;
}
