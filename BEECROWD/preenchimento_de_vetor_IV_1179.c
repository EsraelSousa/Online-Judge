<<<<<<< HEAD
#include <stdio.h>

void exibe_vetor_dos_pares(int *vetor_par, int cont_par){
    int i;
    for(i=0;i<cont_par;i++)
    	printf("par[%d] = %d\n", i,vetor_par[i]);
}

void exibe_vetor_dos_impares(int *vetor_impa, int cont_impa){
	int i;
	for(i=0;i<cont_impa;i++)
		printf("impar[%d] = %d\n", i, vetor_impa[i]);
}

int main(){
	int num, cont_par=0, cont_impa=0,i;
	int vetor_par[5], vetor_impa[5];
	for(i=0;i<15;i++){
		scanf("%d", &num);
		if(num%2==0){
			vetor_par[cont_par]=num;
			cont_par++;
		}else{
			vetor_impa[cont_impa]=num;
			cont_impa++;
		}

		if(cont_par==5){
			exibe_vetor_dos_pares(vetor_par, cont_par);
			cont_par=0;
		}
		if(cont_impa==5){
			exibe_vetor_dos_impares(vetor_impa, cont_impa);
			cont_impa=0;
		}
	}
	exibe_vetor_dos_impares(vetor_impa, cont_impa);
	exibe_vetor_dos_pares(vetor_par, cont_par);
}

=======
#include <stdio.h>

void exibe_vetor_dos_pares(int *vetor_par, int cont_par){
    int i;
    for(i=0;i<cont_par;i++)
    	printf("par[%d] = %d\n", i,vetor_par[i]);
}

void exibe_vetor_dos_impares(int *vetor_impa, int cont_impa){
	int i;
	for(i=0;i<cont_impa;i++)
		printf("impar[%d] = %d\n", i, vetor_impa[i]);
}

int main(){
	int num, cont_par=0, cont_impa=0,i;
	int vetor_par[5], vetor_impa[5];
	for(i=0;i<15;i++){
		scanf("%d", &num);
		if(num%2==0){
			vetor_par[cont_par]=num;
			cont_par++;
		}else{
			vetor_impa[cont_impa]=num;
			cont_impa++;
		}

		if(cont_par==5){
			exibe_vetor_dos_pares(vetor_par, cont_par);
			cont_par=0;
		}
		if(cont_impa==5){
			exibe_vetor_dos_impares(vetor_impa, cont_impa);
			cont_impa=0;
		}
	}
	exibe_vetor_dos_impares(vetor_impa, cont_impa);
	exibe_vetor_dos_pares(vetor_par, cont_par);
}

>>>>>>> refs/remotes/origin/master
