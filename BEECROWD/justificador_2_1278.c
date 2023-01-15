<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
	char palavras[100][55], aux[55];
	int qtd_palavra, i, j, tam, tam_max=0, k, caso=0;
	do{
		scanf("%d%*c", &qtd_palavra);
		if(qtd_palavra!=0){
			for(i=0;i<qtd_palavra;i++){
				scanf("%[^\n]%*c", aux);
				tam=strlen(aux);
				k=0;
				for(j=0;j<tam;j++){
					if(k==0 && aux[j]==' ')
						continue;
					else if(aux[j]==' ' && palavras[i][k-1]==' ' && k>0)
						continue;
					else{
						palavras[i][k]=aux[j];
						k++;
					}
				}
				if(palavras[i][k-1]==' ')
					palavras[i][k-1]='\0';
				else
					palavras[i][k]='\0';
				if(strlen(palavras[i])>tam_max)
					tam_max=strlen(palavras[i]);
			}
			if(caso>0)
				printf("\n");
			for(i=0;i<qtd_palavra;i++){
				printf("%*s\n", tam_max, palavras[i]);
			}
			caso=1, tam_max=0;
		}
	}while(qtd_palavra!=0);
	return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
	char palavras[100][55], aux[55];
	int qtd_palavra, i, j, tam, tam_max=0, k, caso=0;
	do{
		scanf("%d%*c", &qtd_palavra);
		if(qtd_palavra!=0){
			for(i=0;i<qtd_palavra;i++){
				scanf("%[^\n]%*c", aux);
				tam=strlen(aux);
				k=0;
				for(j=0;j<tam;j++){
					if(k==0 && aux[j]==' ')
						continue;
					else if(aux[j]==' ' && palavras[i][k-1]==' ' && k>0)
						continue;
					else{
						palavras[i][k]=aux[j];
						k++;
					}
				}
				if(palavras[i][k-1]==' ')
					palavras[i][k-1]='\0';
				else
					palavras[i][k]='\0';
				if(strlen(palavras[i])>tam_max)
					tam_max=strlen(palavras[i]);
			}
			if(caso>0)
				printf("\n");
			for(i=0;i<qtd_palavra;i++){
				printf("%*s\n", tam_max, palavras[i]);
			}
			caso=1, tam_max=0;
		}
	}while(qtd_palavra!=0);
	return 0;
}
>>>>>>> refs/remotes/origin/master
