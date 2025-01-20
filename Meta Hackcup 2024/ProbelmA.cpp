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
    ll n, k, minimum = 1e9;
    cin >> n >> k;
    vi times(n);
    for(auto &x: times){
        cin >> x;
        minimum = min(minimum, (ll)x);
    }
    //cout << max(0LL, (n-2))*2*minimum+minimum << '\n';
    cout << ((max(0LL, (n-2))*2*minimum+minimum <= k)? "YES\n" : "NO\n");
}

int main(){
    fast
    int tes;
    cin >> tes;
    for(int i=1; i<=tes; i++){
        cout << "Case #" << i << ": ";
        task();
    }
    return 0;
}