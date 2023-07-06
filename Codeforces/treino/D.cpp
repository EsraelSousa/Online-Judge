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

void chek(vi &v, int x){
    if(x == 0) return;
    if(x == 1) v[1] = 1;
    if(x == 2) v[2] = 1;
    if(x == 4) v[4] = 1;
    if(x == 3) v[2] = v[1] = 1;
    if(x == 5) v[1] = v[4] = 1;
    if(x == 6) v[2] = v[4] = 1;
    if(x == 7) v[1] = v[2] = v[4] = 1;
}

int main(){
    fast
    int l, y;
    cin >> l >> y;
    vi solved(5, 0);
    chek(solved, l);
    chek(solved, y);
    int ans = 0;
    for(int i=1; i<5; i++)
        if(solved[i])
            ans += i;
    cout << ans << '\n';
    return 0;
}