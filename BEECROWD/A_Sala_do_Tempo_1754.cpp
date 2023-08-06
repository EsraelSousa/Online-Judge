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
    ll n, k;
    cin >> n >> k;
    cout << max(2LL, (ll)(ceil(1.0 * n / k))) << '\n';
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--)
        task();
    return 0;
}
