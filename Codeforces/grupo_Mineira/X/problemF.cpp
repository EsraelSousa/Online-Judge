#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
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

int main(){
    fast
    int n, m;
    cin >> n >> m;
    int ans = 0;
    vvi mapa(n, vi(m));
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> mapa[i][j];
    for(int i=0; i<n; i++){
        int cont  = 1;
        for(int j=1; j<m; j++){
            if(abs(mapa[i][j] - mapa[i][j-1]) > 1){
                ans = max(ans, cont);
                cont  = 1;
            }
            else cont++;
        }
        ans = max(ans, cont);
    }
    for(int j=0; j<m; j++){
        int cont = 1;
        for(int i=1; i<n; i++){
            if(abs(mapa[i][j] - mapa[i-1][j]) > 1){
                ans = max(ans, cont);
                cont = 1;
            }
            else cont++;
        }
        ans = max(ans, cont);
    }
    cout << ans << '\n';
    return 0;
}