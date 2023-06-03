// link: https://codeforces.com/group/YgJmumGtHD/contest/103794/problem/H

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define fs first
#define sd second;
#define all(x) x.begin(), x.end()
#define left(x) (2*x)
#define right(x) (2*x + 1)

const int MAX = 512;
int dx[] = {0, 1, 1, 1, 0, -1, -1, -1}, dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int mapa[MAX][MAX];
int n, m;

bool isValido(int x, int y){
    if(x < 1 || x > n || y < 1 || y > m) return 0;
    return 1;
}

int main(){
    fast
    int a, b;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin >> mapa[i][j];
    cin >> a >> b;
    int contMovimento = n+m+1;
    while (contMovimento--){
        int adjacentes = 0;
        for(int i=0; i<8; i++)
            adjacentes += isValido(a + dx[i], b + dy[i]);
        int brinquedos = mapa[a][b] / adjacentes;
        mapa[a][b] %= adjacentes;
        for(int i=0; i<8; i++)
            if(isValido(a+dx[i], b+dy[i]))
                mapa[ a+dx[i] ][ b+dy[i] ] += brinquedos;
        /*cout << "===================\n";
        for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << mapa[i][j] << ' ';
            
        }
        cout << '\n';
        } cout << "===================\n";*/
        int maiorValor = -1, id = -1;
        for(int i=0; i<8; i++){
            if(isValido(a+dx[i], b+dy[i]))
                if(mapa[ a+dx[i] ][ b+dy[i] ] > maiorValor){
                    maiorValor = mapa[ a+dx[i] ][ b+dy[i] ];
                    id = i;
                }
        }
        a += dx[id], b += dy[id];
    }
    int ans = -1;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            ans = max(ans, mapa[i][j]);
    cout << ans << '\n';
    return 0;
}
