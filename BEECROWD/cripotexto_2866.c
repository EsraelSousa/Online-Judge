<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    char texto_criptografado[1000], texto_descriptografado[1000];
    int qtd_caso_teste=3, i, j=0;
    scanf("%d", &qtd_caso_teste);
    for(i=0;i<qtd_caso_teste;i++){
        scanf("%s", texto_criptografado);
        fflush(stdin);
    	for(i=0;i<strlen(texto_criptografado);i++){
    		if(texto_criptografado[i] > 96 && texto_criptografado[i]<123){
    			texto_descriptografado[j]=texto_criptografado[i];
    			j++;
    		}
    	}
    	for(j=j-1;j>=0;j--)
    		printf("%c", texto_descriptografado[j]);
    	printf("\n");
    	j=0;
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    char texto_criptografado[1000], texto_descriptografado[1000];
    int qtd_caso_teste=3, i, j=0;
    scanf("%d", &qtd_caso_teste);
    for(i=0;i<qtd_caso_teste;i++){
        scanf("%s", texto_criptografado);
        fflush(stdin);
    	for(i=0;i<strlen(texto_criptografado);i++){
    		if(texto_criptografado[i] > 96 && texto_criptografado[i]<123){
    			texto_descriptografado[j]=texto_criptografado[i];
    			j++;
    		}
    	}
    	for(j=j-1;j>=0;j--)
    		printf("%c", texto_descriptografado[j]);
    	printf("\n");
    	j=0;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
