<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compara(const void *a, const void *b){
	return *(int*)a-*(int*)b;
}

int main(){
	long qtd_par, saldo, qtd_vi, qtd_im, i, f, c;
	long vet[100005];
	while(scanf("%ld %ld", &qtd_par, &saldo) != EOF){
		qtd_vi=0, qtd_im=0;
		for(i=0;i<qtd_par;i++){
			scanf("%ld %ld", &f, &c);
			vet[i]=f-c;
			if(vet[i]>0)
			    qtd_vi++;
			if(vet[i]==0)
			    qtd_im++;
		}
		qsort(vet, qtd_par, sizeof(int), compara);
		//printf("v %d i %d\n", qtd_vi, qtd_im);
		if(saldo >= qtd_im && qtd_im > 0)
			qtd_vi+=qtd_im, saldo-=qtd_im, qtd_im=0;
		else if(saldo < qtd_im && qtd_im > 0)
			qtd_vi+=saldo, qtd_im-=saldo, saldo=0;
		i=qtd_par-qtd_vi-1;
		//printf("$$$ %d\n", i);
		f=0;
		while(saldo >= abs(vet[i]-0)+1 && i>= 0){
			saldo-= abs(vet[i]-0)+1;
			f++;
			i--;
		}
		if(saldo == abs(vet[i]-0) && i>= 0 && saldo > 0)
		    qtd_im++;
		qtd_vi+=f;
		//printf("v %d i %d\n", qtd_vi, qtd_im);
		printf("%ld\n", 3*qtd_vi+qtd_im);
	}
	return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compara(const void *a, const void *b){
	return *(int*)a-*(int*)b;
}

int main(){
	long qtd_par, saldo, qtd_vi, qtd_im, i, f, c;
	long vet[100005];
	while(scanf("%ld %ld", &qtd_par, &saldo) != EOF){
		qtd_vi=0, qtd_im=0;
		for(i=0;i<qtd_par;i++){
			scanf("%ld %ld", &f, &c);
			vet[i]=f-c;
			if(vet[i]>0)
			    qtd_vi++;
			if(vet[i]==0)
			    qtd_im++;
		}
		qsort(vet, qtd_par, sizeof(int), compara);
		//printf("v %d i %d\n", qtd_vi, qtd_im);
		if(saldo >= qtd_im && qtd_im > 0)
			qtd_vi+=qtd_im, saldo-=qtd_im, qtd_im=0;
		else if(saldo < qtd_im && qtd_im > 0)
			qtd_vi+=saldo, qtd_im-=saldo, saldo=0;
		i=qtd_par-qtd_vi-1;
		//printf("$$$ %d\n", i);
		f=0;
		while(saldo >= abs(vet[i]-0)+1 && i>= 0){
			saldo-= abs(vet[i]-0)+1;
			f++;
			i--;
		}
		if(saldo == abs(vet[i]-0) && i>= 0 && saldo > 0)
		    qtd_im++;
		qtd_vi+=f;
		//printf("v %d i %d\n", qtd_vi, qtd_im);
		printf("%ld\n", 3*qtd_vi+qtd_im);
	}
	return 0;
}
>>>>>>> refs/remotes/origin/master
