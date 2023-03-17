#include <bits/stdc++.h>
 
using namespace std;
 
const int INF = 1e9;
const int MAXN = 1e5+5;
int dp[MAXN][6][2];
 
int solve(string& s, int p, int r, bool has_digit, int first){
    if(0 == r && p == s.size() && has_digit) return 0;
    if(p == s.size()) return INF;;
    if(dp[p][r][first!=0] != -1) return dp[p][r][first!=0];
    int op1 = 1+solve(s, p+1, r, has_digit, first); // não pegar o digito na posição i
    int op2 = INF; 
    if(has_digit && first == 0) // não posso pegar esse digito, pois o 1º digito
                                // do numero que estou tentando formar é 0
        op2 = 1 + solve(s, p+1, r, has_digit, first);
    else if(!has_digit) // não tenho nehum digito, esse vai ser o 1º
        op2 = solve(s, p+1, (10*r+s[p]-'0')%6, true, s[p]-'0');
    else // já tem algum digito que o 1º não é 0
        op2 = solve(s, p+1, (10*r+s[p]-'0')%6, has_digit, first);
    return dp[p][r][first!=0] = min(op1, op2);
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int tes;
    string n;
    cin >> tes;
    while(tes--){
        cin >> n;
        memset(dp, -1, sizeof(dp));
        int ans = solve(n, 0, 0, false, -1);
        cout << ((ans>=n.size())? "Cilada" : to_string(ans)) << '\n';
    }
    return 0;
}