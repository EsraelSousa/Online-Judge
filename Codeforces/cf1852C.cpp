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

void task(){
    int n, k;
    cin >> n >> k;
    vi color[n+1], cor(n+1);
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        cor[i] = x;
        color[x].push_back(i);
    }
    if(cor[1] == cor[n] && sz(color[ cor[1] ]) < k) cout << "NO\n";
    else if(cor[1] == cor[n] && sz(color[ cor[1] ]) >= k) cout << "YES\n";
    else if(sz(color[ cor[1] ]) < k || sz(color[ cor[n] ]) < k) cout << "NO\n";
    else{
        int x = (int)(color[ cor[n] ].end() - upper_bound(all(color[ cor[n] ]), color[ cor[1] ][k-1]));
        cout << ((x >= k)? "YES\n" : "NO\n");
    }
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--)
        task();
    return 0;
}