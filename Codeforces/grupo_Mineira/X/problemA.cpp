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

bool testN(int n, vi &v){
    bool flag = 1;
    for(int i=0; i<(int)v.size(); i++){
        if(i == n) continue;
        flag &= (abs(n - i) == v[i]);
    }
    return flag;
}

int main(){
    fast
    vi values(4);
    for(auto &x: values) cin >> x;
    int ans = 0;
    while(!testN(ans, values) && ans < 4) ans++;
    cout << ans+1 << '\n';
    return 0;
}