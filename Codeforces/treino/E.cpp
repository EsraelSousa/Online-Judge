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
    int v;
    ll ans = 1e18;
    cin >> v;
    int limit= 1e6;
    for(ll a=1; a <= limit && a <= v; a++){
        for(ll b = a; b <= limit && a * b <= v; b++){
            for(ll c=b; c<=limit && a * b * c <= v; c++){
                if(a * b * c == v){
                    ans = min(ans, 2LL * (a*b + a*c + b*c));
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}