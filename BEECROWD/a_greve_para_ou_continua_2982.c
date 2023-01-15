<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_caso, valor_dito, total_gasto=0, total_verba=0, i;
    char verba_ou_gasto;
    scanf("%d%*c", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%c %d%*c", &verba_ou_gasto, &valor_dito);
        if(verba_ou_gasto == 'G')
            total_gasto+=valor_dito;
        else
           total_verba+=valor_dito;
    }
    if(total_verba >= total_gasto)
        printf("A greve vai parar.");
    else
        printf("NAO VAI TER CORTE, VAI TER LUTA!");
    printf("\n");
    return 0;

}
=======
#include <stdio.h>

int main(){
    int qtd_caso, valor_dito, total_gasto=0, total_verba=0, i;
    char verba_ou_gasto;
    scanf("%d%*c", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%c %d%*c", &verba_ou_gasto, &valor_dito);
        if(verba_ou_gasto == 'G')
            total_gasto+=valor_dito;
        else
           total_verba+=valor_dito;
    }
    if(total_verba >= total_gasto)
        printf("A greve vai parar.");
    else
        printf("NAO VAI TER CORTE, VAI TER LUTA!");
    printf("\n");
    return 0;

}
>>>>>>> refs/remotes/origin/master
