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

int dp[MAXN][MAXN];

int solve(vi &v){
    int n = sz(v);
    for(int i=0; i<n; i++)
        for(int j=0; i + j < n; j++){
            int k = i + j;
            if(i == 0)
                dp[j][k] = 0; // caso base
            
            if(i % 2 == 0) // segundo jodador
                dp[j][k] = min(dp[j + 1][k], dp[j][k - 1]);
            else // primeiro jogador
                dp[j][k] = max(dp[j + 1][k] + (v[j] % 2 == 0? 1 : 0), dp[j][k - 1] + (v[k] % 2 == 0? 1 : 0));
        }
    return dp[0][n-1];
}

int main(){
    fast
    int n;
    while(cin >> n && n){
        n *= 2;
        vi values(n);
        for(auto &x: values)
            cin >> x;

        cout << solve(values) << "\n";
    }
    return 0;
}