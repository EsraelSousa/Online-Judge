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

long double dp[15][22][265];

ll mypow(int b, int n){
    ll ans = 1;
    for(int i=1; i<=n; i++)
        ans *= b;
    return ans;
}

int main(){
    fast
    int tes;
    // pre computa as as quantidade 
    for(int i=4; i<=20; i++){
    	for(int j=1; j<=i; j++)
    		dp[1][i][j] = 1;
    	for(int j=1; j<=13; j++){
    		for(int k=1; k<=i*j; k++)
    			if(dp[j][i][k]){
    				for(int l=1; l<=i; l++)
    					dp[j+1][i][k+l]+= dp[j][i][k];
    			}
    	}
    }
    // fim
    // faz as consultas
    cin >> tes;
    for(int t=0; t<tes; t++){
    	int s, n, f;
    	cin >> s >> n >> f;
    	cout << fixed << setprecision(f) << (long double)(dp[n][f][s]) / mypow(f, n) << '\n';;
    }
    return 0;
}
