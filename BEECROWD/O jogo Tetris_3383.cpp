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

int matrix[MAXN][MAXN];

vector<vector<int>> blocksX = {{0, 0, 0, 0}, {0, 1, 2, 3}, {0, 0, 1, 1}, {0, 1, 1, 2}, {0, 0, -1, -1}, {0, -1, -1, -2}, {0, 0, 0, 1}, {0, 1, 2, 2}, {0, 0, 0, -1}, {0, -1, -2, -2},
                               {0, 0, 1, 0}, {0, 1, 1, 2}, {0, 0, -1, 0}, {0, -1, -1, -2}, {0, 0, 1, 1}};
vector<vector<int>> blocksY = {{0, 1, 2, 3}, {0, 0, 0, 0}, {0, 1, 1, 2}, {0, 0, -1, -1}, {0, -1, -1, -2}, {0, 0, 1, 1}, {0, 1, 2, 2}, {0, 0, 0, -1}, {0, -1, -2, -2}, {0, 0, 0, 1},
                            {0, 1, 1, 2}, {0, 0, -1, 0}, {0, -1, -1, -2}, {0, 0, 1, 0}, {0, 1, 0, 1}};

bool isValide(int n, int i, int j){
    if(i < 1 || i > n || j < 1 || j > n)
        return false;
    return true;
}

int main(){
    fast
    int n;
    int tes = 1;
    while(cin >> n && n){
        int ans = 0;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                cin >> matrix[i][j];
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++){
                for(int block=0; block<sz(blocksX); block++){
                    int sum  = 0;
                    bool ok = 1;
                    for(int d=0; d<4; d++){
                        if(isValide(n, i+blocksX[block][d], j+blocksY[block][d]))
                            sum += matrix[ i+blocksX[block][d] ][ j+blocksY[block][d] ];
                        else
                            ok = 0;
                    }
                    if(!ok)
                    continue;
                    ans = max(ans, sum);
                }
            }
        cout << tes++ << ". " << ans << '\n';
    }
    return 0;
}