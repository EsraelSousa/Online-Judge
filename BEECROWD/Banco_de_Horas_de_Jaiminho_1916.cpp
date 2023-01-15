#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int testes;
	ll ans;
	int h1, h2, h3, h4, m1, m2, m3, m4, n;
	scanf("%d", &testes);
	while(testes--){
		ans = 0;
		scanf("%d", &n);
		while(n--){
			scanf("%d:%d %d:%d | %d:%d %d:%d", &h1, &m1, &h2, &m2, &h3, &m3, &h4, &m4);
			// ajustar intervalos para os inicios com base no problema
			if(h1*60+m1 >= 8*60-5 && h1*60+m1 <= 8*60+5) h1 = 8, m1 = 0;
			if(h2*60+m2 >= 12*60-5 && h2*60+m2 <= 12*60+5) h2 = 12, m2 = 0;
			if(h3*60+m3 >= 14*60-5 && h3*60+m3 <= 14*60+5) h3 = 14, m3 = 0;
			if(h4*60+m4 >= 18*60-5 && h4*60+m4 <= 18*60+5) h4 = 18, m4 = 0;
			// transformar as horas em minutos
			h1 = h1*60+m1;
			h2 = h2*60+m2;
			h3 = h3*60+m3;
			h4 = h4*60+m4;
			// contabilizar os tempos 
			ans += (h2 - h1 ) + (h4 - h3) - 8*60;
		}
		printf("%c %02lld:%02lld\n", (ans>=0)? '+' : '-', abs(ans)/60, abs(ans)%60);
	}
	return 0;
}