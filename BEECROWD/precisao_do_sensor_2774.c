<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int qtd_teste, hora, intervalo, i;
    double *medidas, soma1=0, media=0;
    medidas=(double*)malloc(sizeof(double)*100000);
    if(medidas == NULL)
        exit(0);
    while(scanf("%d %d", &hora, &intervalo) != EOF){
        qtd_teste=(hora*60)/intervalo;
        for(i=0;i<qtd_teste;i++){
            scanf("%lf", &medidas[i]);
            soma1+=medidas[i];
        }
        media=soma1/qtd_teste;
        soma1=0;
        for(i=0;i<qtd_teste;i++)
            soma1+=(medidas[i]-media)*(medidas[i]-media);
        printf("%.5lf\n", sqrt(soma1/(qtd_teste-1)));
        media=0, soma1=0;
    }
    free(medidas);
    return 0;
}
=======
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int qtd_teste, hora, intervalo, i;
    double *medidas, soma1=0, media=0;
    medidas=(double*)malloc(sizeof(double)*100000);
    if(medidas == NULL)
        exit(0);
    while(scanf("%d %d", &hora, &intervalo) != EOF){
        qtd_teste=(hora*60)/intervalo;
        for(i=0;i<qtd_teste;i++){
            scanf("%lf", &medidas[i]);
            soma1+=medidas[i];
        }
        media=soma1/qtd_teste;
        soma1=0;
        for(i=0;i<qtd_teste;i++)
            soma1+=(medidas[i]-media)*(medidas[i]-media);
        printf("%.5lf\n", sqrt(soma1/(qtd_teste-1)));
        media=0, soma1=0;
    }
    free(medidas);
    return 0;
}
>>>>>>> refs/remotes/origin/master
