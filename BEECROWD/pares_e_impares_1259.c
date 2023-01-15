<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

typedef struct lista_par Tlista_par, *Plista_par;
typedef struct lista_impa Tlista_impa, *Plista_impa;
typedef struct elemento Telem, *Pelem;

struct lista_par{
    int quantidade;
    Pelem inicio;
    Pelem fim;
};

struct lista_impa{
    int quantidade;
    Pelem inicio;
    Pelem fim;
};

struct elemento{
    int valor;
    Pelem proximo;
    Pelem anterior;
};

Plista_par cria_lista_par();
Plista_impa cria_lista_impa();
void insere_lista_par(Plista_par LP, int valor);
void insere_lista_impa(Plista_impa LI, int valor);
void exibe_as_listas(Plista_par LP, Plista_impa LI);
void destroi_listas(Plista_par LP, Plista_impa LI);

int main(){
    Plista_par LP;
    Plista_impa LI;
    LP=cria_lista_par();
    LI=cria_lista_impa();
    int qtd_valor, valor, i;
    scanf("%d", &qtd_valor);
    for(i=0;i<qtd_valor;i++){
        scanf("%d", &valor);
        if(valor%2==0)
            insere_lista_par(LP, valor);
        else
            insere_lista_impa(LI, valor);
    }
    exibe_as_listas(LP, LI);
    destroi_listas(LP, LI);
    return 0;
}

Plista_par cria_lista_par(){
    Plista_par P;
    P=(Plista_par)malloc(sizeof(Tlista_par));
    P->quantidade=0;
    P->inicio=NULL;
    P->fim=NULL;
    return P;

}

Plista_impa cria_lista_impa(){
    Plista_impa I;
    I=(Plista_impa)malloc(sizeof(Tlista_impa));
    I->quantidade=0;
    I->inicio=NULL;
    I->fim=NULL;
    return I;
}

void insere_lista_par(Plista_par LP, int valor){
    Pelem E, AUX, ANTERIOR;
    E=(Pelem)malloc(sizeof(Telem));
    if(LP->quantidade==0){
        E->valor=valor;
        E->anterior=NULL;
        E->proximo=NULL;
        LP->inicio=(Pelem)E;
        LP->fim=(Pelem)E;
        LP->quantidade++;
    }else{
        AUX=(Pelem)LP->fim;  // ver o final da fila
        if(valor>=AUX->valor){
            E->valor=valor;
            AUX->proximo=(Pelem)E;
            E->anterior=(Pelem)LP->fim;
            E->proximo=NULL;
            LP->fim=(Pelem)E;
            LP->quantidade++;
        }else{
            AUX=(Pelem)LP->inicio;
            if(valor<=AUX->valor){
                E->valor=valor;
                E->proximo=(Pelem)AUX;
                E->anterior=NULL;
                AUX->anterior=(Pelem)E;
                LP->quantidade++;
                LP->inicio=(Pelem)E;
            }else{
                ANTERIOR=(Pelem)AUX;
                AUX=(Pelem)AUX->proximo;
                while(AUX->valor<valor){
                    ANTERIOR=(Pelem)AUX;
                    AUX=(Pelem)AUX->proximo;
                }
                ANTERIOR->proximo=(Pelem)E;
                E->proximo=(Pelem)AUX;
                E->valor=valor;
                LP->quantidade++;
            }
        }

    }
}
void insere_lista_impa(Plista_impa LI, int valor){
    Pelem E, AUX, ANTERIOR;
    E=(Pelem)malloc(sizeof(Telem));
    if(LI->quantidade==0){
        E->valor=valor;
        E->anterior=NULL;
        E->proximo=NULL;
        LI->inicio=(Pelem)E;
        LI->fim=(Pelem)E;
        LI->quantidade++;
    }else{
        AUX=(Pelem)LI->fim;  // ver o final da fila
        if(valor<=AUX->valor){
            E->valor=valor;
            AUX->proximo=(Pelem)E;
            E->anterior=(Pelem)LI->fim;
            E->proximo=NULL;
            LI->fim=(Pelem)E;
            LI->quantidade++;
        }else{
            AUX=(Pelem)LI->inicio;
            if(valor>=AUX->valor){
                E->valor=valor;
                E->proximo=(Pelem)AUX;
                E->anterior=NULL;
                AUX->anterior=(Pelem)E;
                LI->quantidade++;
                LI->inicio=(Pelem)E;
            }else{
                ANTERIOR=(Pelem)AUX;
                AUX=(Pelem)AUX->proximo;
                while(AUX->valor>valor){
                    ANTERIOR=(Pelem)AUX;
                    AUX=(Pelem)AUX->proximo;
                }
                ANTERIOR->proximo=(Pelem)E;
                E->proximo=(Pelem)AUX;
                E->valor=valor;
                LI->quantidade++;
            }
        }

    }
}
void exibe_as_listas(Plista_par LP, Plista_impa LI){
    Pelem E;
    // exibir os pares
    E=(Pelem)LP->inicio;
    while(E!=NULL){
        printf("%d\n", E->valor);
        E=(Pelem)E->proximo;
    }
    // exibir os impares
    E=(Pelem)LI->inicio;
    while(E!=NULL){
        printf("%d\n", E->valor);
        E=(Pelem)E->proximo;
    }
}

