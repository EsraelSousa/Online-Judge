<<<<<<< HEAD
#include<stdio.h>

int main(){
    int  qtd_entrada_museu, valor_entrada, cont_cobranca=0, i;
    long long int soma_divida=0;
    do{
        scanf("%d", &qtd_entrada_museu);
        if(qtd_entrada_museu != -1){
            for(i=0;i<qtd_entrada_museu;i++){
                scanf("%d", &valor_entrada);
                soma_divida+=valor_entrada;
                if(soma_divida%100==0){
                    cont_cobranca++;
                    soma_divida=0;
                }
            }
            printf("%d\n", cont_cobranca);
            cont_cobranca=0;
            soma_divida=0;
        }
    }while(qtd_entrada_museu != -1);
    return  0;
}
=======
#include<stdio.h>

int main(){
    int  qtd_entrada_museu, valor_entrada, cont_cobranca=0, i;
    long long int soma_divida=0;
    do{
        scanf("%d", &qtd_entrada_museu);
        if(qtd_entrada_museu != -1){
            for(i=0;i<qtd_entrada_museu;i++){
                scanf("%d", &valor_entrada);
                soma_divida+=valor_entrada;
                if(soma_divida%100==0){
                    cont_cobranca++;
                    soma_divida=0;
                }
            }
            printf("%d\n", cont_cobranca);
            cont_cobranca=0;
            soma_divida=0;
        }
    }while(qtd_entrada_museu != -1);
    return  0;
}
>>>>>>> refs/remotes/origin/master
