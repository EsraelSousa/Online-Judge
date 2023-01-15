<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, i, j, tam;
    char texto[1003];
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
    	scanf("%[^\n]%*c", texto);
    	tam=strlen(texto);
    	for(j=0;j<tam;j++){
    		if((texto[j]>=65 && texto[j]<=90) || (texto[j]>=97 && texto[j]<=122))
    			texto[j]+=3;
    	}
    	for(j=tam-1;j>=0;j--){
    		if(j<=tam/2 && tam%2>0)
    			printf("%c", texto[j]-1);
    		else if(j<tam/2 && tam%2==0)
                printf("%c", texto[j]-1);
    		else
    			printf("%c", texto[j]);
    	}
    	printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, i, j, tam;
    char texto[1003];
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
    	scanf("%[^\n]%*c", texto);
    	tam=strlen(texto);
    	for(j=0;j<tam;j++){
    		if((texto[j]>=65 && texto[j]<=90) || (texto[j]>=97 && texto[j]<=122))
    			texto[j]+=3;
    	}
    	for(j=tam-1;j>=0;j--){
    		if(j<=tam/2 && tam%2>0)
    			printf("%c", texto[j]-1);
    		else if(j<tam/2 && tam%2==0)
                printf("%c", texto[j]-1);
    		else
    			printf("%c", texto[j]);
    	}
    	printf("\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
