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

const int MAXN = 1e5+5;

int dp[MAXN];
int indicacao[MAXN];
bool isStack[MAXN];

int solve(int id){
    int &ans = dp[id];
    if(ans != -1) return ans;
    if(indicacao[id] == id || isStack[id]) return 0;
    isStack[id] = true;
    return ans = 1 + solve(indicacao[id]);
}

int main(){
    fast
    int n, ans = 1;
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> indicacao[i];
    for(int i=1; i<=n; i++)
        ans = max(ans, solve(i));
    cout << ans << '\n';
    return 0;
}