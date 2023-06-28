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

const int MAXN = 1e6+5;
ll prefixSum[MAXN];

int main(){
    fast
    int n, x;
    ll ans;
    while(cin >> n){
        prefixSum[0] = 0;
        for(int i=1; i<=n; i++){
            cin >> x;
            prefixSum[i] = prefixSum[i-1] + x;
        }
        ans = 1e18;
        for(int i=1; i<n; i++)
            ans = min(ans, abs(prefixSum[i] - (prefixSum[n] - prefixSum[i])));
        cout << ans << '\n';
    } 
    return 0;
}