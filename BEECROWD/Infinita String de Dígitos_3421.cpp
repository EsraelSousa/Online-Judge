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

void task() {
    ll k, L, R;
    cin >> k >> L >> R;
    ll num = 0, sum = 0;
    string concat;
    ll sizeInterval = R-L+1;
    ll pow10 = 1;
    ll digits = 1;
    while(true){
        ll x = 9LL * pow10 * digits;
        if(L > x){
            L -= x;
            digits++;
            pow10 *= 10;
        }
        else
            break;
    }
    L--;
    ll x = pow10 + L / digits;
    num = x+1;
    L %= digits;
    concat = to_string(x).substr(L);
    while(sz(concat) < sizeInterval){
        concat += to_string(num);
        num++;
    }
    while(sz(concat) > sizeInterval)
        concat.pop_back();

    ll ans = (sz(concat) <= k)? stoll(concat) : 0;
    //cout << concat <<" concat\n";
    for(int i=0; i<=sz(concat)-k; i++)
        ans = max(ans, stoll(concat.substr(i, k)));
    cout << ans << '\n';
}

int main(){
    fast
    int tes = 1;
    //cin >> tes;
    while(tes--)
        task();
    return 0;
}

/*
S = "01234567891011121314151617"
*/