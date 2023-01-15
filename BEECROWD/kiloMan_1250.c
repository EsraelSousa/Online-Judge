<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_teste, cont_atingido=0, N_tiro, i, j;
    int tiros[50];
    char acao[51];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d", &N_tiro);
        for(j=0;j<N_tiro;j++)
            scanf("%d", &tiros[j]);
        scanf("%s", &acao);
        for(j=0;j<N_tiro;j++){
            if(tiros[j]>2 && acao[j]=='J')
                cont_atingido++;
            if(tiros[j]<=2 && acao[j]=='S')
                cont_atingido++;
        }
        printf("%d\n", cont_atingido);
        cont_atingido=0;
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_teste, cont_atingido=0, N_tiro, i, j;
    int tiros[50];
    char acao[51];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d", &N_tiro);
        for(j=0;j<N_tiro;j++)
            scanf("%d", &tiros[j]);
        scanf("%s", &acao);
        for(j=0;j<N_tiro;j++){
            if(tiros[j]>2 && acao[j]=='J')
                cont_atingido++;
            if(tiros[j]<=2 && acao[j]=='S')
                cont_atingido++;
        }
        printf("%d\n", cont_atingido);
        cont_atingido=0;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
