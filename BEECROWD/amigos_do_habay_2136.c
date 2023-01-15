<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pes Tpes;
struct pes{
    char nome[100];
    char gosta[6];
};

int ordena(Tpes *a, Tpes *b){
    if(strcmp(a->gosta,b->gosta)==0)
        return strcmp(a->nome, b->nome);
    else
        return strcmp(b->gosta,a->gosta);
}

int main(){
    Tpes pessoas[10000];
    char ant_no[100], mel[100];
    int cont_ent=0, flag=0, i,tam_nome_1;
    do{
        scanf("%s", pessoas[cont_ent].nome);
        if(strcmp(pessoas[cont_ent].nome, "FIM") !=0){
            scanf("%s", pessoas[cont_ent].gosta);
            if(cont_ent==0)
                tam_nome_1=strlen(pessoas[cont_ent].nome);
            if( strcmp(pessoas[cont_ent].gosta, "YES")==0 && strlen(pessoas[cont_ent].nome) > tam_nome_1){
                strcpy(mel, pessoas[cont_ent].nome);
                tam_nome_1=strlen(pessoas[cont_ent].nome);
                //printf("IND %d\n",cont_ent);
            }
            cont_ent++;
        }
    }while(strcmp(pessoas[cont_ent].nome, "FIM") !=0);
    qsort(pessoas, cont_ent, sizeof(Tpes), ordena);
    flag=0;
    for(i=0; i<cont_ent; i++){
        if(i==0){
            printf("%s\n", pessoas[i]. nome);
            flag=i;
        }
        else if(strcmp(pessoas[i].nome, pessoas[flag].nome)!=0){
            printf("%s\n", pessoas[i]. nome);
            flag=i;
        }
    }
    printf("\nAmigo do Habay:\n%s\n", mel);
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pes Tpes;
struct pes{
    char nome[100];
    char gosta[6];
};

int ordena(Tpes *a, Tpes *b){
    if(strcmp(a->gosta,b->gosta)==0)
        return strcmp(a->nome, b->nome);
    else
        return strcmp(b->gosta,a->gosta);
}

int main(){
    Tpes pessoas[10000];
    char ant_no[100], mel[100];
    int cont_ent=0, flag=0, i,tam_nome_1;
    do{
        scanf("%s", pessoas[cont_ent].nome);
        if(strcmp(pessoas[cont_ent].nome, "FIM") !=0){
            scanf("%s", pessoas[cont_ent].gosta);
            if(cont_ent==0)
                tam_nome_1=strlen(pessoas[cont_ent].nome);
            if( strcmp(pessoas[cont_ent].gosta, "YES")==0 && strlen(pessoas[cont_ent].nome) > tam_nome_1){
                strcpy(mel, pessoas[cont_ent].nome);
                tam_nome_1=strlen(pessoas[cont_ent].nome);
                //printf("IND %d\n",cont_ent);
            }
            cont_ent++;
        }
    }while(strcmp(pessoas[cont_ent].nome, "FIM") !=0);
    qsort(pessoas, cont_ent, sizeof(Tpes), ordena);
    flag=0;
    for(i=0; i<cont_ent; i++){
        if(i==0){
            printf("%s\n", pessoas[i]. nome);
            flag=i;
        }
        else if(strcmp(pessoas[i].nome, pessoas[flag].nome)!=0){
            printf("%s\n", pessoas[i]. nome);
            flag=i;
        }
    }
    printf("\nAmigo do Habay:\n%s\n", mel);
    return 0;
}
>>>>>>> refs/remotes/origin/master
