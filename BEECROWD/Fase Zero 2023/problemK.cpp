#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

const int T = 4;

ll pow4(ll x){
    return x*x*x*x;
}

int main(){
    fast
    ll n, a, b, c, d;
    int tes;
    cin >> tes;
    map<ll, vector<string>> ans;
    // pre computa
    n = (1LL << 31) - 1;
    for(a=0; a<=215 && pow4(a) <= n; a++)
            for(b=a; b<=215 && pow4(a) + pow4(b) <= n; b++)
                for(c=b; c<=215 && pow4(a) + pow4(b) + pow4(c) <= n; c++)
                    for(d=c; d<=215; d++){
                        ll sum = pow4(a) + pow4(b) + pow4(c) + pow4(d);
                        string s = to_string(a) + " " + to_string(b) + " " + to_string(c) + " " + to_string(d);
                        ans[sum].push_back(s);
                        if(sum > n) break;
                    }
    // fim 
    while(tes--){
        cin >> n ;
        cout << ans[n].size() << '\n';
        for(auto &x: ans[n])
            cout << x << '\n';
    }
    return 0;
}