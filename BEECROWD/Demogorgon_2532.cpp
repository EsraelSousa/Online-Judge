#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAXN = 1e3+5;
const int MAXV = 2*1e3+5;
int dp[MAXN][MAXV], val[MAXN], peso[MAXN];

int sol(int i, int w){
	if(w <= 0) return 0;
	if(i == 0) return 1e9;
	if(dp[i][w] != -1) return dp[i][w];
	int op1 = sol(i-1, w);
	int op2 = val[i] + sol(i-1, w-peso[i]);
	return dp[i][w] = min(op1, op2);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    //fstream out;
    //out.open("saida.txt");
    int N, W;
    int sum;
    while(cin >> N >> W){
    	sum = 0;
    	for(int i=1; i<=N; i++){
    		cin >> peso[i] >> val[i];
    		sum += peso[i];
    	}
    	memset(dp, -1, sizeof(dp));
    	cout << ((sum < W)? -1 : sol(N, W)) << '\n';
    }
    //out.close();  
    return 0;
}
