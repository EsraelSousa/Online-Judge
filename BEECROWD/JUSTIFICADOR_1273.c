<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista Tlista, *Plista;
typedef struct palavra Tpalavra, *Ppalavra;

struct lista{
    int quantidade;
    Ppalavra inicio;
    Ppalavra fim;
};
struct palavra{
	char palavra[51];
	int tamanho;
	int tam_max;
	int qtd;
	Ppalavra proximo;
};

void ler_palavras(Ppalavra P);

Plista cria_lista(){
	Plista L;
	L=(Plista)malloc(sizeof(Tlista));
	if(L==NULL)
	    exit(0);
	L->quantidade=0;
	L->inicio=NULL;
	L->fim=NULL;
	return L;
}

void adiciona_caso(Plista L, int qtd_palavra){
	Ppalavra P, AUX;
	P=(Ppalavra)malloc(sizeof(Tpalavra)*qtd_palavra);
	if(P==NULL)
	    EXIT_FAILURE;
	if(L->quantidade==0){
		L->inicio=P;
		L->fim=P;
		P->proximo=NULL;
		P[0].qtd=qtd_palavra;
		L->quantidade++;
		ler_palavras(P);
	}else{
		AUX=L->fim;
		AUX->proximo=P;
		P->proximo=NULL;
		L->fim=P;
		L->quantidade++;
		P[0].qtd=qtd_palavra;
		ler_palavras(P);
	}
}

void ler_palavras(Ppalavra P){
	int i, tamanho_max=0;
	for(i=0;i<P[0].qtd;i++){
		scanf("%s", P[i].palavra);
		P[i].tamanho=strlen(P[i].palavra);
		if(P[i].tamanho > tamanho_max)
		    tamanho_max=P[i].tamanho;
	}
	P[0].tam_max=tamanho_max;
}

void exibe_casos(Plista L){
	int i, j, k;
	Ppalavra P;
	P=L->inicio;
	for(i=0;i<L->quantidade;i++){
		for(j=0;j<P[0].qtd;j++){
			for(k=0;k<P[0].tam_max-P[j].tamanho;k++)
			    printf(" ");
			printf("%s\n", P[j].palavra);
		}
		P=P->proximo;
		if(i<L->quantidade-1)
		    printf("\n");
	}
}

void libera_memoria_usada(Plista L){
	Ppalavra P, AUX;
	P=L->inicio;
	while(P!=NULL){
		AUX=P;
		P=P->proximo;
		free(AUX);
	}
	free(L);
}

int main(){
	int qtd_palavras;
	Plista L;
	L=cria_lista();
	do{
		scanf("%d", &qtd_palavras);
		if(qtd_palavras!=0)
		    adiciona_caso(L, qtd_palavras);
	}while(qtd_palavras!=0);
	exibe_casos(L);
	libera_memoria_usada(L);
	return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista Tlista, *Plista;
typedef struct palavra Tpalavra, *Ppalavra;

struct lista{
    int quantidade;
    Ppalavra inicio;
    Ppalavra fim;
};
struct palavra{
	char palavra[51];
	int tamanho;
	int tam_max;
	int qtd;
	Ppalavra proximo;
};

void ler_palavras(Ppalavra P);

Plista cria_lista(){
	Plista L;
	L=(Plista)malloc(sizeof(Tlista));
	if(L==NULL)
	    exit(0);
	L->quantidade=0;
	L->inicio=NULL;
	L->fim=NULL;
	return L;
}

void adiciona_caso(Plista L, int qtd_palavra){
	Ppalavra P, AUX;
	P=(Ppalavra)malloc(sizeof(Tpalavra)*qtd_palavra);
	if(P==NULL)
	    EXIT_FAILURE;
	if(L->quantidade==0){
		L->inicio=P;
		L->fim=P;
		P->proximo=NULL;
		P[0].qtd=qtd_palavra;
		L->quantidade++;
		ler_palavras(P);
	}else{
		AUX=L->fim;
		AUX->proximo=P;
		P->proximo=NULL;
		L->fim=P;
		L->quantidade++;
		P[0].qtd=qtd_palavra;
		ler_palavras(P);
	}
}

void ler_palavras(Ppalavra P){
	int i, tamanho_max=0;
	for(i=0;i<P[0].qtd;i++){
		scanf("%s", P[i].palavra);
		P[i].tamanho=strlen(P[i].palavra);
		if(P[i].tamanho > tamanho_max)
		    tamanho_max=P[i].tamanho;
	}
	P[0].tam_max=tamanho_max;
}

void exibe_casos(Plista L){
	int i, j, k;
	Ppalavra P;
	P=L->inicio;
	for(i=0;i<L->quantidade;i++){
		for(j=0;j<P[0].qtd;j++){
			for(k=0;k<P[0].tam_max-P[j].tamanho;k++)
			    printf(" ");
			printf("%s\n", P[j].palavra);
		}
		P=P->proximo;
		if(i<L->quantidade-1)
		    printf("\n");
	}
}

void libera_memoria_usada(Plista L){
	Ppalavra P, AUX;
	P=L->inicio;
	while(P!=NULL){
		AUX=P;
		P=P->proximo;
		free(AUX);
	}
	free(L);
}

int main(){
	int qtd_palavras;
	Plista L;
	L=cria_lista();
	do{
		scanf("%d", &qtd_palavras);
		if(qtd_palavras!=0)
		    adiciona_caso(L, qtd_palavras);
	}while(qtd_palavras!=0);
	exibe_casos(L);
	libera_memoria_usada(L);
	return 0;
}
>>>>>>> refs/remotes/origin/master
