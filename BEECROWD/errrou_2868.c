<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, i, j, valor1, valor2, res, repetir;
    char operacao;
    scanf("%d", &qtd_teste);
    for(i=0; i<qtd_teste; i++){
        scanf("%d %c %d %*c %d", &valor1, &operacao, &valor2, &res);
        if(operacao=='+')
            repetir=fabs(res-(valor1+valor2));
        else if(operacao=='-')
            repetir=fabs(res-(valor1-valor2));
        else
            repetir=fabs(res-(valor1*valor2));
        printf("Er");
        for(j=0; j<repetir; j++)
            printf("r");
        printf("ou!\n");
    }
    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, i, j, valor1, valor2, res, repetir;
    char operacao;
    scanf("%d", &qtd_teste);
    for(i=0; i<qtd_teste; i++){
        scanf("%d %c %d %*c %d", &valor1, &operacao, &valor2, &res);
        if(operacao=='+')
            repetir=fabs(res-(valor1+valor2));
        else if(operacao=='-')
            repetir=fabs(res-(valor1-valor2));
        else
            repetir=fabs(res-(valor1*valor2));
        printf("Er");
        for(j=0; j<repetir; j++)
            printf("r");
        printf("ou!\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
