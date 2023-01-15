<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno Taluno;

struct aluno{
    char nome[100];
    char direcao;
    int distancia;
};

int ordena(Taluno *a, Taluno *b);

int main(){
    int qtd_aluno, i;
    while(scanf("%d", &qtd_aluno) != EOF){
        Taluno alunos[qtd_aluno];
        for(i=0;i<qtd_aluno;i++)
            scanf("%s %c %d", alunos[i].nome, &alunos[i].direcao, &alunos[i].distancia);
        qsort(alunos, qtd_aluno, sizeof(Taluno), ordena);
        for(i=0;i<qtd_aluno;i++){
            printf("%s\n", alunos[i].nome);
        }
    }
    return 0;
}

int ordena(Taluno *a, Taluno *b){
    if(a->distancia == b->distancia){
        if(a->direcao == b->direcao)
            return strcmp(a->nome, b->nome);
        else if(a->direcao < b->direcao)
            return-1;
        else
            return 1;
    }
    else if(a->distancia < b->distancia)
        return -1;
    else
        return 1;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno Taluno;

struct aluno{
    char nome[100];
    char direcao;
    int distancia;
};

int ordena(Taluno *a, Taluno *b);

int main(){
    int qtd_aluno, i;
    while(scanf("%d", &qtd_aluno) != EOF){
        Taluno alunos[qtd_aluno];
        for(i=0;i<qtd_aluno;i++)
            scanf("%s %c %d", alunos[i].nome, &alunos[i].direcao, &alunos[i].distancia);
        qsort(alunos, qtd_aluno, sizeof(Taluno), ordena);
        for(i=0;i<qtd_aluno;i++){
            printf("%s\n", alunos[i].nome);
        }
    }
    return 0;
}

int ordena(Taluno *a, Taluno *b){
    if(a->distancia == b->distancia){
        if(a->direcao == b->direcao)
            return strcmp(a->nome, b->nome);
        else if(a->direcao < b->direcao)
            return-1;
        else
            return 1;
    }
    else if(a->distancia < b->distancia)
        return -1;
    else
        return 1;
}
>>>>>>> refs/remotes/origin/master
