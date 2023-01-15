<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct letra Tletra;

struct letra{
    int indice;
    int qtd;
};

int ordena(struct letra *a, struct letra  *b){
	if(a->qtd == b->qtd ){
		if(a->indice > b->indice)
			return 1;
		else
			return -1;
	}
	else if(a->qtd > b->qtd )
		return -1;
	else
		return 1;
}

int num_letra_tabela_ASCII(char L){
    int i;
    if(L >= 97 && L <123){
        for(i=97;i<123;i++){
            if(i==L)
                return i;
        }
    }
    else if(L>=65 && L<91){
        for(i=65;i<91;i++){
            if(i==L)
                return i;
        }
    }
    else
        return -1;
}


int main(){
    char texto[500];
    int qtd_teste, n, i, j;
    Tletra alfa[26];
    for(i=0;i<26;i++){
        alfa[i].indice=97+i;
        alfa[i].qtd=0;
    }
    scanf("%d%*c", &qtd_teste);
    for(j=0;j<qtd_teste;j++){
    scanf("%[^\n]%*c", texto);
    for(i=0;i<strlen(texto);i++){
    	n=num_letra_tabela_ASCII(texto[i]);
    	if(n>=97 && n<123)
    		alfa[n-97].qtd++;
    	else if(n>=65 && n<91)
    		alfa[n-65].qtd++;
    }
    qsort(alfa, 26, sizeof(Tletra ), ordena);
    for(i=0;i<26;i++){
    	if(alfa[0].qtd == alfa[i].qtd)
    		printf("%c", alfa[i].indice);
    	else
    		break;
    }
    for(i=0;i<26;i++){
        alfa[i].indice=97+i;
        alfa[i].qtd=0;
    }
    printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct letra Tletra;

struct letra{
    int indice;
    int qtd;
};

int ordena(struct letra *a, struct letra  *b){
	if(a->qtd == b->qtd ){
		if(a->indice > b->indice)
			return 1;
		else
			return -1;
	}
	else if(a->qtd > b->qtd )
		return -1;
	else
		return 1;
}

int num_letra_tabela_ASCII(char L){
    int i;
    if(L >= 97 && L <123){
        for(i=97;i<123;i++){
            if(i==L)
                return i;
        }
    }
    else if(L>=65 && L<91){
        for(i=65;i<91;i++){
            if(i==L)
                return i;
        }
    }
    else
        return -1;
}


int main(){
    char texto[500];
    int qtd_teste, n, i, j;
    Tletra alfa[26];
    for(i=0;i<26;i++){
        alfa[i].indice=97+i;
        alfa[i].qtd=0;
    }
    scanf("%d%*c", &qtd_teste);
    for(j=0;j<qtd_teste;j++){
    scanf("%[^\n]%*c", texto);
    for(i=0;i<strlen(texto);i++){
    	n=num_letra_tabela_ASCII(texto[i]);
    	if(n>=97 && n<123)
    		alfa[n-97].qtd++;
    	else if(n>=65 && n<91)
    		alfa[n-65].qtd++;
    }
    qsort(alfa, 26, sizeof(Tletra ), ordena);
    for(i=0;i<26;i++){
    	if(alfa[0].qtd == alfa[i].qtd)
    		printf("%c", alfa[i].indice);
    	else
    		break;
    }
    for(i=0;i<26;i++){
        alfa[i].indice=97+i;
        alfa[i].qtd=0;
    }
    printf("\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
