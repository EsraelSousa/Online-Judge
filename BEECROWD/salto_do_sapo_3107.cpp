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
#define mp make_pair
#define all(x) x.begin(), x.end()
#define left(x) (2*x)
#define right(x) (2*x + 1)
 
const int MAXN = 1e6+5;
const int IFN = 1e9+9;
int dp[MAXN];
int X, Y;
vi pedras;

int solve(int m){
    priority_queue<ii, vector<ii>, greater<ii>> fila_short, fila_long;
    //priority_queue<ii> fila_short, fila_long;
    int n = pedras.size();
    for(int i=0; i<=n+2; i++) dp[i] = IFN;
    fila_short.push({1, 1+X});
    fila_long.push({1, 1+Y});
    for(int i=0; i<n; i++){
        while(fila_long.size() && fila_long.top().sd < pedras[i]) fila_long.pop();
        while(fila_short.size() && fila_short.top().sd < pedras[i]) fila_short.pop();
        ii _short = {IFN ,-1}, _long = make_pair(IFN, -1);
        if(fila_short.size())
            _short = fila_short.top();
        if(fila_long.size())
            _long = fila_long.top();
        if(_short.sd > -1){
            fila_short.push({_short.fs+1, pedras[i]+X});
            fila_long.push({_short.fs+1, pedras[i]+Y});
        }
        if(_long.sd > -1)
            fila_short.push({_long.fs+1, pedras[i]+X});
    }
    while(fila_long.size() && fila_long.top().sd < m) fila_long.pop();
    while(fila_short.size() && fila_short.top().sd < m) fila_short.pop();
    int ans = IFN;
    if(fila_short.size())
        ans = fila_short.top().fs;
    if(fila_long.size())
        ans = min(ans, fila_long.top().fs);
    return ans;
}
 
int main(){
    fast
    int n, m, x;
    cin >> n >> m;
    while (n--){
        cin >> x;
        pedras.push_back(x);
    }
    cin >> X >> Y;
    int ans = solve(m);
    cout << ((ans != IFN)? ans : -1) << '\n';
    return 0;
}