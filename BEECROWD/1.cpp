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

int main(){
    fast
    int n, x, sum  = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        sum += x;
    }
    
    int ans = 0;
    for(int i=1; i<=5; i++){
        ans += (((sum + i) % (n+1)) != 1);
    }
    cout << ans << '\n';
    return 0;
}