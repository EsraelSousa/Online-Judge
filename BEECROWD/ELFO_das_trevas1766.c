<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct rena Trena;

struct rena{
	char nome[103];
	int peso;
	int idade;
	double altura;
};

int ordena(Trena *a, Trena *b);

int main(){
	int qtd_teste, qtd_rena, qtd_rena_escolhida, i, j;
	scanf("%d", &qtd_teste);
	for(i=0;i<qtd_teste;i++){
		scanf("%d %d%*c", &qtd_rena, &qtd_rena_escolhida);
		Trena renas[qtd_rena];
		for(j=0;j<qtd_rena;j++){
			scanf("%s %d %d %lf%*c", renas[j].nome, &renas[j].peso, &renas[j].idade, &renas[j].altura);
		}
		qsort(renas, qtd_rena, sizeof(Trena), ordena);
		printf("CENARIO {%d}\n", i+1);
		for(j=0;j<qtd_rena_escolhida;j++){
			printf("%d - %s\n", j+1, renas[j].nome);
		}
	}
}

int ordena(Trena *a, Trena *b){
 	if(a->peso == b->peso){
 		if(a->idade == b->idade){
 			if(a->altura == b->altura){
 				strcmp(a->nome, b->nome);
 			}
 			else if(a->altura < b->altura)
 				return -1;
 			else
 				return 1;
 		}
 		else if(a->idade < b->idade)
 			return -1;
 		else
 			return 1;
 	}
 	else if(a->peso > b->peso)
 		return -1;
 	else
 		return 1;
 }
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct rena Trena;

struct rena{
	char nome[103];
	int peso;
	int idade;
	double altura;
};

int ordena(Trena *a, Trena *b);

int main(){
	int qtd_teste, qtd_rena, qtd_rena_escolhida, i, j;
	scanf("%d", &qtd_teste);
	for(i=0;i<qtd_teste;i++){
		scanf("%d %d%*c", &qtd_rena, &qtd_rena_escolhida);
		Trena renas[qtd_rena];
		for(j=0;j<qtd_rena;j++){
			scanf("%s %d %d %lf%*c", renas[j].nome, &renas[j].peso, &renas[j].idade, &renas[j].altura);
		}
		qsort(renas, qtd_rena, sizeof(Trena), ordena);
		printf("CENARIO {%d}\n", i+1);
		for(j=0;j<qtd_rena_escolhida;j++){
			printf("%d - %s\n", j+1, renas[j].nome);
		}
	}
}

int ordena(Trena *a, Trena *b){
 	if(a->peso == b->peso){
 		if(a->idade == b->idade){
 			if(a->altura == b->altura){
 				strcmp(a->nome, b->nome);
 			}
 			else if(a->altura < b->altura)
 				return -1;
 			else
 				return 1;
 		}
 		else if(a->idade < b->idade)
 			return -1;
 		else
 			return 1;
 	}
 	else if(a->peso > b->peso)
 		return -1;
 	else
 		return 1;
 }
>>>>>>> refs/remotes/origin/master
