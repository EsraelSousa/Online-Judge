#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6+5;
int vet[MAXN], K[5];
double Q[5], super, infer;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, valor;
    while(cin >> n >> valor){
    	for(int i=1; i<=n; i++) cin >> vet[i];
    	sort(vet+1, vet+n+1);
		
    	for(int i=1; i<=3; i++)
    		K[i] = i*(n+1)/4;
    	for(int i=1; i<=3; i++)
    		Q[i] = vet[K[i]] + (1.0*i*(n+1)/4 - K[i]) * (vet[ K[i]+1 ] - vet[ K[i] ]);
    
    	infer = Q[1] - 0.5*(Q[3] - Q[1]);
    	super = Q[3] + 0.5*(Q[3] - Q[1]);
		
		cout << K[1] << ' ' << vet[K[1]] << ' ' << K[3] << ' ' << vet[K[3]] << '\n';
		cout << Q[1] << ' ' << Q[3] << '\n';
		cout << infer << ' ' << super << '\n';

    	int cont = 0;
    	//for(int i=1; vet[i] < infer; i++) cont++;
		cont += (int)(lower_bound(vet+1, vet+n, infer) - vet);
    	//for(int i=n; vet[i]> super; i--) cont++; 
		cont += (int)(vet+n - upper_bound(vet+1, vet+n+1, super));
    	cout << cont*valor << '\n';
    }
    return 0;
}
