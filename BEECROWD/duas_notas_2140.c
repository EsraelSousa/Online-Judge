<<<<<<< HEAD
#include <stdio.h>

int main(){
    int valor_compra=1, valor_recebido=1, total_troco;
    int nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0;
    while(valor_compra!=0 && valor_recebido!=0){
        scanf("%d %d", &valor_compra, &valor_recebido);
        total_troco=valor_recebido-valor_compra;
        nota100=total_troco/100;
        total_troco=total_troco%100;
        nota50=total_troco/50;
        total_troco=total_troco%50;
        nota20=total_troco/20;
        total_troco=total_troco%20;
        nota10=total_troco/10;
        total_troco=total_troco%10;
        nota5=total_troco/5;
        total_troco=total_troco%5;
        nota2=total_troco/2;
        total_troco=total_troco%2;
        if(nota100!=0 && nota50!=0 && total_troco!=0 || nota100!=0 && nota20!=0 && total_troco!=0 || nota100!=0 && nota10!=0 && total_troco!=0 || nota100!=0 && nota5!=0 && total_troco!=0 || nota100!=0 && nota5 && total_troco!=0 || nota100!=0 && nota2!=0 && total_troco!=0)
            printf("possible\n");
        else if(nota50!=0 && nota20!=0 && total_troco!=0 || nota50!=0 && nota10!=0 && total_troco!=0 || nota50!=0 && nota5!=0 && total_troco!=0 || nota50!=0 && nota5 && total_troco!=0 || nota50!=0 && nota2!=0 && total_troco!=0)
           printf("possible\n");
        else if(nota20!=0 && nota10!=0 && total_troco!=0 || nota20!=0 && nota5!=0 && total_troco!=0 || nota20!=0 && nota5 && total_troco!=0 || nota20!=0 && nota2!=0 && total_troco!=0)
            printf("possible\n");
        else if(nota10!=0 && nota5!=0 && total_troco!=0 || nota10!=0 && nota5 && total_troco!=0 || nota10!=0 && nota2!=0 && total_troco!=0)
            printf("possible\n");
        else if(nota5!=0 && nota2!=0 && total_troco!=0)
            printf("possible\n");
        else
            printf("impossible\n");
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int valor_compra=1, valor_recebido=1, total_troco;
    int nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0;
    while(valor_compra!=0 && valor_recebido!=0){
        scanf("%d %d", &valor_compra, &valor_recebido);
        total_troco=valor_recebido-valor_compra;
        nota100=total_troco/100;
        total_troco=total_troco%100;
        nota50=total_troco/50;
        total_troco=total_troco%50;
        nota20=total_troco/20;
        total_troco=total_troco%20;
        nota10=total_troco/10;
        total_troco=total_troco%10;
        nota5=total_troco/5;
        total_troco=total_troco%5;
        nota2=total_troco/2;
        total_troco=total_troco%2;
        if(nota100!=0 && nota50!=0 && total_troco!=0 || nota100!=0 && nota20!=0 && total_troco!=0 || nota100!=0 && nota10!=0 && total_troco!=0 || nota100!=0 && nota5!=0 && total_troco!=0 || nota100!=0 && nota5 && total_troco!=0 || nota100!=0 && nota2!=0 && total_troco!=0)
            printf("possible\n");
        else if(nota50!=0 && nota20!=0 && total_troco!=0 || nota50!=0 && nota10!=0 && total_troco!=0 || nota50!=0 && nota5!=0 && total_troco!=0 || nota50!=0 && nota5 && total_troco!=0 || nota50!=0 && nota2!=0 && total_troco!=0)
           printf("possible\n");
        else if(nota20!=0 && nota10!=0 && total_troco!=0 || nota20!=0 && nota5!=0 && total_troco!=0 || nota20!=0 && nota5 && total_troco!=0 || nota20!=0 && nota2!=0 && total_troco!=0)
            printf("possible\n");
        else if(nota10!=0 && nota5!=0 && total_troco!=0 || nota10!=0 && nota5 && total_troco!=0 || nota10!=0 && nota2!=0 && total_troco!=0)
            printf("possible\n");
        else if(nota5!=0 && nota2!=0 && total_troco!=0)
            printf("possible\n");
        else
            printf("impossible\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
