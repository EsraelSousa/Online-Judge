<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_aba_aberta, qtd_acao, i;
    char acao[8];
    scanf("%d %d", &qtd_aba_aberta, &qtd_acao);
    for(i=0;i<qtd_acao;i++){
        scanf("%s", &acao);
        if(strcmp(acao, "fechou")==0)
            qtd_aba_aberta++;
        else
            qtd_aba_aberta--;
    }
    printf("%d", qtd_aba_aberta);
    printf("\n");
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_aba_aberta, qtd_acao, i;
    char acao[8];
    scanf("%d %d", &qtd_aba_aberta, &qtd_acao);
    for(i=0;i<qtd_acao;i++){
        scanf("%s", &acao);
        if(strcmp(acao, "fechou")==0)
            qtd_aba_aberta++;
        else
            qtd_aba_aberta--;
    }
    printf("%d", qtd_aba_aberta);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
