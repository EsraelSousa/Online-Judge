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

struct state{
	int distancia = 0;
	ii roboA, roboB, roboC;
    
    // construtores
    state(ii A, ii B, ii C, int distancia){
        this->roboA = A;
        this->roboB = B;
        this->roboC = C;
        this->distancia = distancia;
    }

    state(){

    }
};

char grid[MAXN][MAXN];
int visitado[MAXN][MAXN][MAXN][MAXN][MAXN][MAXN];
int n, ans;
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};

bool isValido(ii robo){
	if(robo.fs < 1 || robo.fs > n || robo.sd < 1 || robo.sd > n) return false;
    return grid[ robo.fs ][ robo.sd ] != '#';
}

bool isAlvo(state& x){
    return grid[x.roboA.fs][x.roboA.sd] == 'X' &&
           grid[x.roboB.fs][x.roboB.sd] == 'X' &&
           grid[x.roboC.fs][x.roboC.sd] == 'X';
}

bool isDiferentes(ii A, ii B, ii C){
    return A != B && A != C && B != C;
}

bool isVisitado(state& x){
    if(!visitado[ x.roboA.fs ][ x.roboA.sd ][ x.roboB.fs ][ x.roboB.sd ][ x.roboC.fs ][ x.roboC.sd ] && 
                        isDiferentes(x.roboA, x.roboB, x.roboC))
        return (visitado[ x.roboA.fs ][ x.roboA.sd ][ x.roboB.fs ][ x.roboB.sd ][ x.roboC.fs ][ x.roboC.sd ] = true);
    return false;
}

int dijk(state& estado){
	queue<state> fila;
	ii newA, newB, newC;
    bool hasA, hasB, hasC;
    fila.push(estado);
    visitado[ estado.roboA.fs ][ estado.roboA.sd ][ estado.roboB.fs ][ estado.roboB.sd ][ estado.roboC.fs ][ estado.roboC.sd ] = true;
    state next;
	while(fila.size()){
		estado = fila.front();
        fila.pop();

        if(isAlvo(estado)) ans = min(ans, estado.distancia);

        for(int i=0; i<4; i++){
            newA.fs = estado.roboA.fs + dx[i], newA.sd = estado.roboA.sd + dy[i];
            newB.fs = estado.roboB.fs + dx[i], newB.sd = estado.roboB.sd + dy[i];
            newC.fs = estado.roboC.fs + dx[i], newC.sd = estado.roboC.sd + dy[i];

            hasA = isValido(newA);
            hasB = isValido(newB);
            hasC = isValido(newC);

            if(hasA || hasB || hasC){ // algum robo se movimenta
                if(hasA){
                    if(!hasB && !hasC && newA != estado.roboB && newA != estado.roboC) next.roboA = newA;
                    else if(hasB && !hasC && newA != estado.roboC) next.roboA = newA;
                    else if(hasC && !hasB && newA != estado.roboB) next.roboA = newA;
                    else if(hasB && hasC) next.roboA = newA;
                    else next.roboA = estado.roboA;
                }
                else next.roboA = estado.roboA;

                if(hasB){
                    if(!hasA && !hasC && newB != estado.roboA && newB != estado.roboC) next.roboB = newB;
                    else if(hasA && !hasC && newB != estado.roboC) next.roboB = newB;
                    else if(hasC && !hasA && newB != estado.roboA) next.roboB = newB;
                    else if(hasA && hasC) next.roboB = newB;
                    else next.roboB = estado.roboB;
                }
                else next.roboB = estado.roboB;

                if(hasC){
                    if(!hasA && !hasB && newC != estado.roboB && newC != estado.roboA) next.roboC = newC;
                    else if(hasA && !hasB && newC != estado.roboB) next.roboC = newC;
                    else if(hasB && !hasA && newC != estado.roboA) next.roboC = newC;
                    else if(hasA && hasB) next.roboC = newC;
                    else next.roboC = estado.roboC;
                }
                else next.roboC = estado.roboC;

                next.distancia = estado.distancia + 1;
                if(isVisitado(next)) fila.push(next);
            }
        }
		
	}
	return -1;
}

void solve(){
    cin >> n;
    ii A, B, C;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'A')
                A = ii(i, j);
            if(grid[i][j] == 'B')
                B = ii(i, j);
            if(grid[i][j] == 'C')
                C = ii(i, j);
        }
    
    memset(visitado, 0, sizeof(visitado));
    ans = 1e9;
    state inicio(A, B, C, 0);
    dijk(inicio);
    if(ans == (int)1e9) cout << "trapped\n";
    else cout << ans << '\n';
}

int main(){
    fast
    int t, id=1;
    cin >> t;
    while(t--){
    	cout << "Case " << id++ << ": ";
        solve();
    }
    return 0;
}
