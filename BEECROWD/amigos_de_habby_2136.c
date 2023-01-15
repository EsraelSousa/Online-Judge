<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct amigo Tamigo;
typedef struct n_amigo Tn_amigo;

struct amigo{
    char nome[100];
};

struct n_amigo{
    char nome[100];
};

int ordena_nao_amigo(Tn_amigo *a, Tn_amigo *b){
    return strcasecmp(a->nome, b->nome);
}

int main(){
    int cont_amigo=0, cont_nao_amigo=0, j=0, k=0;
    Tamigo amigos[10000];
    Tn_amigo nao_amigo[10000];
    char nome[100]="entra", escolha[4];
    do{
        scanf("%s%*c", nome);
        if((strcmp(nome, "FIM") != 0)){
            scanf("%s%*c", escolha);
            if((strcmp(escolha, "NO") == 0)){
                strcpy(nao_amigo[j].nome, nome);
                j++, cont_nao_amigo++;
            }else{
                strcpy(amigos[k].nome, nome);
                k++, cont_amigo++;
            }
        }
    }while(strcmp(nome, "FIM") != 0);
    qsort(nao_amigo,cont_nao_amigo, sizeof(Tn_amigo), ordena_nao_amigo);

    for(j=0;j<cont_nao_amigo;j++)
        printf("%s\n", nao_amigo[j].nome);
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct amigo Tamigo;
typedef struct n_amigo Tn_amigo;

struct amigo{
    char nome[100];
};

struct n_amigo{
    char nome[100];
};

int ordena_nao_amigo(Tn_amigo *a, Tn_amigo *b){
    return strcasecmp(a->nome, b->nome);
}

int main(){
    int cont_amigo=0, cont_nao_amigo=0, j=0, k=0;
    Tamigo amigos[10000];
    Tn_amigo nao_amigo[10000];
    char nome[100]="entra", escolha[4];
    do{
        scanf("%s%*c", nome);
        if((strcmp(nome, "FIM") != 0)){
            scanf("%s%*c", escolha);
            if((strcmp(escolha, "NO") == 0)){
                strcpy(nao_amigo[j].nome, nome);
                j++, cont_nao_amigo++;
            }else{
                strcpy(amigos[k].nome, nome);
                k++, cont_amigo++;
            }
        }
    }while(strcmp(nome, "FIM") != 0);
    qsort(nao_amigo,cont_nao_amigo, sizeof(Tn_amigo), ordena_nao_amigo);

    for(j=0;j<cont_nao_amigo;j++)
        printf("%s\n", nao_amigo[j].nome);
    return 0;
}
>>>>>>> refs/remotes/origin/master
