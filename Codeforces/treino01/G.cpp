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

// Pollard's Rho Alg
//
// Usa o algoritmo de deteccao de ciclo de Floyd
// com uma otimizacao na qual o gcd eh acumulado
// A fatoracao nao sai necessariamente ordenada
// O algoritmo rho encontra um fator de n,
// e funciona muito bem quando n possui um fator pequeno
//
// Complexidades (considerando mul constante):
// rho - esperado O(n^(1/4)) no pior caso
// fact - esperado menos que O(n^(1/4) log(n)) no pior caso

ll mul(ll a, ll b, ll m) {
	ll ret = a*b - ll((long double)1/m*a*b+0.5)*m;
	return ret < 0 ? ret+m : ret;
}

ll pow(ll x, ll y, ll m) {
	if (!y) return 1;
	ll ans = pow(mul(x, x, m), y/2, m);
	return y%2 ? mul(x, ans, m) : ans;
}

bool prime(ll n) {
	if (n < 2) return 0;
	if (n <= 3) return 1;
	if (n % 2 == 0) return 0;

	ll r = __builtin_ctzll(n - 1), d = n >> r;
	for (int a : {2, 325, 9375, 28178, 450775, 9780504, 795265022}) {
		ll x = pow(a, d, n);
		if (x == 1 or x == n - 1 or a % n == 0) continue;
		
		for (int j = 0; j < r - 1; j++) {
			x = mul(x, x, n);
			if (x == n - 1) break;
		}
		if (x != n - 1) return 0;
	}
	return 1;
}

ll rho(ll n) {
	if (n == 1 or prime(n)) return n;
	auto f = [n](ll x) {return mul(x, x, n) + 1;};

	ll x = 0, y = 0, t = 30, prd = 2, x0 = 1, q;
	while (t % 40 != 0 or gcd(prd, n) == 1) {
		if (x==y) x = ++x0, y = f(x);
		q = mul(prd, abs(x-y), n);
		if (q != 0) prd = q;
		x = f(x), y = f(f(y)), t++;
	}
	return gcd(prd, n);
}

vector<ll> fact(ll n) {
	if (n == 1) return {};
	if (prime(n)) return {n};
	ll d = rho(n);
	vector<ll> l = fact(d), r = fact(n / d);
	l.insert(l.end(), r.begin(), r.end());
	return l;
}

int main(){
    fast
    ll n;
    ll b  = 1LL;
    cin >> n;
    if(n <= 2){
        cout << "1\n";
        exit(0);
    }
    ll ans = n;
    vector<ll> fatores = fact(n);
    sort(all(fatores));
    ll last = fatores[ fatores.size()-1 ];
    if(last == 2)
    cout << last << '\n';
    else{
        ans = 1;
        ll mult = 1;
        int n = fatores.size();
        for(int i=0; i<fatores.size(); i++){
            mult *= fatores[n-i-1];
            if(mult & 1)
                ans = max(ans, mult);
        }
        cout << ans << '\n';
    }
    return 0;
}