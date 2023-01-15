<<<<<<< HEAD
#include <stdio.h>

#define max(a, b) (a>b)? a : b

int vet_p[105], inferior, superior;
int painel_t, caminhao_t, valor_kg, soma;

int soma_pa(int x){
	int qtd=1, s=0, i;
	for(i=0; i<painel_t; i++){
		if((s+vet_p[i])<=x){
			s+=vet_p[i];
		}else{
		    s=vet_p[i];
		    qtd++;
		}
	}
	return qtd;
}

void ans(){
	int meio, s;
	while(inferior < superior){
	    meio =(inferior+superior)/2;
	    if(soma_pa(meio)<=caminhao_t)
	        superior = meio;
	    else
	        inferior = meio+1;
	}
}

int main(){
	int maxi=0, dias_t, i;
	scanf("%d", &dias_t);
	while(dias_t--){
		soma=0;
		maxi=0;
		scanf("%d %d %d", &painel_t, &caminhao_t, &valor_kg);
		for(i=0; i<painel_t;i++){
			scanf("%d", &vet_p[i]);
			maxi = max(maxi, vet_p[i]);
			soma+=vet_p[i];
		}
		inferior = maxi;
		superior = soma;
		ans();
		printf("%d $%d\n", superior, superior*caminhao_t*valor_kg);
	}
	return 0;
}
=======
#include <stdio.h>

#define max(a, b) (a>b)? a : b

int vet_p[105], inferior, superior;
int painel_t, caminhao_t, valor_kg, soma;

int soma_pa(int x){
	int qtd=1, s=0, i;
	for(i=0; i<painel_t; i++){
		if((s+vet_p[i])<=x){
			s+=vet_p[i];
		}else{
		    s=vet_p[i];
		    qtd++;
		}
	}
	return qtd;
}

void ans(){
	int meio, s;
	while(inferior < superior){
	    meio =(inferior+superior)/2;
	    if(soma_pa(meio)<=caminhao_t)
	        superior = meio;
	    else
	        inferior = meio+1;
	}
}

int main(){
	int maxi=0, dias_t, i;
	scanf("%d", &dias_t);
	while(dias_t--){
		soma=0;
		maxi=0;
		scanf("%d %d %d", &painel_t, &caminhao_t, &valor_kg);
		for(i=0; i<painel_t;i++){
			scanf("%d", &vet_p[i]);
			maxi = max(maxi, vet_p[i]);
			soma+=vet_p[i];
		}
		inferior = maxi;
		superior = soma;
		ans();
		printf("%d $%d\n", superior, superior*caminhao_t*valor_kg);
	}
	return 0;
}
>>>>>>> refs/remotes/origin/master
