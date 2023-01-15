<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

typedef struct pedaco Tpedaco;

struct pedaco{
    char nome[55];
    int data_validade;
};

int ordena(Tpedaco *a, Tpedaco *b);

int main(){
    int qtd_pedaco, i;
    Tpedaco pedacos_carne[10];
    while(scanf("%d", &qtd_pedaco) != EOF){
        for(i=0;i<qtd_pedaco;i++)
            scanf("%s %d", pedacos_carne[i].nome, &pedacos_carne[i].data_validade);
        qsort(pedacos_carne, qtd_pedaco, sizeof(Tpedaco), ordena);
        for(i=0;i<qtd_pedaco;i++){
            if(i==qtd_pedaco-1)
                printf("%s\n", pedacos_carne[i].nome);
            else
                printf("%s ", pedacos_carne[i].nome);
        }
    }
    return 0;
}

int ordena(Tpedaco *a, Tpedaco *b){
    return a->data_validade - b->data_validade;
}
=======
#include <stdio.h>
#include <stdlib.h>

typedef struct pedaco Tpedaco;

struct pedaco{
    char nome[55];
    int data_validade;
};

int ordena(Tpedaco *a, Tpedaco *b);

int main(){
    int qtd_pedaco, i;
    Tpedaco pedacos_carne[10];
    while(scanf("%d", &qtd_pedaco) != EOF){
        for(i=0;i<qtd_pedaco;i++)
            scanf("%s %d", pedacos_carne[i].nome, &pedacos_carne[i].data_validade);
        qsort(pedacos_carne, qtd_pedaco, sizeof(Tpedaco), ordena);
        for(i=0;i<qtd_pedaco;i++){
            if(i==qtd_pedaco-1)
                printf("%s\n", pedacos_carne[i].nome);
            else
                printf("%s ", pedacos_carne[i].nome);
        }
    }
    return 0;
}

int ordena(Tpedaco *a, Tpedaco *b){
    return a->data_validade - b->data_validade;
}
>>>>>>> refs/remotes/origin/master
