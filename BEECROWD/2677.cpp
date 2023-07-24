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
const int IFN = 1e9;

int value[MAXN];
int memo[MAXN][MAXN];
int resp;
int N;

int solve(int i, int j, bool isFirst){
    if(i > N) return 0;
    int k = i+j;
    int &ans = memo[i][k];
    if(ans != IFN) return ans;
    ans = 0;
    if(!isFirst)
        ans = min(solve(i+1, j, !isFirst), solve(i, j-1, !isFirst));
    else
        ans = max(value[i]%2 == 0 + solve(i+1, j, !isFirst), value[j]%2 == 0 + solve(i, j-1, !isFirst));
    return ans;
}


int main(){
    fast
    int n;
    while(cin >> n && n){
        int qtd = 0;
        for(int i=1; i<=2*n; ++i){
            cin >> value[i];
            qtd += value[i]%2 == 0;
        }
        N = 2*n;
        for(int i=1; i<=2*n; i++){
            for(int j=i; j<=2*n; j++)
                memo[i][j] = memo[j][i] = IFN;
        }
        cout << solve(1, 1, 1) << '\n';
    }
    return 0;
}
