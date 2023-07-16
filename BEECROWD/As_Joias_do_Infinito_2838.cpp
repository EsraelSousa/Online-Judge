#include <bits/stdc++.h>
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

const int MAXN = 55;

struct state{
    int distancia;
    int x;
    int y;
    int poder;
    int mask;

    state(){

    }

    state(int _distancia, int _x, int _y, int _poder, int _mask){
        this->distancia = _distancia;
        this->x = _x;
        this->y = _y;
        this->poder = _poder;
        this->mask = _mask;
    }

    bool operator<(const state &other) const{
        return this->distancia < other.distancia;
    }
};

char mapa[MAXN][MAXN];
int n, m;
bool vis[MAXN][MAXN][MAXN][MAXN];
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};

int tipoPoder(char c){
	//cout << c << " chama\n";
	switch(c){
		case 'e':
			return 1;
		case 'm':
			return 2;
		case 'p':
			return 4;
		case 'r':
			return 8;
		case 't':
			return 16;
	}
	
	return 0;
}

int dijkstra(int x, int y){
    queue<state> fila;
    fila.push(state(0, x, y, 0, 0));
    int mask, distancia, poder;
    while(!fila.empty()){
        distancia = fila.front().distancia;
        x = fila.front().x;
        y = fila.front().y;
        poder = fila.front().poder;
        mask = fila.front().mask;
        fila.pop();
        if(poder == (1 << 5) - 1)
            return distancia;
        if(vis[x][y][poder][mask]) continue;

        vis[x][y][poder][mask] = 1;
        for(int d=0; d<4; d++){
            int _x = x + dx[d];
            int _y = y + dy[d];
            int _poder = poder;
            int _mask = mask;
            if(_x >= 0 && _x < n && _y >= 0 && _y < m){
                if(mapa[_x][_y] == '#') continue;
                if(isupper(mapa[_x][_y])){
                    if(!(mask & (1 << (mapa[_x][_y] - 'A')))) continue;
                }
                if(islower(mapa[_x][_y]) && mapa[_x][_y] >='a' && mapa[_x][y] <= 'd')
                    _mask |= 1 << (mapa[_x][_y] - 'a');
                if(mapa[_x][_y] >= 'e')
                	_poder |= tipoPoder(mapa[_x][_y]);
                fila.push(state(distancia+1, _x, _y, _poder, _mask));
            }
        }
    }
    return -1;
}

int main(){
    fast
    int x, y;
    int ans;
    bool flag = 0;
 
    cin >> n >> m;
    for(int i=0; i<n; i++)
    	cin >> mapa[i];
    
    for(int i=0; i<n && !flag; i++){
        for(int j=0; j<m && !flag; j++){
            if(mapa[i][j] == 'T'){
                x = i, y = j;
                flag = 1;
            }
        }
    }
    mapa[x][y] = '.';
    ans = dijkstra(x, y);
    if(ans != -1)
        cout << ans << '\n';
    else
        cout << "Gamora\n";
    return 0;
}
