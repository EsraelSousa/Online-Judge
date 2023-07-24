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
    ll n, a, b;
    while(cin >> n >> a >> b && n){
        vi ans;
        for(ll i=1; i * i <=n; i++){
                ll mmc = a * b / __gcd(a, b);
                mmc = mmc * i / __gcd(mmc, i);
                if(mmc == a ){
                    ans.push_back(i);
                    ans.push_back(n/i);
                }
            
        }
        sort(all(ans));
        for(auto &x: ans) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}