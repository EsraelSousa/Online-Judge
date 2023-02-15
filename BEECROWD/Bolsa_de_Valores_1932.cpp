#include <bits/stdc++.h>

#pragma comment(linker, "/STACK:1024000000");

using namespace std;

typedef long long ll;
const int MAXN = 200005;

int days, taxa;
ll dp[MAXN][2];
int valor[MAXN];

ll solve(int day, int comprou){
    assert(day <= days);
    if(day == days) return 0;
    if(dp[day][comprou] != -1) return dp[day][comprou];
    ll ans;
    // eu tenho uma ação
    if(comprou){
        ans = max(solve(day+1, 1), // não vender a ação que tem
                  solve(day+1, 0) + valor[day]); // vender a ação que tem
    }
    else{
        ans = max(solve(day+1, 0), // não compro a ação
                  solve(day+1, 1) - (valor[day] + taxa)); // compro a ação
    }
    return dp[day][comprou] = ans;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    cin >> days >> taxa;
    system("ulimit -s 200000000");
    assert(valor != nullptr);
    for(int i=0; i<days; i++) cin >> valor[i];
    assert(dp != nullptr);
    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0) << '\n';
    return 0;
}