<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct mensagem Tmensagem;

struct mensagem{
	char idioma[50];
	char frase[100];
};

int main(){
	int qtd_idioma, qtd_pessoa, i, j;
	char nome[100], idioma[50];
	scanf("%d%*c", &qtd_idioma);
	Tmensagem dados[qtd_idioma];
	for(i=0;i<qtd_idioma;i++){
		scanf("%s%*c", dados[i].idioma);
		scanf("%[^\n]%*c", dados[i].frase);
	}
	scanf("%d%*c", &qtd_pessoa);
	fflush(stdin);
	for(i=0;i<qtd_pessoa;i++){
		scanf("%[^\n]%*c", nome);
		scanf("%s%*c", idioma);
		for(j=0;j<qtd_idioma;j++){
			if(strcmp(idioma, dados[j].idioma)==0){
				printf("%s\n%s\n", nome, dados[j].frase);
			}
		}
        printf("\n");
	}
	return 0;
}

=======
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct mensagem Tmensagem;

struct mensagem{
	char idioma[50];
	char frase[100];
};

int main(){
	int qtd_idioma, qtd_pessoa, i, j;
	char nome[100], idioma[50];
	scanf("%d%*c", &qtd_idioma);
	Tmensagem dados[qtd_idioma];
	for(i=0;i<qtd_idioma;i++){
		scanf("%s%*c", dados[i].idioma);
		scanf("%[^\n]%*c", dados[i].frase);
	}
	scanf("%d%*c", &qtd_pessoa);
	fflush(stdin);
	for(i=0;i<qtd_pessoa;i++){
		scanf("%[^\n]%*c", nome);
		scanf("%s%*c", idioma);
		for(j=0;j<qtd_idioma;j++){
			if(strcmp(idioma, dados[j].idioma)==0){
				printf("%s\n%s\n", nome, dados[j].frase);
			}
		}
        printf("\n");
	}
	return 0;
}

>>>>>>> refs/remotes/origin/master
