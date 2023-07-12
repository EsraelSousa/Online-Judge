/*
Problema: https://www.beecrowd.com.br/judge/en/problems/view/2555

A ideia da certo, mas o código está errado
*/

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
const int MAXV = 1e3+5;

double memo[1000][1001];
double aux[MAXN][MAXN];
double W[MAXN], V[MAXN];

pair<double, double> mat[MAXN][MAXN];

int QTD;

double solve(int n, int k, int p, double acumulado){
	if(p == n)
		return 0;
	//long double ans = 0;
	double ans = memo[p][k];
	ans = 0;
	ans = max(ans, W[p] * acumulado * V[p] + solve(n, k, p+1, W[p] * acumulado));
	if(k < QTD){
		ans = max(ans, (acumulado * V[p] + solve(n, k+1, p+1, acumulado)));
        //cout << fixed << setprecision(4) <<  p << ' ' << k << ' ' << acumulado << ' ' << ans << " solve usa\n";
	}
	cout << fixed << setprecision(4) <<  p << ' ' << k << ' ' << acumulado * W[p] << ' ' << ans << " solve nao usa\n";
	return memo[p][k] = ans;
}

void brute(int n, int k){
	for(int i=0; i<n; i++)
		for(int j=0; j<=k; j++)
			memo[i][j] = 1.0, aux[i][j] = 0.0;
	memo[0][0] = W[0];
	aux[0][0] = V[0];
	for(int i=1; i<n; i++){
		for(int j=0; j<=k; j++){
			memo[i][j] = memo[i-1][j] * W[i];
			aux[i][j] = aux[i-1][j] + memo[i][j] * V[i];
			if(j < k){
				memo[i][j] = max(memo[i][j], memo[i-1][j-1]);
				aux[i][j] = max(aux[i][j], memo[i-1][j-1] * V[i]);
			}
		}
	}
	/*for(int i=0; i<n; i++){
		for(int j=0; j<=k; j++)
			cout << fixed << setprecision(3) << memo[i][j] << '\t';
		cout << '\n';
	}*/
	double ans = 0;
	for(int i=n-1; i>=0; i--){
		//cout << memo[i][k] * V[i] << '\n'; 
		ans += memo[i][k] * V[i];
	}
	cout << fixed << setprecision(2) << ans << '\n'; // ' << aux[n-1][k] << " brute\n";
}

int main(){
    fast
    int n, k;
    while(cin >> n >> k && n){
    	for(int i=0; i<n; i++)
    		for(int j=0; j<=k; j++){
				for(int k=0; k<=1000; k++)
    				memo[i][j] = -1.0;
                mat[i][j] = {1.0, 0.0};
            }
    	for(int i=0; i<n; i++)
    		cin >> V[i];
    	for(int i=0; i<n; i++){
    		cin >> W[i];
            W[i] *= 0.01; // transfomar a porcentagem entre 0 e 1
    	}
		QTD = k;
    	//cout << fixed << setprecision(2) << solve(n, 0, 0, 1.0) << '\n';
		brute(n, k);
        /*
        //debug
        for(int i=0; i<n; i++){
    		for(int j=0; j<=k; j++)
    			cout << memo[i][j] << ' ';
    		cout << '\n';
    	}*/
        
    }
    return 0;
}

/*
Caso que dá errado
3 1
17 95 5
74 80 69

output: 95.55
correto: 95.76
*/