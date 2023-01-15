<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct candidato Tcand;

struct candidato{
    char nome[105];
    int poder;
    int qtd_matou;
    int qtd_morreu;
};

int ordena(Tcand *a, Tcand *b){
    if(a->poder == b->poder){
        if(b->qtd_matou == a->qtd_matou){
            if(a->qtd_morreu == b->qtd_morreu)
                return strcmp(a->nome, b->nome);
            else
                return a->qtd_morreu - b->qtd_morreu;
        }
        else
            return b->qtd_matou - a->qtd_matou;
    }
    else
        return b->poder - a->poder;
}

int main(){
    int qtd_candidato, i;
    scanf("%d", &qtd_candidato);
    Tcand candidatos[qtd_candidato];
    for(i=0; i<qtd_candidato; i++)
        scanf("%s %d %d %d", candidatos[i].nome, &candidatos[i].poder, &candidatos[i].qtd_matou, &candidatos[i].qtd_morreu);
    qsort(candidatos, qtd_candidato, sizeof(candidatos[0]), ordena);
    printf("%s\n", candidatos[0].nome);
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct candidato Tcand;

struct candidato{
    char nome[105];
    int poder;
    int qtd_matou;
    int qtd_morreu;
};

int ordena(Tcand *a, Tcand *b){
    if(a->poder == b->poder){
        if(b->qtd_matou == a->qtd_matou){
            if(a->qtd_morreu == b->qtd_morreu)
                return strcmp(a->nome, b->nome);
            else
                return a->qtd_morreu - b->qtd_morreu;
        }
        else
            return b->qtd_matou - a->qtd_matou;
    }
    else
        return b->poder - a->poder;
}

int main(){
    int qtd_candidato, i;
    scanf("%d", &qtd_candidato);
    Tcand candidatos[qtd_candidato];
    for(i=0; i<qtd_candidato; i++)
        scanf("%s %d %d %d", candidatos[i].nome, &candidatos[i].poder, &candidatos[i].qtd_matou, &candidatos[i].qtd_morreu);
    qsort(candidatos, qtd_candidato, sizeof(candidatos[0]), ordena);
    printf("%s\n", candidatos[0].nome);
    return 0;
}
>>>>>>> refs/remotes/origin/master
