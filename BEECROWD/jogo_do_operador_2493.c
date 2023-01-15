<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct expressao Texpressao;
typedef struct pessoa Tpessoa;

struct expressao {
	int a;
	int b;
	int resul;
};

struct pessoa{
	char nome[55];
	int acerto;
};

int ordena_pessoas(Tpessoa *a, Tpessoa *b){
    return strcmp(a->nome, b->nome);
}

int main(){
	int n, cont_pessoas_acerta, i, id_expressao, flag; // n eh qtd pessoas e expressao
	char operacao;
	Texpressao expressoes[51];
	Tpessoa pessoas[51];
	while(scanf("%d%*c", &n) == 1){
		cont_pessoas_acerta=0;
		for(i=0;i<n;i++){
			scanf("%d %d %*c %d", &expressoes[i].a, &expressoes[i].b, &expressoes[i].resul);
		}
		for(i=0;i<n;i++){
			scanf("%s %d %c", pessoas[i].nome, &id_expressao, &operacao);
			if(operacao=='+'){
				if(expressoes[id_expressao-1].a + expressoes[id_expressao-1].b == expressoes[id_expressao-1].resul)
					pessoas[i].acerto=1, cont_pessoas_acerta++;
				else
					pessoas[i].acerto=0;
			}
			else if(operacao=='-'){
				if(expressoes[id_expressao-1].a - expressoes[id_expressao-1].b == expressoes[id_expressao-1].resul)
					pessoas[i].acerto=1, cont_pessoas_acerta++;
				else
					pessoas[i].acerto=0;
			}
			else if(operacao=='*'){
				if(expressoes[id_expressao-1].a * expressoes[id_expressao-1].b == expressoes[id_expressao-1].resul)
					pessoas[i].acerto=1, cont_pessoas_acerta++;
				else
					pessoas[i].acerto=0;
			}
			else{
				if(expressoes[id_expressao-1].a + expressoes[id_expressao-1].b != expressoes[id_expressao-1].resul && expressoes[id_expressao-1].a - expressoes[id_expressao-1].b != expressoes[id_expressao-1].resul && expressoes[id_expressao-1].a * expressoes[id_expressao-1].b != expressoes[id_expressao-1].resul)
					pessoas[i].acerto=1, cont_pessoas_acerta++;
				else
					pessoas[i].acerto=0;
			}
		}
		if(cont_pessoas_acerta==0)
			printf("None Shall Pass!\n");
		else if(cont_pessoas_acerta==n)
			printf("You Shall All Pass!\n");
		else{
			qsort(pessoas, n, sizeof(Tpessoa), ordena_pessoas);
			flag=0;
			for(i=0;i<n;i++){
				if(pessoas[i].acerto==0 && flag==0)
                    printf("%s", pessoas[i].nome), flag=1;
				else if(pessoas[i].acerto==0 && flag==1)
					printf(" %s", pessoas[i].nome);
			}
			printf("\n");
		}
	}
	return 0;
}
=======
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct expressao Texpressao;
typedef struct pessoa Tpessoa;

struct expressao {
	int a;
	int b;
	int resul;
};

struct pessoa{
	char nome[55];
	int acerto;
};

int ordena_pessoas(Tpessoa *a, Tpessoa *b){
    return strcmp(a->nome, b->nome);
}

int main(){
	int n, cont_pessoas_acerta, i, id_expressao, flag; // n eh qtd pessoas e expressao
	char operacao;
	Texpressao expressoes[51];
	Tpessoa pessoas[51];
	while(scanf("%d%*c", &n) == 1){
		cont_pessoas_acerta=0;
		for(i=0;i<n;i++){
			scanf("%d %d %*c %d", &expressoes[i].a, &expressoes[i].b, &expressoes[i].resul);
		}
		for(i=0;i<n;i++){
			scanf("%s %d %c", pessoas[i].nome, &id_expressao, &operacao);
			if(operacao=='+'){
				if(expressoes[id_expressao-1].a + expressoes[id_expressao-1].b == expressoes[id_expressao-1].resul)
					pessoas[i].acerto=1, cont_pessoas_acerta++;
				else
					pessoas[i].acerto=0;
			}
			else if(operacao=='-'){
				if(expressoes[id_expressao-1].a - expressoes[id_expressao-1].b == expressoes[id_expressao-1].resul)
					pessoas[i].acerto=1, cont_pessoas_acerta++;
				else
					pessoas[i].acerto=0;
			}
			else if(operacao=='*'){
				if(expressoes[id_expressao-1].a * expressoes[id_expressao-1].b == expressoes[id_expressao-1].resul)
					pessoas[i].acerto=1, cont_pessoas_acerta++;
				else
					pessoas[i].acerto=0;
			}
			else{
				if(expressoes[id_expressao-1].a + expressoes[id_expressao-1].b != expressoes[id_expressao-1].resul && expressoes[id_expressao-1].a - expressoes[id_expressao-1].b != expressoes[id_expressao-1].resul && expressoes[id_expressao-1].a * expressoes[id_expressao-1].b != expressoes[id_expressao-1].resul)
					pessoas[i].acerto=1, cont_pessoas_acerta++;
				else
					pessoas[i].acerto=0;
			}
		}
		if(cont_pessoas_acerta==0)
			printf("None Shall Pass!\n");
		else if(cont_pessoas_acerta==n)
			printf("You Shall All Pass!\n");
		else{
			qsort(pessoas, n, sizeof(Tpessoa), ordena_pessoas);
			flag=0;
			for(i=0;i<n;i++){
				if(pessoas[i].acerto==0 && flag==0)
                    printf("%s", pessoas[i].nome), flag=1;
				else if(pessoas[i].acerto==0 && flag==1)
					printf(" %s", pessoas[i].nome);
			}
			printf("\n");
		}
	}
	return 0;
}
>>>>>>> refs/remotes/origin/master
