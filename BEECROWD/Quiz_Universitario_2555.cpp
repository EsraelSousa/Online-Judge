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
 
long double memo[MAXN][MAXN];
long double W[MAXN], V[MAXN];
 
long double solve(int n, int k, int p){
    if(p == n)
        return 0.0;
    long double &ans = memo[p][k];
    if(ans > -1.0) return ans;
    ans = W[p] * V[p] + W[p] * solve(n, k, p+1);
    if(k)
        ans = max(ans, V[p] + solve(n, k-1, p+1));
    return ans;
}
 
int main(){
    fast
    int n, k;
    while(cin >> n >> k && n){
		// limpa a memoria
        for(int i=0; i<n; i++)
            for(int j=0; j<=k; j++)
                memo[i][j] = -1.0;
		// le as pontuações
        for(int i=0; i<n; i++)
            cin >> V[i];
		// le as probabilidades
        for(int i=0; i<n; i++){
            cin >> W[i];
            W[i] *= 0.01; // transfomar a porcentagem entre 0 e 1
        }
		// resolve
        cout << fixed << setprecision(2) << solve(n, k, 0) << '\n';
    }
    return 0;
}
 
/*
Caso que dá errado
3 1
17 95 5
74 80 69
 
output: 95.55 -> isso era devido a memoriazação com acumulado em outra versão
correto: 95.76
*/