void destroi_listas(Plista_par LP, Plista_impa LI){
    Pelem E, AUX;
    // destruindo a lista de pares;
    E=(Pelem)LP->inicio;
    while(E!=NULL){
        AUX=(Pelem)E;
        E=(Pelem)E->proximo;
        free(AUX);
    }
    free(LP);
    // destruindo a lista de impares
    E=(Pelem)LI->inicio;
    while(E!=NULL){
        AUX=(Pelem)E;
        E=(Pelem)E->proximo;
        free(AUX);
    }
    free(LI);
}
=======
#include <stdio.h>
#include <stdlib.h>

typedef struct lista_par Tlista_par, *Plista_par;
typedef struct lista_impa Tlista_impa, *Plista_impa;
typedef struct elemento Telem, *Pelem;

struct lista_par{
    int quantidade;
    Pelem inicio;
    Pelem fim;
};

struct lista_impa{
    int quantidade;
    Pelem inicio;
    Pelem fim;
};

struct elemento{
    int valor;
    Pelem proximo;
    Pelem anterior;
};

Plista_par cria_lista_par();
Plista_impa cria_lista_impa();
void insere_lista_par(Plista_par LP, int valor);
void insere_lista_impa(Plista_impa LI, int valor);
void exibe_as_listas(Plista_par LP, Plista_impa LI);
void destroi_listas(Plista_par LP, Plista_impa LI);

int main(){
    Plista_par LP;
    Plista_impa LI;
    LP=cria_lista_par();
    LI=cria_lista_impa();
    int qtd_valor, valor, i;
    scanf("%d", &qtd_valor);
    for(i=0;i<qtd_valor;i++){
        scanf("%d", &valor);
        if(valor%2==0)
            insere_lista_par(LP, valor);
        else
            insere_lista_impa(LI, valor);
    }
    exibe_as_listas(LP, LI);
    destroi_listas(LP, LI);
    return 0;
}

Plista_par cria_lista_par(){
    Plista_par P;
    P=(Plista_par)malloc(sizeof(Tlista_par));
    P->quantidade=0;
    P->inicio=NULL;
    P->fim=NULL;
    return P;

}

Plista_impa cria_lista_impa(){
    Plista_impa I;
    I=(Plista_impa)malloc(sizeof(Tlista_impa));
    I->quantidade=0;
    I->inicio=NULL;
    I->fim=NULL;
    return I;
}

