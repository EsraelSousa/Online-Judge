#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
typedef long long ll;

const int MAXN = 1e4+5;
const int MOD = 1000007;
ll memo[MAXN];
int qtdPalito[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

ll solve(int palitos, int d, bool first){
	if(palitos < 0) return 0;
    if(palitos == 0) return 1;
    ll &ans = memo[palitos];
    if(ans != -1) return ans;
    ans = 0LL;
    for(int i= (first)? 1 : 0; i<10; i++)
        ans += solve(palitos - qtdPalito[i], i, 0)%MOD;
    return ans%MOD;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int tes;
    ll n;
    cin >> tes;
    while(tes--){
    	cin >> n;
        memset(memo, -1, sizeof(memo));
        cout << (n? solve(int(n), 0, 1) + (n == 6): 0) << '\n';
        // quando n é 6 podemos formar 0 com exatamente 6 palitos, o que faria 0's à esquerda em outros casos;
    }
    return 0;
}

/*
1
6
0 = 6, 1 = 2, 2 = 5, 3 = 5, 4 = 4,
5 = 5, 6 = 6, 7 = 3, 8 = 7, 9 = 6
ans = 7
0, 14, 41, 
*/