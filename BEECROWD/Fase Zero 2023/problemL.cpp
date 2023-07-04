#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

const int MAX = 1e3+5;
const int MAXN = 1e6 + 5;
ll bit[MAX][MAX];
int qtdCelula[MAXN];
int n, m;

int lowbit(int x){
    return x & (-x);
}

void upd(int x, int y, int v){
    for(; x<=n; x += lowbit(x))
        for(int j=y; j <=m; j += lowbit(j))
            bit[x][j] += v;
}

int get(int x, int y){
    int ans = 0;
    for(; x > 0; x -= lowbit(x))
        for(int j=y; j>0; j -= lowbit(j))
            ans += bit[x][j];
    return ans;
}

int main(){
    fast
    int x, y, R;
    int qtdSensor;
    ll ans  = 0;
    cin >> n >> m >> qtdSensor;
    while(qtdSensor--){
        cin >> x >> y >> R;
        int x1 = max(1, x-R);
        int y1 = max(1, y-R);
        int x2 = min(n, x+R);
        int y2 = min(m, y+R);
        upd(x1, y1, 1);
        upd(x2+1, y2 +1, 1);
        upd(x1, y2+1, -1);
        upd(x2+1, y1, -1);
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int x = get(i, j);
            //cout << x << ' ';
            qtdCelula[x]++;
        }
        //cout << '\n';
    }
    //cout << qtdCelula[1] << '\n';
    for (int i = 0; i < 2005; i++)
        ans += qtdCelula[i] * i;
    cout << ans / (n * m) << '\n';
    return 0;
}