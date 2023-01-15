<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int total_palavras=0, qtd_caractere=0, cont=0, i;
    char caractere, texto[1000];
    scanf("%c%*c", &caractere);
    scanf("%[^\n]%*c", texto);
    for(i=0;i<strlen(texto);i++){
		if(texto[i] == ' '){
			if(cont>0)
				qtd_caractere++;
			total_palavras++;
			cont=0;
		}else{
			if(texto[i]==caractere)
				cont++;
		}
	}
	if(cont>0)
				qtd_caractere++;
			total_palavras++;
	printf("%.1lf\n", 100.00*qtd_caractere/total_palavras);
	return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int total_palavras=0, qtd_caractere=0, cont=0, i;
    char caractere, texto[1000];
    scanf("%c%*c", &caractere);
    scanf("%[^\n]%*c", texto);
    for(i=0;i<strlen(texto);i++){
		if(texto[i] == ' '){
			if(cont>0)
				qtd_caractere++;
			total_palavras++;
			cont=0;
		}else{
			if(texto[i]==caractere)
				cont++;
		}
	}
	if(cont>0)
				qtd_caractere++;
			total_palavras++;
	printf("%.1lf\n", 100.00*qtd_caractere/total_palavras);
	return 0;
}
>>>>>>> refs/remotes/origin/master
