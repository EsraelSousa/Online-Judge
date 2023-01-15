<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int ordena_decrescente(const void *a, const void *b){
    if(*(int*)a == *(int*)b)
        return 0;
    else if(*(int*)a < *(int*)b)
        return 1;
    else
        return -1;
}

int main(){
    int qtd_teste, qtd_aluno, cont_nao_muda=0, i, j;
    scanf("%d", &qtd_teste);
    for(j=0;j<qtd_teste;j++){
        scanf("%d", &qtd_aluno);
        int chegada[qtd_aluno], pos_ordem[qtd_aluno];
        for(i=0;i<qtd_aluno;i++){
            scanf("%d", &chegada[i]);
            pos_ordem[i]=chegada[i];
        }
        qsort(pos_ordem, qtd_aluno, sizeof(int), ordena_decrescente);
        for(i=0;i<qtd_aluno;i++)
            if(pos_ordem[i]==chegada[i])
                cont_nao_muda++;
        printf("%d\n", cont_nao_muda);
        cont_nao_muda=0;
    }

    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

int ordena_decrescente(const void *a, const void *b){
    if(*(int*)a == *(int*)b)
        return 0;
    else if(*(int*)a < *(int*)b)
        return 1;
    else
        return -1;
}

int main(){
    int qtd_teste, qtd_aluno, cont_nao_muda=0, i, j;
    scanf("%d", &qtd_teste);
    for(j=0;j<qtd_teste;j++){
        scanf("%d", &qtd_aluno);
        int chegada[qtd_aluno], pos_ordem[qtd_aluno];
        for(i=0;i<qtd_aluno;i++){
            scanf("%d", &chegada[i]);
            pos_ordem[i]=chegada[i];
        }
        qsort(pos_ordem, qtd_aluno, sizeof(int), ordena_decrescente);
        for(i=0;i<qtd_aluno;i++)
            if(pos_ordem[i]==chegada[i])
                cont_nao_muda++;
        printf("%d\n", cont_nao_muda);
        cont_nao_muda=0;
    }

    return 0;
}
>>>>>>> refs/remotes/origin/master
