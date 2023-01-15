<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

typedef struct lista Tlista, *Plista;
typedef struct vetor Tvetor, *Pvetor;
struct lista{
	int quantidade;
	Pvetor inicio;
	Pvetor fim;
};

struct vetor{
	int *vetor;
	int qtd_num;
	Pvetor proximo;
};

int ordena_decrescente(const void *a, const void *b);
Plista cria_lista();
void adiciona_vetor(Plista L, int quantidade_valores, int *vetor_rece);
void exibe_vetores(Plista L);
void libera_memoria(Plista L);

int main(){
	int qtd_caso, cont=0, qtd_num, num, i, j;
	Plista L;
	scanf("%d", &qtd_caso);
	for(i=0;i<qtd_caso;i++){
		scanf("%d", &qtd_num);
		int aux[qtd_num];
		for(j=0;j<qtd_num;j++){
			scanf("%d", &num);
			if(num%2 != 0){
				aux[cont]=num;
				cont++;
			}
		}
		if(cont > 0){
			int impares[cont];
			for(j=0;j<cont;j++)
			    impares[j]=aux[j];

			qsort(impares, cont, sizeof(int), ordena_decrescente);
			L=cria_lista();
			adiciona_vetor(L, cont, impares);
			exibe_vetores(L);
			libera_memoria(L);

		}else
		    printf("\n");
		cont=0;
	}
	return 0;
}

int ordena_decrescente(const void *a, const void *b){
	if(*(int*)a == *(int*)b)
	    return 0;
	else if(*(int *)a > *(int*)b)
	    return -1;
	else
	    return 1;
}

Plista cria_lista(){
	Plista L;
	L=(Plista)malloc(sizeof(Tlista));
	if(L == NULL)
	    exit(0);
	L->quantidade=0;
	L->inicio=NULL;
	L->fim=NULL;
	return L;
}

void adiciona_vetor(Plista L, int quantidade_valores, int *vetor_rece){
	int i, *vetor;
	vetor=(int*)malloc(sizeof(int)*quantidade_valores);
	Pvetor vet, AUX;
	vet=(Pvetor)malloc(sizeof(Tvetor ));
	vet->qtd_num=quantidade_valores;
	for(i=0;i<quantidade_valores;i++)
	    vetor[i]=vetor_rece[i];
	vet->vetor=vetor;
	if(L->quantidade == 0){
		L->inicio=vet;
		L->fim=vet;
		L->quantidade++;
		vet->proximo=NULL;
	}else{
		AUX=L->fim;
		AUX->proximo=vet;
		vet->proximo=NULL;
		L->fim=vet;
		L->quantidade++;
	}
}

void exibe_vetores(Plista L){
	Pvetor  vet;
	int i, tam, j, k=0;
	vet=L->inicio;
		tam=vet->qtd_num-1;
		for(j=0;j<vet->qtd_num;j++){
			if(j==vet->qtd_num-1 && j%2==0)
			    printf("%d\n", vet->vetor[k]);
			else if(j==vet->qtd_num-1 && j%2!=0)
			    printf("%d\n", vet->vetor[tam-k]);
			else if(j%2==0)
			    printf("%d ", vet->vetor[k]);
			else{
			    printf("%d ", vet->vetor[tam-k]);
			    k++;
			}
		}
}

void libera_memoria(Plista L){
	Pvetor vet, aux;
	vet=L->inicio;
	while(vet != NULL){
		aux=vet;
		vet=vet->proximo;
		free(aux->vetor);
		free(aux);
	}
	free(L);
}
=======
#include <stdio.h>
#include <stdlib.h>

typedef struct lista Tlista, *Plista;
typedef struct vetor Tvetor, *Pvetor;
struct lista{
	int quantidade;
	Pvetor inicio;
	Pvetor fim;
};

struct vetor{
	int *vetor;
	int qtd_num;
	Pvetor proximo;
};

int ordena_decrescente(const void *a, const void *b);
Plista cria_lista();
void adiciona_vetor(Plista L, int quantidade_valores, int *vetor_rece);
void exibe_vetores(Plista L);
void libera_memoria(Plista L);

int main(){
	int qtd_caso, cont=0, qtd_num, num, i, j;
	Plista L;
	scanf("%d", &qtd_caso);
	for(i=0;i<qtd_caso;i++){
		scanf("%d", &qtd_num);
		int aux[qtd_num];
		for(j=0;j<qtd_num;j++){
			scanf("%d", &num);
			if(num%2 != 0){
				aux[cont]=num;
				cont++;
			}
		}
		if(cont > 0){
			int impares[cont];
			for(j=0;j<cont;j++)
			    impares[j]=aux[j];

			qsort(impares, cont, sizeof(int), ordena_decrescente);
			L=cria_lista();
			adiciona_vetor(L, cont, impares);
			exibe_vetores(L);
			libera_memoria(L);

		}else
		    printf("\n");
		cont=0;
	}
	return 0;
}

int ordena_decrescente(const void *a, const void *b){
	if(*(int*)a == *(int*)b)
	    return 0;
	else if(*(int *)a > *(int*)b)
	    return -1;
	else
	    return 1;
}

Plista cria_lista(){
	Plista L;
	L=(Plista)malloc(sizeof(Tlista));
	if(L == NULL)
	    exit(0);
	L->quantidade=0;
	L->inicio=NULL;
	L->fim=NULL;
	return L;
}

void adiciona_vetor(Plista L, int quantidade_valores, int *vetor_rece){
	int i, *vetor;
	vetor=(int*)malloc(sizeof(int)*quantidade_valores);
	Pvetor vet, AUX;
	vet=(Pvetor)malloc(sizeof(Tvetor ));
	vet->qtd_num=quantidade_valores;
	for(i=0;i<quantidade_valores;i++)
	    vetor[i]=vetor_rece[i];
	vet->vetor=vetor;
	if(L->quantidade == 0){
		L->inicio=vet;
		L->fim=vet;
		L->quantidade++;
		vet->proximo=NULL;
	}else{
		AUX=L->fim;
		AUX->proximo=vet;
		vet->proximo=NULL;
		L->fim=vet;
		L->quantidade++;
	}
}

void exibe_vetores(Plista L){
	Pvetor  vet;
	int i, tam, j, k=0;
	vet=L->inicio;
		tam=vet->qtd_num-1;
		for(j=0;j<vet->qtd_num;j++){
			if(j==vet->qtd_num-1 && j%2==0)
			    printf("%d\n", vet->vetor[k]);
			else if(j==vet->qtd_num-1 && j%2!=0)
			    printf("%d\n", vet->vetor[tam-k]);
			else if(j%2==0)
			    printf("%d ", vet->vetor[k]);
			else{
			    printf("%d ", vet->vetor[tam-k]);
			    k++;
			}
		}
}

void libera_memoria(Plista L){
	Pvetor vet, aux;
	vet=L->inicio;
	while(vet != NULL){
		aux=vet;
		vet=vet->proximo;
		free(aux->vetor);
		free(aux);
	}
	free(L);
}
>>>>>>> refs/remotes/origin/master
