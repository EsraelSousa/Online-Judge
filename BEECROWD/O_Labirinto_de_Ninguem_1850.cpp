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

const int MAXN = 1e2+5;

struct state{
    int distancia;
    int x;
    int y;
    int mask;

    state(){

    }

    state(int _distancia, int _x, int _y, int _mask){
        this->distancia = _distancia;
        this->x = _x;
        this->y = _y;
        this->mask = _mask;
    }

    bool operator<(const state &other) const{
        return this->distancia < other.distancia;
    }
};

char mapa[MAXN][MAXN];
int n, m;
bool vis[MAXN][MAXN][3*MAXN];
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};

int dijkstra(int x, int y){
    queue<state> fila;
    fila.push(state(0, x, y, 0));
    int mask, distancia;
    state atual;
    while(!fila.empty()){
        distancia = fila.front().distancia;
        x = fila.front().x;
        y = fila.front().y;
        mask = fila.front().mask;
        fila.pop();
        if(mapa[x][y] == '*')
            return distancia;
        if(vis[x][y][mask]) continue;
        vis[x][y][mask] = 1;
        for(int d=0; d<4; d++){
            int _x = x + dx[d];
            int _y = y + dy[d];
            int _mask = mask;
            if(_x >= 0 && _x < n && _y >= 0 && _y < m){
                if(mapa[_x][_y] == '#') continue;
                if(isupper(mapa[_x][_y])){
                    if(!(mask & (1 << (mapa[_x][_y] - 'A')))) continue;
                }
                if(islower(mapa[_x][_y]))
                    _mask |= 1 << (mapa[_x][_y] - 'a');
                fila.push(state(distancia+1, _x, _y, _mask));
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
    while(cin >> mapa[n]){
        n++;
    }
    m = 0;
    for(int i = 0; mapa[0][i] != '\0'; i++)
        m++;
    
    for(int i=0; i<n && !flag; i++){
        for(int j=0; j<m && !flag; j++){
            if(mapa[i][j] == '@'){
                x = i, y = j;
                flag = 1;
            }
        }
    }

    ans = dijkstra(x, y);
    if(ans != -1)
        cout << ans << '\n';
    else
        cout << "--\n";
    return 0;
}
