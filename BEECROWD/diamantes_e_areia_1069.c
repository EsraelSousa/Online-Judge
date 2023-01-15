<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, i, j, k, tam,cont_diamante=0;
    char mina[1005];
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
    	scanf("%[^\n]%*c", mina);
    	tam=strlen(mina);
    	for(j=0;j<tam;j++){
    		if(mina[j]=='<'){
    			k=j+1;
    			while(mina[k]!='>' && k<tam){
    				if(mina[k]=='<'){
    					j=k-1;
    					break;;
    				}
    				k++;
    			}
    			if(mina[k]=='>' && k<tam){
    				cont_diamante++;
    				mina[k]='.', mina[j]='.';
    				j=-1;
    			}
    		}
    	}
    	printf("%d\n", cont_diamante);
    	cont_diamante=0;
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, i, j, k, tam,cont_diamante=0;
    char mina[1005];
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
    	scanf("%[^\n]%*c", mina);
    	tam=strlen(mina);
    	for(j=0;j<tam;j++){
    		if(mina[j]=='<'){
    			k=j+1;
    			while(mina[k]!='>' && k<tam){
    				if(mina[k]=='<'){
    					j=k-1;
    					break;;
    				}
    				k++;
    			}
    			if(mina[k]=='>' && k<tam){
    				cont_diamante++;
    				mina[k]='.', mina[j]='.';
    				j=-1;
    			}
    		}
    	}
    	printf("%d\n", cont_diamante);
    	cont_diamante=0;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
