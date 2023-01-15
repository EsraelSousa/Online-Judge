<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_dia, i;
    double media, tempo, distancia;
    while(scanf("%d", &qtd_dia) != EOF){
    	media=0;
    	for(i=1;i<=qtd_dia;i++){
    		scanf("%lf %lf", &tempo, &distancia);
    		if(distancia/tempo>media){
    			printf("%d\n", i);
    			media=distancia/tempo;
    		}
    	}
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_dia, i;
    double media, tempo, distancia;
    while(scanf("%d", &qtd_dia) != EOF){
    	media=0;
    	for(i=1;i<=qtd_dia;i++){
    		scanf("%lf %lf", &tempo, &distancia);
    		if(distancia/tempo>media){
    			printf("%d\n", i);
    			media=distancia/tempo;
    		}
    	}
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
