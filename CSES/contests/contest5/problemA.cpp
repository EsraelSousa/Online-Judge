#include <bits/stdc++.h>

using namespace std;

const int IFN = 1e9;
const int MAXN = 1e5+5;

int n;
int weight[MAXN];
int dp[MAXN][3];

int solve(int position, int sum){
    if(position == n)
        return sum? -IFN : 0;
    if(dp[position][sum] != -1) return dp[position][sum];
    return dp[position][sum] = max(solve(position+1, sum), 1+solve(position+1, (sum + weight[position])%3));
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for(int i=0; i<n; i++) cin >> weight[i];
    cout << solve(0, 0) << '\n';
    return 0;
}