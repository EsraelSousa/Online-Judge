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

int main(){
    fast
    int n;
    cin >> n;
    vi ans(n);
    if(n & 1) cout << "-1\n";
    else{
        for(int i=1; i<=n; i++) ans[i-1] = (i % 2? i+1 : i-1);
        //for(int i=0; i<n-1; i++) if(ans[i] == i) swap(ans[i], ans[i+1]);
        for(int i=0; i<n; i++) cout << ans[i] << (i==n-1? '\n' : ' ');
    }
    return 0;
}