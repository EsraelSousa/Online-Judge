#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    //ofstream out;
    //out.open("saida.txt");
    int tes;
    ll t1, t2, a, v, r;
    cin >> tes;
    for(int t=1; t<=tes; t++){
    	cin >> t1 >> t2 >> a >> v >> r;
    	int maxVoltas = ceil(1.0*r/v)-1;
    	ll ansTempo = t1*r+maxVoltas*a, ansVolta = maxVoltas;
    	for(int i=v; i<=r; i++){
    		int x = ceil(i/v);
    		int vol = x*v;
    		if(vol > r) vol = r;
    		x--;
    		if(vol*t1 + (r-vol)*t2 + x*a <= ansTempo)
    			ansTempo = vol*t1 + (r-vol)*t2 + x*a, ansVolta = x;
    	}
        if(v < r && v*t1 + (r-v)*t2 == ansTempo) ansVolta = 0;
    	cout << "Teste #" << t << "\n";
    	cout << ansTempo << ' ' << ansVolta << "\n\n";
    }
    //out.close();
   	return 0;
}

