#include <bits/stdc++.h>

using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define fs first
#define sd second
#define all(x) x.begin(), x.end()
#define left(x) (2*x)
#define right(x) (2*x + 1)

const int MAXN = 15;

struct Data{
	int distancia = 0;
	char grid[MAXN][MAXN];
	vector<ii> play;
	
	bool operator<(const Data& o) const {
        return this->distancia < o.distancia;
    }

    bool operator>(const Data& o) const {
        return this->distancia > o.distancia;
    }

    bool operator<=(const Data& o) const {
        return this->distancia <= o.distancia;
    }

    bool operator>=(const Data& o) const {
        return this->distancia >= o.distancia;
    }
};

bool isAlvo[MAXN][MAXN], vis[3][MAXN][MAXN];
int n;
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
set<string> visitado;
int ordem[6][3] = {{0, 1, 2}, {0, 2, 1}, {1, 0, 2}, {1, 2, 0}, {2, 0, 1}, {2, 1, 0}};

void reset(){
	memset(isAlvo, 0, sizeof(isAlvo));
	memset(vis, 0, sizeof(vis));
    visitado.clear();
}

bool isVisitado(Data& estado){
    string aux;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            aux.push_back(estado.grid[i][j]);
        }
    }
	return (visitado.find(aux) != visitado.end());
}

void addSet(Data& estado){
    string aux;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            aux.push_back(estado.grid[i][j]);
    visitado.insert(aux);
}

bool isBorda(int x, int y){
    if(x < 1 || x > n || y < 1 || y > n) return 1;
    return 0;
}

bool isValido(int x, int y, Data& estado){
	if(x < 1 || x > n || y < 1 || y > n) return 0;
    //cout << isVisitado(estado) << ' ' << ((estado.grid[x][y] == '.')) << " in valida\n";
	return (isVisitado(estado) && estado.grid[x][y] == '.');
}

int dijk(Data& estado){
	priority_queue<Data, vector<Data>, greater<Data>> fila;
	fila.push(estado);
	while(fila.size()){
        //cout << "entra fila\n";
		estado = fila.top();
		fila.pop();
		if(isVisitado(estado) == true) continue;
		//cout << estado.distancia << '\n';
		if(isAlvo[ estado.play[0].fs ][ estado.play[0].sd ] && 
           isAlvo[ estado.play[1].fs ][ estado.play[1].sd ] && 
           isAlvo[ estado.play[2].fs ][ estado.play[2].sd ]) 
                return estado.distancia;

		addSet(estado);
		//cout << fila.size() << " tamanho ao entrar\n";
		for(int i=0; i<4; i++){
			for(int k=0; k<6; k++){
                Data aux = estado;
                for(int j=0; j<3; j++){
                    int x = aux.play[ ordem[k][j] ].fs;
                    int y = aux.play[ ordem[k][j] ].sd;
                    if(isVisitado(aux) || isBorda(x+dx[i], y+dy[i]) || (aux.grid[ x + dx[i]][ y+dy[i] ] != '.')) continue; // nao anda o robo
                    aux.play[ ordem[k][j] ].fs += dx[i];
                    aux.play[ ordem[k][j] ].sd += dy[i];
                    swap(aux.grid[x][y], aux.grid[ x + dx[i] ][ y + dy[i] ]);
                }
                aux.distancia++;
                if(isVisitado(aux) == false){
                    //cout << aux.distancia << " add\n";
                    fila.push(aux);
                }
            }
		}
        //cout << fila.size() << " tamanho ao sair\n";
	}
	return -1;
}

void solve(){
    cin >> n;
    reset();
    Data inicio;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> inicio.grid[i][j];
            if(inicio.grid[i][j] >= 'A' &&  inicio.grid[i][j] <= 'C'){
                inicio.play.push_back({i, j});
            }
            else if(inicio.grid[i][j] == 'X'){
            	isAlvo[i][j] = 1;
            	inicio.grid[i][j] = '.';
            }
        }
    }
    int ans = dijk(inicio);
    if(ans == -1) cout << "trapped\n";
    else cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t, id=1;
    cin >> t;
    while(t--){
    	cout << "Case " << id++ << ": ";
        solve();
    }
    return 0;
}