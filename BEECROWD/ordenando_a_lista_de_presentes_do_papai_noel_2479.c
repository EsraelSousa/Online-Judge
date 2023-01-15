<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordena(const void *a, const void *b){
    return strcasecmp(a, b);
}

int main(){
    int qtd_crianca, i, cont_comportada=0, cont_nao_comportada=0;
    char classificacao;
    scanf("%d%*c", &qtd_crianca);
    char criancas[qtd_crianca][24];
    for(i=0;i<qtd_crianca;i++){
        scanf("%c %s%*c", &classificacao, criancas[i]);
        if(classificacao=='+')
            cont_comportada++;
        else
            cont_nao_comportada++;
    }
    qsort(criancas, qtd_crianca, sizeof(criancas[0]), ordena);
    for(i=0;i<qtd_crianca;i++)
        printf("%s\n", criancas[i]);
    printf("Se comportaram: %d | Nao se comportaram: %d\n", cont_comportada, cont_nao_comportada);
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordena(const void *a, const void *b){
    return strcasecmp(a, b);
}

int main(){
    int qtd_crianca, i, cont_comportada=0, cont_nao_comportada=0;
    char classificacao;
    scanf("%d%*c", &qtd_crianca);
    char criancas[qtd_crianca][24];
    for(i=0;i<qtd_crianca;i++){
        scanf("%c %s%*c", &classificacao, criancas[i]);
        if(classificacao=='+')
            cont_comportada++;
        else
            cont_nao_comportada++;
    }
    qsort(criancas, qtd_crianca, sizeof(criancas[0]), ordena);
    for(i=0;i<qtd_crianca;i++)
        printf("%s\n", criancas[i]);
    printf("Se comportaram: %d | Nao se comportaram: %d\n", cont_comportada, cont_nao_comportada);
    return 0;
}
>>>>>>> refs/remotes/origin/master
