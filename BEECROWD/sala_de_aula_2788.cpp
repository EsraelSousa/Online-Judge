#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

ll pow(int e){
	ll n=1;
	for(int i=0; i<e; i++) n*=10;
	return n;
}

int contDigits(ll n){
    int ans = 1;
    while(n>9) ans++, n/=10;
    return ans;
}

ll bfs(ll n, ll m){
	ll atu, aux;
    int x, y;
    atu = pow(contDigits(n));
    ll ans = 1e19;
    ll rest;
    for(int i=0; i<=100000; i++){
        aux = i;
        aux *= atu;
        aux += n;
        x = contDigits(aux);
        if(aux % m == 0) ans = min(aux, ans);
        y = 1;
        aux *= 10;
        while(x + y < 18){
        	rest = aux % m;
        	if(!rest) ans = min(ans, aux);
        	rest = m - rest;
            if(contDigits(rest) <= y) ans = min(ans, aux + rest);
            y++;
            aux *= 10;
        }
    }
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	ll n, m;
	cin >> n >> m;
	cout << bfs(n, m) << '\n';
	return 0;
}
