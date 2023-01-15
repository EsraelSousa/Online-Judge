#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))

int mat[1001][1001];
char palav[1001];

int maior_palin(int lin, int col){

	if(lin == col)
		return mat[lin][col] = 1;
	if(lin+1 == col)
		return mat[lin][col] = palav[lin] == palav[col] ? 2 : 1;
	if(mat[lin][col] != -1)
		return mat[lin][col];
	if(palav[lin] == palav[col])
		return mat[lin][col] = 2 + maior_palin(lin+1, col-1);
	return mat[lin][col] = max(maior_palin(lin+1, col), maior_palin(lin, col-1));
}

int main(){

	scanf("%s",palav);
	char aux[1001];
    int i, j=0, tam;
    tam=strlen(palav);
    for(i=0;i<tam;i++){
        if(palav[i]!='a'){
            aux[j]=palav[i];
            j++;
        }
    }
    aux[j]='\0';
    strcpy(palav, aux);
    tam=strlen(palav);
    //printf("PAL: %s\n", palav);
	for(i=0; i<tam; i++)
		for(j=0; j<tam; j++)
			mat[i][j] = -1;

	printf("%d\n",maior_palin(0, tam-1));

	return 0;
}
