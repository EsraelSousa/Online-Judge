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

int par[MAXN][MAXN];
bool G1[MAXN], G2[MAXN];
int n;

int countGroup(int &G){
    int ans = 0;
    for(int i=1; i<=n; i++)
        ans += G[i];
    return ans;
}

bool isOkGroups(){
    return 3 * countGroup(G1) <= 2 * n &&
           3 * countGroup(G2) <= 2 * n;
}

bool solve(){
    // checar G1 e G2
    for()
}

int main(){
    fast
    int m, a, b, y;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        for(int j=i; j<=n; j++)
            par[i][j] = par[j][i] = 2008;
    while(m--){
        cin >> a >> b >> y;
        par[a][b] = par[b][a] = y;
    }
    int Y;
    bool found = 0;
    for( Y=1928; Y<=2008 && !found; Y++){
        for(int i=1; i<=n && !found; i++){
            memset(G1, 0, sizeof(int)*(n+1));
            for(int j=1; j<=n; j++)
                if(i != j && par[i][j] < Y)
                    G1[j] = 1;
            G2[i] = 1;
            found = solve();
        }
    }
    if(Y <= 2008) cout << Y << '\n';
    else cout << "Impossible\n";
    return 0;
}

/*
Temos algumas possibilidades agora para G2:
1- Todos os pares em G2 já tem o primeiro encontro em um ano >= Y, então não podemos expandir mais nenhum 
conjunto (G1, G2) aí é só verificar os tamanhos dos conjuntos

2- Temos pelo menos um par que se conheceu antes de Y, que se divide em, uma pessoa x e y em G2 (x != y):
2.1 - podemos adicionar x e y no G1;
2.2 - podemos adicionar apenas x em G1;
2.3 - podemos adicionar apenas y em G2;
*/