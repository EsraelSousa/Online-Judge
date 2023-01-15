<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct crianca Tcrianca, *Pcrianca;
typedef struct lista_cir Tlista, *Plista;

struct crianca{
    char nome[40];
    int valor;
    Pcrianca proximo;
    Pcrianca anterior;
};

struct lista_cir{
    Pcrianca ini;
    Pcrianca fim;
    int total;
};

void add(Plista lista, char * nome, int valor){
    Pcrianca c, aux;
    c=(Pcrianca) malloc(sizeof(Tcrianca));
    strcpy(c->nome, nome);
    c->valor=valor;
    lista->total++;
    if(lista->total==1){
        c->proximo=c;
        c->anterior=c;
        lista->ini=c;
        lista->fim=c;
    }else{
        lista->ini->anterior=c;
        lista->fim->proximo=c;
        c->proximo=lista->ini;
        c->anterior=lista->fim;
        lista->fim=c;
    }
}

int main(){
    Plista lista;
    lista = (Plista) malloc(sizeof(Tlista));
    lista->total=0;
    Pcrianca cri, aux;
    char nome[40];
    int n, valor, i, sair;
    while(scanf("%d", &n) && n){
        for(i=0; i<n; i++){
            scanf("%s %d", nome, &valor);
            add(lista, nome, valor);
        }
        cri=lista->ini;
        sair = cri->valor;
        aux=cri;
        /*for(i=0; i<lista->total; i++){
            printf("NOME %s %d\n", aux->nome, aux->valor);
            aux=aux->proximo;
        }*/
        while(lista->total>1){
            if(sair%2==1){
                for(i=0; i<sair; i++){
                    cri=(Pcrianca)cri->proximo;
                }
            }else{
                for(i=0; i<sair; i++){
                    cri=(Pcrianca)cri->anterior;
                }
            }
            //printf("saindo %s\n", cri->nome);
            lista->total--;
            aux=cri;
            sair=cri->valor;
            cri->proximo->anterior=(Pcrianca)cri->anterior;
            cri->anterior->proximo=(Pcrianca)cri->proximo;
            if(sair%2==1) cri=(Pcrianca)cri->anterior;
            else cri=(Pcrianca)cri->proximo;
            free(aux);
        }
        printf("Vencedor(a): %s\n", cri->nome);
        lista->total=0;
        free(cri);
    }
    return 0;
}

=======
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct crianca Tcrianca, *Pcrianca;
typedef struct lista_cir Tlista, *Plista;

struct crianca{
    char nome[40];
    int valor;
    Pcrianca proximo;
    Pcrianca anterior;
};

struct lista_cir{
    Pcrianca ini;
    Pcrianca fim;
    int total;
};

void add(Plista lista, char * nome, int valor){
    Pcrianca c, aux;
    c=(Pcrianca) malloc(sizeof(Tcrianca));
    strcpy(c->nome, nome);
    c->valor=valor;
    lista->total++;
    if(lista->total==1){
        c->proximo=c;
        c->anterior=c;
        lista->ini=c;
        lista->fim=c;
    }else{
        lista->ini->anterior=c;
        lista->fim->proximo=c;
        c->proximo=lista->ini;
        c->anterior=lista->fim;
        lista->fim=c;
    }
}

int main(){
    Plista lista;
    lista = (Plista) malloc(sizeof(Tlista));
    lista->total=0;
    Pcrianca cri, aux;
    char nome[40];
    int n, valor, i, sair;
    while(scanf("%d", &n) && n){
        for(i=0; i<n; i++){
            scanf("%s %d", nome, &valor);
            add(lista, nome, valor);
        }
        cri=lista->ini;
        sair = cri->valor;
        aux=cri;
        /*for(i=0; i<lista->total; i++){
            printf("NOME %s %d\n", aux->nome, aux->valor);
            aux=aux->proximo;
        }*/
        while(lista->total>1){
            if(sair%2==1){
                for(i=0; i<sair; i++){
                    cri=(Pcrianca)cri->proximo;
                }
            }else{
                for(i=0; i<sair; i++){
                    cri=(Pcrianca)cri->anterior;
                }
            }
            //printf("saindo %s\n", cri->nome);
            lista->total--;
            aux=cri;
            sair=cri->valor;
            cri->proximo->anterior=(Pcrianca)cri->anterior;
            cri->anterior->proximo=(Pcrianca)cri->proximo;
            if(sair%2==1) cri=(Pcrianca)cri->anterior;
            else cri=(Pcrianca)cri->proximo;
            free(aux);
        }
        printf("Vencedor(a): %s\n", cri->nome);
        lista->total=0;
        free(cri);
    }
    return 0;
}

>>>>>>> refs/remotes/origin/master
