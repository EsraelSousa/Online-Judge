#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int qtd_trabalhador, qtd_etapa, x, i, j, cont=0;
	int pequi[1000], peso[1000];
	scanf("%d %d%*c", &qtd_trabalhador, &qtd_etapa);
	x=qtd_etapa/qtd_trabalhador;
	//int pequi[qtd_trabalhador], peso[qtd_trabalhador];
	memset(pequi, 0, sizeof(pequi));
	for(i=0;i<qtd_trabalhador;i++)
		scanf("%d", &peso[i]);
	if(x != 0){
		for(i=0;i<qtd_trabalhador;i++){
			for(j=qtd_trabalhador-1;j>=0;j--)
				pequi[i]+=x*peso[j];
		}
	}
	x=qtd_etapa%qtd_trabalhador;
	if(x != 0){
		for(i=0;i<qtd_trabalhador;i++){
			for(j=i;cont<x;j--){
				pequi[i]+=peso[j];
				if(j==0)
					j=qtd_trabalhador;
				cont++;
			}
			cont=0;
		}
	}
	for(i=0;i<qtd_trabalhador;i++){
		if(i==qtd_trabalhador-1)
			printf("%d\n", pequi[i]);
		else
			printf("%d ", pequi[i]);
	}
	return 0;
}
