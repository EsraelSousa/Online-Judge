<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_casos, i, valor_joga1, valor_joga2;
    char jogador1[100], jogador2[100], escolha_joga1[6], escolha_joga2[6];
    scanf("%d", &qtd_casos);
    for(i=0;i<qtd_casos;i++){
        scanf("%s %s %s %s", jogador1, escolha_joga1, jogador2, escolha_joga2);
        scanf("%d %d", &valor_joga1, &valor_joga2);
        if(strcmp(escolha_joga1, "PAR")==0 && (valor_joga1+valor_joga2)%2==0)
            printf("%s\n", jogador1);
        else if(strcmp(escolha_joga1, "IMPAR")==0 && (valor_joga1+valor_joga2)%2==1)
            printf("%s\n", jogador1);
        else
            printf("%s\n", jogador2);
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_casos, i, valor_joga1, valor_joga2;
    char jogador1[100], jogador2[100], escolha_joga1[6], escolha_joga2[6];
    scanf("%d", &qtd_casos);
    for(i=0;i<qtd_casos;i++){
        scanf("%s %s %s %s", jogador1, escolha_joga1, jogador2, escolha_joga2);
        scanf("%d %d", &valor_joga1, &valor_joga2);
        if(strcmp(escolha_joga1, "PAR")==0 && (valor_joga1+valor_joga2)%2==0)
            printf("%s\n", jogador1);
        else if(strcmp(escolha_joga1, "IMPAR")==0 && (valor_joga1+valor_joga2)%2==1)
            printf("%s\n", jogador1);
        else
            printf("%s\n", jogador2);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
