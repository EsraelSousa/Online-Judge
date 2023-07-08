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
    ll ans = 0;
    cin >> n;
    vector<ll> sequencia1(n), sequencia2(n);
    for(auto &x: sequencia1) cin >> x;
    for(auto &x: sequencia2) cin >> x;
    sort(all(sequencia1));
    sort(all(sequencia2));
    for(int i=0; i<n; i++)
        ans = max(ans, abs(sequencia1[i] - sequencia2[i]));
    cout << ans << '\n';
    return 0;
}