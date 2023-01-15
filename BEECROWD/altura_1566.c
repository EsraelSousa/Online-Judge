<<<<<<< HEAD
#include <stdio.h>

void zerar(int *vetor);

int main(){
	int qtd_teste, qtd_altura, altura, altura_max=0, cont=0, i, j;
	int alturas[220];
	zerar(alturas);
	scanf("%d", &qtd_teste);
	for(i=0;i<qtd_teste;i++){
		scanf("%d", &qtd_altura);
		for(j=0;j<qtd_altura;j++){
			scanf("%d", &altura);
			alturas[altura-20]++;
			if(altura > altura_max)
				altura_max=altura;
		}
		for(j=0;j<220;j++){
			while(alturas[j]>0){
                cont++;
                if(cont==qtd_altura)
                    printf("%d\n", j+20);
                else
                    printf("%d ", j+20);
				alturas[j]--;
			}
		}
		cont=0;
	}
	return 0;
}

void zerar(int *vetor){
	int i;
	for(i=0;i<220;i++)
		vetor[i]=0;
}
=======
#include <stdio.h>

void zerar(int *vetor);

int main(){
	int qtd_teste, qtd_altura, altura, altura_max=0, cont=0, i, j;
	int alturas[220];
	zerar(alturas);
	scanf("%d", &qtd_teste);
	for(i=0;i<qtd_teste;i++){
		scanf("%d", &qtd_altura);
		for(j=0;j<qtd_altura;j++){
			scanf("%d", &altura);
			alturas[altura-20]++;
			if(altura > altura_max)
				altura_max=altura;
		}
		for(j=0;j<220;j++){
			while(alturas[j]>0){
                cont++;
                if(cont==qtd_altura)
                    printf("%d\n", j+20);
                else
                    printf("%d ", j+20);
				alturas[j]--;
			}
		}
		cont=0;
	}
	return 0;
}

void zerar(int *vetor){
	int i;
	for(i=0;i<220;i++)
		vetor[i]=0;
}
>>>>>>> refs/remotes/origin/master
