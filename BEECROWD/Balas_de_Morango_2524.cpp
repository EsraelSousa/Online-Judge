#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAXN = 1e3+5;
const int IFN = 1e9;

int dp[MAXN][MAXN], balas[MAXN];
int n, m;

int solve(int p, int sum){
	if(p == m)
		return sum? -IFN : 0;
	if(dp[p][sum] != -1)
		return dp[p][sum];
	return dp[p][sum] = max(solve(p+1, sum), 1+solve(p+1, (sum+balas[p])%n));
}

int main(){
	ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
	while(cin >> n >> m){
		memset(dp, -1, sizeof dp);
		for(int i=0; i<m; i++)
			cin >> balas[i];
		cout << solve(0, 0) << '\n';
	}
	return 0;
}
