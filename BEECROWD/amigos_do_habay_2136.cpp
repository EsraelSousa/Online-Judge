<<<<<<< HEAD
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

typedef struct pes Tpes;
struct pes{
    char nome[100];
    char gosta[6];
};

int ordena(Tpes *a, Tpes *b){
    return strcasecmp(a->nome, b->nome);
}

int main(){
    Tpes pessoas[10000];
    char ant_no[100], mel[100];
    int cont_ent=0, cont_apa=0, cont_max=0, i;
    do{
        scanf("%s", pessoas[cont_ent].nome);
        if(strcmp(pessoas[cont_ent].nome, "FIM") !=0){
            scanf("%s", pessoas[cont_ent].gosta);
            cont_ent++;
        }
    }while(strcmp(pessoas[cont_ent].nome, "FIM") !=0);
    qsort(pessoas, cont_ent, sizeof(Tpes), ordena);
    strcpy(ant_no, pessoas[0].nome);
    for(i=0; i<cont_ent; i++){
        if(strcmp(pessoas[i].gosta, "NO")==0)
            printf("%s\n", pessoas[i]. nome);
        else{
            if(strcmp(ant_no, pessoas[i].nome)==0)
                cont_apa++;
            else{
                if(cont_apa > cont_max){
                    strcpy(mel, pessoas[i].nome);
                }
                strcpy(ant_no, pessoas[i].nome);
                cont_apa=1;
            }
        }
    }
    if(cont_apa > cont_max){
        strcpy(mel, pessoas[i-1].nome);
    }
    printf("\nAmigo do Habay:\n%s\n", mel);
    return 0;
}
=======
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

typedef struct pes Tpes;
struct pes{
    char nome[100];
    char gosta[6];
};

int ordena(Tpes *a, Tpes *b){
    return strcasecmp(a->nome, b->nome);
}

int main(){
    Tpes pessoas[10000];
    char ant_no[100], mel[100];
    int cont_ent=0, cont_apa=0, cont_max=0, i;
    do{
        scanf("%s", pessoas[cont_ent].nome);
        if(strcmp(pessoas[cont_ent].nome, "FIM") !=0){
            scanf("%s", pessoas[cont_ent].gosta);
            cont_ent++;
        }
    }while(strcmp(pessoas[cont_ent].nome, "FIM") !=0);
    qsort(pessoas, cont_ent, sizeof(Tpes), ordena);
    strcpy(ant_no, pessoas[0].nome);
    for(i=0; i<cont_ent; i++){
        if(strcmp(pessoas[i].gosta, "NO")==0)
            printf("%s\n", pessoas[i]. nome);
        else{
            if(strcmp(ant_no, pessoas[i].nome)==0)
                cont_apa++;
            else{
                if(cont_apa > cont_max){
                    strcpy(mel, pessoas[i].nome);
                }
                strcpy(ant_no, pessoas[i].nome);
                cont_apa=1;
            }
        }
    }
    if(cont_apa > cont_max){
        strcpy(mel, pessoas[i-1].nome);
    }
    printf("\nAmigo do Habay:\n%s\n", mel);
    return 0;
}
>>>>>>> refs/remotes/origin/master
