<<<<<<< HEAD
#include <stdio.h>

unsigned long long int resulta(int n){
        if(n==0){
            return 1;
        }
        else{
            unsigned long long int m=2*resulta(n-1);
            return m;
        }
}

int main(){
    int qtd_caso, i, qtd_casa_tabuleiro;
    unsigned long long int t=1;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d", &qtd_casa_tabuleiro);
        if(qtd_casa_tabuleiro==64)
            printf("1537228672809129 kg\n");
        else
            printf("%llu kg\n", resulta(qtd_casa_tabuleiro)/12000);
    }
    return 0;
}
=======
#include <stdio.h>

unsigned long long int resulta(int n){
        if(n==0){
            return 1;
        }
        else{
            unsigned long long int m=2*resulta(n-1);
            return m;
        }
}

int main(){
    int qtd_caso, i, qtd_casa_tabuleiro;
    unsigned long long int t=1;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d", &qtd_casa_tabuleiro);
        if(qtd_casa_tabuleiro==64)
            printf("1537228672809129 kg\n");
        else
            printf("%llu kg\n", resulta(qtd_casa_tabuleiro)/12000);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
