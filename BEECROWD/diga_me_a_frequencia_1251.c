#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct caractere Tcaractere;

struct caractere{
	int indice_ASCII;
	int qtd_aparece;
};

int ordena_crescente_frequencia(Tcaractere *a, Tcaractere *b);

int main(){
	char texto[1003];
	int cont_caso=0, i;
	Tcaractere vetor_caractere[128];
	for(i=0;i<128;i++){
		vetor_caractere[i].indice_ASCII=i;
		vetor_caractere[i].qtd_aparece=0;
	}
	while(scanf("%[^\n]%*c", &texto) != EOF){
		if(cont_caso==1)
			printf("\n");
		for(i=0;i<strlen(texto);i++){
		vetor_caractere[(int)texto[i]].qtd_aparece++;
		}
		qsort(vetor_caractere, 128, sizeof(Tcaractere), ordena_crescente_frequencia);
		for(i=0;i<128;i++){
            if(vetor_caractere[i].qtd_aparece != 0)
                //break;
            //else
                printf("%d %d\n", vetor_caractere[i].indice_ASCII, vetor_caractere[i].qtd_aparece);
		}
		for(i=0;i<128;i++)
			vetor_caractere[i].qtd_aparece=0;
		cont_caso=1;
	}
	return 0;
}

int ordena_crescente_frequencia(Tcaractere *a, Tcaractere *b){
	if(a->qtd_aparece == b->qtd_aparece){
		if(a->indice_ASCII == b->indice_ASCII)
			return 0;
		else if(a->indice_ASCII < b->indice_ASCII)
			return 1;
		else
			return -1;
	}
	else if(a->qtd_aparece < b->qtd_aparece)
		return -1;
	else
		return 1;
}
