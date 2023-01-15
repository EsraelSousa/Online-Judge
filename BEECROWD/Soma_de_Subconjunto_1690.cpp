#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0); cin.tie(nullptr);cout.tie(nullptr);
	int testes;
	int valor[10005];
	int n;
	cin >> testes;
	while(testes--){
		 cin >> n;
		 for(int i=0; i<n; i++) cin >> valor[i];
		 sort(valor, valor+n);
		 ll sum = 0LL;
		 for(int i=0; i<n; i++){
		 	 if(sum+1 < valor[i]) break;
		 	 sum += valor[i];
		 }
		 cout << sum+1 << '\n';
	}
	return 0;
}