void insere_lista_par(Plista_par LP, int valor){
    Pelem E, AUX, ANTERIOR;
    E=(Pelem)malloc(sizeof(Telem));
    if(LP->quantidade==0){
        E->valor=valor;
        E->anterior=NULL;
        E->proximo=NULL;
        LP->inicio=(Pelem)E;
        LP->fim=(Pelem)E;
        LP->quantidade++;
    }else{
        AUX=(Pelem)LP->fim;  // ver o final da fila
        if(valor>=AUX->valor){
            E->valor=valor;
            AUX->proximo=(Pelem)E;
            E->anterior=(Pelem)LP->fim;
            E->proximo=NULL;
            LP->fim=(Pelem)E;
            LP->quantidade++;
        }else{
            AUX=(Pelem)LP->inicio;
            if(valor<=AUX->valor){
                E->valor=valor;
                E->proximo=(Pelem)AUX;
                E->anterior=NULL;
                AUX->anterior=(Pelem)E;
                LP->quantidade++;
                LP->inicio=(Pelem)E;
            }else{
                ANTERIOR=(Pelem)AUX;
                AUX=(Pelem)AUX->proximo;
                while(AUX->valor<valor){
                    ANTERIOR=(Pelem)AUX;
                    AUX=(Pelem)AUX->proximo;
                }
                ANTERIOR->proximo=(Pelem)E;
                E->proximo=(Pelem)AUX;
                E->valor=valor;
                LP->quantidade++;
            }
        }

    }
}
void insere_lista_impa(Plista_impa LI, int valor){
    Pelem E, AUX, ANTERIOR;
    E=(Pelem)malloc(sizeof(Telem));
    if(LI->quantidade==0){
        E->valor=valor;
        E->anterior=NULL;
        E->proximo=NULL;
        LI->inicio=(Pelem)E;
        LI->fim=(Pelem)E;
        LI->quantidade++;
    }else{
        AUX=(Pelem)LI->fim;  // ver o final da fila
        if(valor<=AUX->valor){
            E->valor=valor;
            AUX->proximo=(Pelem)E;
            E->anterior=(Pelem)LI->fim;
            E->proximo=NULL;
            LI->fim=(Pelem)E;
            LI->quantidade++;
        }else{
            AUX=(Pelem)LI->inicio;
            if(valor>=AUX->valor){
                E->valor=valor;
                E->proximo=(Pelem)AUX;
                E->anterior=NULL;
                AUX->anterior=(Pelem)E;
                LI->quantidade++;
                LI->inicio=(Pelem)E;
            }else{
                ANTERIOR=(Pelem)AUX;
                AUX=(Pelem)AUX->proximo;
                while(AUX->valor>valor){
                    ANTERIOR=(Pelem)AUX;
                    AUX=(Pelem)AUX->proximo;
                }
                ANTERIOR->proximo=(Pelem)E;
                E->proximo=(Pelem)AUX;
                E->valor=valor;
                LI->quantidade++;
            }
        }

    }
}
void exibe_as_listas(Plista_par LP, Plista_impa LI){
    Pelem E;
    // exibir os pares
    E=(Pelem)LP->inicio;
    while(E!=NULL){
        printf("%d\n", E->valor);
        E=(Pelem)E->proximo;
    }
    // exibir os impares
    E=(Pelem)LI->inicio;
    while(E!=NULL){
        printf("%d\n", E->valor);
        E=(Pelem)E->proximo;
    }
}

void destroi_listas(Plista_par LP, Plista_impa LI){
    Pelem E, AUX;
    // destruindo a lista de pares;
    E=(Pelem)LP->inicio;
    while(E!=NULL){
        AUX=(Pelem)E;
        E=(Pelem)E->proximo;
        free(AUX);
    }
    free(LP);
    // destruindo a lista de impares
    E=(Pelem)LI->inicio;
    while(E!=NULL){
        AUX=(Pelem)E;
        E=(Pelem)E->proximo;
        free(AUX);
    }
    free(LI);
}
>>>>>>> refs/remotes/origin/master
