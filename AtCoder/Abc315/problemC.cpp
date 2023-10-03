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
    int n;
    cin >> n;
    vector<ii> cups(n);
    for(auto &x: cups)
        cin >> x.ss >> x.ff;
    sort(all(cups));
    reverse(all(cups));
    int ans = (cups[0].ss == cups[1].ss)? cups[0].ff + cups[1].ff / 2 : cups[0].ff + cups[1].ff;
    int i = 2;
    while(i < n && cups[0].ss == cups[i].ss)
        i++;
    if(i < n)
        ans = max(ans, cups[0].ff + cups[i].ff);
    cout << ans << '\n';
    return 0;
}