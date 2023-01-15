<<<<<<< HEAD
#include <stdio.h>
#define max(a, b) (a>=b)? a : b
#define min(a, b) (a<=b)? a : b

int main(){
	int qtd_med, tam_inter, tem[10005], somas, teste=1, tem_max, tem_min;
	while(scanf("%d %d%*c", &qtd_med, &tam_inter) && qtd_med && tam_inter){
		tem_max=-1000000000, tem_min=1000000000, somas=0;
		for(int i=1; i<=qtd_med; i++){
			scanf("%d%*c", &tem[i]);
			somas+=tem[i];
			if(i>=tam_inter){
				tem_max=max(tem_max, somas/tam_inter);
				tem_min=min(tem_min, somas/tam_inter);
				somas-=tem[i-tam_inter+1];
			}
		}
		//tem_max=max(tem_max, somas/tam_inter);
		//tem_min=min(tem_min, somas/tam_inter);
		printf("Teste %d\n%d %d\n\n", teste++, tem_min, tem_max);
	}
	return 0;
}
=======
#include <stdio.h>
#define max(a, b) (a>=b)? a : b
#define min(a, b) (a<=b)? a : b

int main(){
	int qtd_med, tam_inter, tem[10005], somas, teste=1, tem_max, tem_min;
	while(scanf("%d %d%*c", &qtd_med, &tam_inter) && qtd_med && tam_inter){
		tem_max=-1000000000, tem_min=1000000000, somas=0;
		for(int i=1; i<=qtd_med; i++){
			scanf("%d%*c", &tem[i]);
			somas+=tem[i];
			if(i>=tam_inter){
				tem_max=max(tem_max, somas/tam_inter);
				tem_min=min(tem_min, somas/tam_inter);
				somas-=tem[i-tam_inter+1];
			}
		}
		//tem_max=max(tem_max, somas/tam_inter);
		//tem_min=min(tem_min, somas/tam_inter);
		printf("Teste %d\n%d %d\n\n", teste++, tem_min, tem_max);
	}
	return 0;
}
>>>>>>> refs/remotes/origin/master
