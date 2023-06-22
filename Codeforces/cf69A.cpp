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
#define left(x) (2*x)
#define right(x) (2*x + 1)

int main(){
    fast
    int n;
    ll x = 0 , y = 0, z = 0;
    int a, b, c;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    cout << ((x || y || z)? "NO" : "YES") << '\n';
    return 0;
}