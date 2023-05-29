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
#define left(x) (1LL << x)
#define right(x) ((1LL << x) | 1)

void solve(){
    int n, k;
    cin >> n >> k;
    vector<ii> estimado(n);
    vi real(n), ans(n);
    for(int i=0; i<n; i++){
        cin >> estimado[i].first;
        estimado[i].second = i;
    }
    for(auto &x: real)
        cin >> x;
    sort(all(estimado));
    sort(all(real));
    for(int i=0; i<n; i++)
        ans[estimado[i].second] = real[i];
    for(auto &x: ans) cout << x << ' ';
    cout << '\n';
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--) solve();
    return 0;
}