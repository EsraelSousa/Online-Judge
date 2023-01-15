#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const int MOD = 1300031;
const int MAXV = 2*1e6+5;
ll fatorial[MAXV];

void pre_fatorial(){
	fatorial[0] = 1;
	for(int i=1; i<MAXV; i++)
		fatorial[i] = (fatorial[i-1] * (i%MOD)) % MOD;
}

ll euclides_ext(ll a, ll b, ll* x, ll*  y){
	if(a == 0){
		*x = 0, *y = 1;
		return b;
	}
	ll x1, y1;
	ll gcd = euclides_ext(b%a, a, &x1, &y1);
	*x = y1 - b/a * x1;
	*y = x1;
	return gcd;
}

ll modInverso(ll a, ll b){
	ll x, y;
	ll gcd = euclides_ext(a, b, &x, &y);
	if(gcd != 1) return -1LL;
	return ((x%b) + b) % b;
}

int main(int argc, char* argv[]) {
  	ios::sync_with_stdio(false);
  	cin.tie(nullptr);
  	int n, c;
  	int tes;
  	cin >> tes;
  	pre_fatorial();
  	while(tes--){
  		cin >> n >> c;
  		ll inverMod = modInverso((fatorial[n-1] * fatorial[c])%MOD, MOD);
  		cout << (fatorial[n + c -1] * inverMod) % MOD <<'\n';
  	}
  	return 0;
}
