#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MOD = 1e9+7;

ll fastPow(ll base, ll n){
	ll ans = 1LL;
	while(n){
		if(n & 1) ans = (ans * base) % MOD;
		base = (base * base) % MOD;
		n >>=1;
	}
	return ans;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string s;
    cin >> s;
    int m, h, qtd;
    m = h = qtd = 0;
    for(char c: s){
    	(c == 'M')? h++ : m++;
    	qtd += (h == m);
    }
    cout << fastPow(2, qtd-1) << '\n';
    return 0;
}
