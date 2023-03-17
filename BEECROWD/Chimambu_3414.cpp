#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

const ll MOD = 1e9+9;

ll read_int() {
    bool minus = false;
    ll result = 0;
    char ch;
    ch = getchar();
    while (1) {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar();
    }
    if (ch == '-') minus = true;
    else result = ch-'0';
    while (1) {
        ch = getchar();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus) return -result;
    else return result;
}

ll fastPow(ll b, ll e){
	ll ans = 1LL, x;
	while(e){
		if(e & 1) ans = (ans*b) % MOD;
		b = (b*b) % MOD;
		//if(b >= MOD) b -= MOD;
		//if(ans >= MOD) ans -= MOD;
		e >>=1;		
	}
	return ans;
}

ll contZeroDireita(ll x){
	ll ans = 0;
	if(x == 0) return 60;
	while(!(x & 1)){
		ans++;
		x >>=1;
	}
	return ans;
}

int main() {
	int n, q;
	ll a, b;
	ll ans = 0, val, c, mod;
	n = read_int();
	q = read_int();
	mod = 1LL << n;
	for(ll i=0; i<q; i++){
		a = read_int();
		b = read_int();
		val = 0;
		if(contZeroDireita(a) < contZeroDireita(b)) swap(a, b);
		c = contZeroDireita(a);
		while(c > contZeroDireita(b)){
			val++;
			b <<= 1;
			if(b >= mod) b %= mod;
		}
		while(a != b){
			a <<= 1;
			b <<= 1;
			if(a >= mod) a%= mod;
			if(b >= mod) b%= mod;
			val+=2;
		}
		
		ans += fastPow(n, i) * val;
		c = ans / MOD;
		ans -= MOD * c;
	}
	printf("%lld\n", ans);
	return 0;
}
