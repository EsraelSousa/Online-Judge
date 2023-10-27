#include <bits/stdc++.h>

/* Esse problema basta checar se existe um clico euleriano com algumas restricoes */

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(nullptr);
	int n, m, a, b;
	cin >> n >> m;
	vector<int> grau(n, 0);
	while(m--){
		cin >> a >> b;
		grau[a]++;
		grau[b]++;
	}
	for(int i=0; i<n; i++){
		if(grau[i] & 1){
			cout << "Rambo esta perdido\n";
			return 0;
		}
	}
	cout << "Rambo esta salvo\n";
    return 0;
}
