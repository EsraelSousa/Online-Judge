/*
Problema pode ser resolvido usando inclusão-exclusão e soma de PA
*/

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ii, ii> iiii;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

const int MOD = 1300031;

int sinal(ll mask, int n){
    int cont = 0;
    for(int i=0; i<n; i++)
        cont += (mask & (1<< i)) != 0;
    return (cont & 1)? 1 : -1;
}

ll sumMulti(int number, int i){
	ll d = i / number;
	return (number * d * (d+1) / 2) % MOD;
}

int main(){
    fast
    ll n, L, R;
    while(cin >> L >> R >> n && L){
    	ll sum = 0;
		int ar[n];
    	for(int i=0; i<n; i++)
			cin >> ar[i];

		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				if(i != j && ar[i] <= R && ar[j] <= R && ar[i] % ar[j] == 0)
					ar[i] = R+1;
		
    	for(int i=1; i< (1 << n); i++){
    		ll mult = 1;
    		for(int j=0; j<n && mult <= R; j++){
    			if(i & (1 << j)){
    				mult = mult * ar[j] / __gcd(mult, (ll)ar[j]);
    			}
    		}
    		if(mult > R) continue;
    		sum += sinal(i, n) * (sumMulti(mult, R) + MOD - sumMulti(mult, L-1)) % MOD;
			sum = (sum + MOD) % MOD;
    	}
    	cout << sum << '\n';
    }
    return 0;
}
