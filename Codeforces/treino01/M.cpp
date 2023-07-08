 #include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

const int MAXV = 1e3+5;

ll memo[MAXV][MAXV];
ll peso[MAXV], valor[MAXV];
int main(){
    fast
    int N, T;
    cin >> N >> T;
    for(int i=1; i<=N; i++)
    	cin >> peso[i] >> valor[i];
    for(int i=1; i<=N; i++)
    	for(int j=0; j<=T; j++){
    		memo[i][j] = memo[i-1][j]; // nao pega item
    		if(peso[i] <= j) // posso pegar item
    			memo[i][j] = max(memo[i][j], memo[i-1][ j - peso[i] ] + valor[i]);
    	}
    vi ans;
    for(int i=N; i>=1; i--){
    	if(memo[i-1][T] != memo[i][T]){ // esse item esta na resposta
    		ans.push_back(i);
    		T -= peso[i];
    	}
    }
    cout << ans.size() << '\n';
    for(auto &x: ans) cout << x << ' ';
    cout << '\n';
    return 0;
}
