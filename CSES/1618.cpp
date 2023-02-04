#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(NULL);
	int n;
	cin >> n;
	int qtd_min = 1e9;
	int qtd = 0;
	ll base = 2;
	while(base <= n){
	    qtd += n/base;
	    base *= 2;
	}
	qtd_min = min(qtd_min, qtd);
	base = 5, qtd = 0;
	while(base <= n){
	    qtd += n/base;
	    base *= 5;
	}
	cout << min(qtd_min, qtd) << '\n';
	return 0;
}

