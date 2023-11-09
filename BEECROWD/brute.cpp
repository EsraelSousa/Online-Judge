/*
A solução é uma aplicação do floyd-warshall, ideia de corretude:
esse algoritmo calcula a distancia minima de u para v para todos os pares u, v do grafo,
então se queremos encontrar um circuito (loop) entre dois vertices, basta pegar a distancia 
de u para v + a distancia de v para u. Temos só um problema em relação ao problema, temos
que considerar a distancia dos vertices, mas também o tempo de visitar cada vertice, podemos
apenas fazer uma modificação no peso das arestas para simplificar esse tempo.
Se de u para v temos p e o tempo de visita de v é t, então podemos dizer que de u para v é p+t.
Cuidado para considerar u e v diferentes.
*/

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

const int MAXN = 1e3+5;
const int INF = 1e9;

int tempo[MAXN];
int distancia[MAXN][MAXN];

int main(){
    fast
    int n, m, u, v, p;
    int ans = INF;
    cin >> n >> m;
    for(register int i=1; i<=n; ++i){
        cin >> tempo[i];
        // vamos aproveitar para setar a matriz aqui nesse for
        for(register int j=i; j<=n; ++j)
            distancia[i][j] = distancia[j][i] = INF;
    }

    for(register int i=0; i<m; ++i){
        cin >> u >> v >> p;
        distancia[u][v] = p + tempo[v];
    }

    for(register int k=1; k<=n; k++)
        for(register int i=1; i<=n; i++)
            for(register int j=1; j<=n; j++)
                distancia[i][j] = min(distancia[i][j],
                                      distancia[i][k] + distancia[k][j]);

    for(register int i=1; i<=n; i++)
        for(register int j=1; j<=n; j++)
            ans = min(ans, distancia[i][j] + distancia[j][i]);
    cout << ans << '\n';
    return 0;
}