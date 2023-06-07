#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define fs first
#define sd second;
#define all(x) x.begin(), x.end()
#define left(x) (2*x)
#define right(x) (2*x + 1)

struct Data{
    int tamanhoSapato;
    int qtdPes;
    int majestosidade;
};

const int MAXT = 505;
const int MAXP = 25005;

vector<Data> lista[MAXT];
int qtdSapato[MAXT];
ll dp[MAXT][MAXP];

ll solve(int i, int W, int idx){
    if(i == (int)lista[idx].size()) return 0;
    ll &ans = dp[i][W];
    if(ans != -1) return ans;
    ans = solve(i+1, W, idx);
    if(W + lista[idx][i].qtdPes <= qtdSapato[idx])
        ans = max(ans, lista[idx][i].majestosidade + solve(i+1, W + lista[idx][i].qtdPes, idx));
    return ans;
}

int main(){
    fast
    int n, m;
    ll ans = 0;
    cin >> n >> m;
    Data k_peia;
    for(int i=0; i<n; i++){
        cin >> k_peia.qtdPes >> k_peia.tamanhoSapato >> k_peia.majestosidade;
        k_peia.qtdPes /= 2;
        lista[ k_peia.tamanhoSapato ].push_back(k_peia);
    }
    
    for(int i=1; i<=m; i++){
        int a, b;
        cin >> a >> b;
        qtdSapato[i] = min(a, b);
        //cout << qtdSapato[i] << " peso\n";
    }
            
    for(int i=1; i<=m; i++){
        if(lista[i].size() && qtdSapato[i]){
        	for(int j=0; j<lista[i].size(); j++)
            	memset(dp[j], -1, sizeof(dp[j]));
            ans += solve(0, 0, i);
        }
    }
    cout << ans << '\n';
    return 0;
}

/*
um caso que da errado para uma solução gulosa
3 2
10 2 6
12 2 11
2 2 6
0 0
6 6

ans = 12

não podemos simplismente pegar por uma ordem
*/