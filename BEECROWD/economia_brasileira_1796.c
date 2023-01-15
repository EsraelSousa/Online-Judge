<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_pessoas, satisfeita=0, nao_satisfeita=0, i, escolha_i ;
    scanf("%d", &qtd_pessoas);
    for(i=0;i<qtd_pessoas;i++){
        scanf("%d", &escolha_i);
        if(escolha_i==1)
            nao_satisfeita++;
        else
            satisfeita++;
    }
    if(satisfeita > nao_satisfeita)
        printf("Y\n");
    else
        printf("N\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_pessoas, satisfeita=0, nao_satisfeita=0, i, escolha_i ;
    scanf("%d", &qtd_pessoas);
    for(i=0;i<qtd_pessoas;i++){
        scanf("%d", &escolha_i);
        if(escolha_i==1)
            nao_satisfeita++;
        else
            satisfeita++;
    }
    if(satisfeita > nao_satisfeita)
        printf("Y\n");
    else
        printf("N\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
