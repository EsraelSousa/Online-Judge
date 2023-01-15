<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int ordena_vetor_crescente(const void *a, const void *b){
    if(*(int *)a == *(int *)b)
        return 0;
    else if(*(int *)a > *(int *)b )
        return -1;
    else
        return 1;
}

int main(){
    int qtd_pessoa, qtd_consulta, indice_busca, i;
    while(scanf("%d %d", &qtd_pessoa, &qtd_consulta) != EOF){
        int notas[qtd_pessoa];
        for(i=0;i<qtd_pessoa;i++){
            scanf("%d", &notas[i]);
        }
        qsort(notas, qtd_pessoa, sizeof(int), ordena_vetor_crescente);
        for(i=0;i<qtd_consulta;i++){
            scanf("%d", &indice_busca);
            printf("%d\n", notas[indice_busca-1]);
        }
    }
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int ordena_vetor_crescente(const void *a, const void *b){
    if(*(int *)a == *(int *)b)
        return 0;
    else if(*(int *)a > *(int *)b )
        return -1;
    else
        return 1;
}

int main(){
    int qtd_pessoa, qtd_consulta, indice_busca, i;
    while(scanf("%d %d", &qtd_pessoa, &qtd_consulta) != EOF){
        int notas[qtd_pessoa];
        for(i=0;i<qtd_pessoa;i++){
            scanf("%d", &notas[i]);
        }
        qsort(notas, qtd_pessoa, sizeof(int), ordena_vetor_crescente);
        for(i=0;i<qtd_consulta;i++){
            scanf("%d", &indice_busca);
            printf("%d\n", notas[indice_busca-1]);
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
