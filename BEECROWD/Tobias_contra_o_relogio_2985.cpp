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

const int MAX = 2e6+5;

vi adj[MAX];
int memo[MAX];

int main(){
    fast
    int n, p = 0, ans = 0;
    cin >> n;
    while(n--){
        int h, d;
        cin >> h >> d;
        p = max(p, h);
        adj[h].push_back(d);
    }
    while(p){
        if(sz(adj[p])){
            for(auto &x: adj[p])
                memo[p] = max(memo[p], 1 + memo[ p + x ]);
        }
        memo[p] = max(memo[p], ans);
        ans = max(ans, memo[p]);
        p--;
    }
    cout << ans << '\n';
    return 0;
}
