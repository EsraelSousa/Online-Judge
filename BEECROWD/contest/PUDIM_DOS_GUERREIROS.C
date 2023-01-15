#include <stdio.h>

int main(){
    int i, j, qtd_cesta;
    int pudim[100000];
    unsigned long long int soma1=0, soma2=0, aux=0;
    scanf("%d", &qtd_cesta);
    for(i=0;i<qtd_cesta;i++){
        scanf("%d", &pudim[i]);
        if(i<qtd_cesta/2)
        	soma1+=pudim[i];
        if(i>qtd_cesta/2)
        	soma2+=pudim[i];
    }
    if(soma1==soma2)
    	printf("%llu\n", soma1);
    else if(soma1 < soma2){
    	for(i=qtd_cesta/2-1;(i>=0 && soma1!=aux);i--){
    		j=qtd_cesta/2+1;
    		aux=soma2;
    		while(soma1!=aux && j<qtd_cesta){
    			aux-=pudim[j];
    			j++;
    		}
    		if(soma1!=aux)
    			soma1-=pudim[i];
    	}
    	printf("%llu\n", aux);
    }else{
    	for(i=qtd_cesta/2+1;i<qtd_cesta && soma2!=aux;i++){
    		j=qtd_cesta/2-1;
    		aux=soma1;
    		while(soma2!=aux && j>=0){
    			aux-=pudim[j];
    			j--;
    		}
    		if(soma2!=aux)
    			soma2-=pudim[i];
    	}
    	printf("%llu\n", aux);
    }
    return 0;
}
