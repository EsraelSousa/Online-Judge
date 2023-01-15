#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const int MAXV = 1e2+5;
int qtdArvore[MAXV][2];

int main(int argc, char* argv[]) {
  	ios::sync_with_stdio(false);
  	cin.tie(nullptr), cout.tie(nullptr);
  	int n, k, producao;
  	ll ans=0;
  	char previsao;
  	cin >> k >> n;
  	for(int i=0; i<n; i++){
  		cin >> producao;
  		qtdArvore[producao][0]++;
  		qtdArvore[producao][1] = producao;
  	}
  	while(k--){
  		cin >> previsao;
  		if(previsao == 'C'){
  			for(int i=100; i>0; i--){
  				if(qtdArvore[i][1] > 0){
  					qtdArvore[i][1]++;
  					ans += qtdArvore[i][1] * qtdArvore[i][0];
  				}
  			}
  		}
  		else{
  			for(int i=1; i<=100; i++){
  				if(qtdArvore[i][1] >= 0){
  					qtdArvore[i][1]--;
  					if(qtdArvore[i][1] > 0)
  						ans += qtdArvore[i][1] * qtdArvore[i][0];
  				}
  			}
  		}
  	}
  	cout << ans << '\n';
  	return 0;
}
