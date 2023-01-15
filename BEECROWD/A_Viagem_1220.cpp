#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const int MAXN = 1e3+5;
int gastos[MAXN];

int main(int argc, char* argv[]) {
  	ios::sync_with_stdio(false);
  	cin.tie(nullptr);
  	int n, p1, p2;
  	ll sumGastos, ans, qtdPagar;
  	cout << fixed << setprecision(2);
  	char c;
  	while(cin >> n && n){
  		sumGastos = ans = 0;
  		for(int i=1; i<=n; i++){
  			cin >> p1 >> c >> p2;
  			gastos[i] = p1*100+p2;
  			sumGastos += gastos[i];
  		}
  		sort(gastos+1, gastos+n+1);
  		qtdPagar = sumGastos / n;
  		p2 = sumGastos%n;
  		p1 = 1;
  		//while(gastos[p1] <= qtdPagar) p1++;
  		//while(p1+1 <= n && p2) p1++, p2--;
  		int *p = lower_bound(gastos+1, gastos+n, qtdPagar+1);
  		p2 = (int)( p - (int*)gastos);
  		//cout << *p << " ini\n";
  		p1 = sumGastos%n;
  		for(int i=p2; i<=n; i++)
  			ans += (gastos[i] > qtdPagar)? gastos[i] - qtdPagar - (p1-- > 0) : 0;
  		cout << '$' << ans/ 100.0 << '\n';
  	}
  	return 0;
}
