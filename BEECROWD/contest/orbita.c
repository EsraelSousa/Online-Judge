#include <stdio.h>
#include <math.h>

int main(){
	int n, k, tam, i, j, dm=1000000000, ind, aux, ache=0;
	scanf("%d %d", &n, &k);
	int vet[n];
	for(i=0;i<n;i++){
		scanf("%d", &vet[i]);
		if(i>1 && vet[i]-vet[i-1]<dm){
			dm=vet[i]-vet[i-1];
			ind=i-1;
		}
	}
	if(n==2)
		printf("%d\n", k);
	else{
		tam=(int)log2(k);
		aux=k;
		int posi[tam+1];
		printf("Tam %d\n", tam+1);
		for(i=0;i<tam;i++){
			/*if(aux%2==0){
				posi[i]=aux/2+1;
				aux=aux/2+1;
			}else{*/
				posi[i]=aux/2;
				aux=aux/2;
			//}
		}
		for(i=0;i<tam;i++)
            printf("posi %d\n", posi[i]);
		//printf("ChEGA AQUI  ind %d\n", ind);
		for(i=0;i<tam+1;i++){
			//printf("Ol %d\n", i);
			aux=posi[i];
			for(j=2;(aux<=vet[ind+1]); j++){
				//printf("Re %d\n", j);
				if(j*posi[i]>=vet[ind] && j*posi[i]<=vet[ind+1])
					ache=1;
                if(ache==1)
                    break;
                aux*=j;
			}
			if(ache==1)
				break;
		}
		printf("%d\n", posi[i]);
	}
	return 0;
}
