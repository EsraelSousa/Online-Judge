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

const int MAXN = 1e4+5;

ll pref[2][2*MAXN];
bool has2[2][2*MAXN];

int main(){
    fast
    int n, m, val;
    while(cin >> n && n){
        memset(pref, 0, sizeof(pref));
        memset(has2, 0, sizeof(has2));
        int last = -1, first = -1;
        for(int i=0; i<n; i++){
            cin >> val;
            val += MAXN;
            pref[0][val] = val;
            has2[0][val] = 1;
        }
        cin >> m;
        for(int i=0; i<m; i++){
            cin >> val;
            val += MAXN;
            pref[1][val] = val;
            has2[1][val] = 1;
            if(has2[0][val])
                last = val;
            if(has2[0][val] && first == -1)
                first = val;
        }
        // calculete the prefix sum
        for(int i=1; i<2*MAXN; i++){
            pref[0][i] += pref[0][i-1];
            pref[1][i] += pref[1][i-1];
        }
        // get ans
        ll ans = max(pref[0][2*MAXN-1], pref[1][2*MAXN-1]);
        ll sum = 0;
        int i = first;
        while(i )
        cout << ans << '\n';
    }    
    return 0;
}