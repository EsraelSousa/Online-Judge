<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int** preenche_matriz(int n);
void exibe_matriz(int **matriz, int n);

int main(){
    int n, i, cont=0;
    do{
    	scanf("%d", &n);
    	if(n!=0){
    		if(cont==1)
                printf("\n");
    		int **matriz;
    		matriz=preenche_matriz(n);
    		exibe_matriz(matriz, n);
    		for(i=0;i<n;i++)
                free(matriz[i]);
    		free(matriz);
    		cont=1;
    	}else
            printf("\n");
    }while(n!=0);
    return 0;
}

int** preenche_matriz(int n){
	int **matriz, i;
	matriz=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++)
        matriz[i]=(int*)malloc(sizeof(int)*n);
	int j, m, k=1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0)
                matriz[i][j]=k;
            else
                matriz[i][j]=2*matriz[i][j-1];
        }
        k*=2;
    }
    return matriz;
}

void exibe_matriz(int **matriz, int n){
	int i, j, alinhamento=0, num;
	num=matriz[n-1][n-1];
	while(num>0){
        num=num/10;
        alinhamento++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==n-1)
                printf("%*d", alinhamento, matriz[i][j]);
            else
                printf("%*d ", alinhamento, matriz[i][j]);
		}
		printf("\n");
	}
}
=======
#include <stdio.h>
#include <stdlib.h>

int** preenche_matriz(int n);
void exibe_matriz(int **matriz, int n);

int main(){
    int n, i, cont=0;
    do{
    	scanf("%d", &n);
    	if(n!=0){
    		if(cont==1)
                printf("\n");
    		int **matriz;
    		matriz=preenche_matriz(n);
    		exibe_matriz(matriz, n);
    		for(i=0;i<n;i++)
                free(matriz[i]);
    		free(matriz);
    		cont=1;
    	}else
            printf("\n");
    }while(n!=0);
    return 0;
}

int** preenche_matriz(int n){
	int **matriz, i;
	matriz=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++)
        matriz[i]=(int*)malloc(sizeof(int)*n);
	int j, m, k=1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0)
                matriz[i][j]=k;
            else
                matriz[i][j]=2*matriz[i][j-1];
        }
        k*=2;
    }
    return matriz;
}

void exibe_matriz(int **matriz, int n){
	int i, j, alinhamento=0, num;
	num=matriz[n-1][n-1];
	while(num>0){
        num=num/10;
        alinhamento++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==n-1)
                printf("%*d", alinhamento, matriz[i][j]);
            else
                printf("%*d ", alinhamento, matriz[i][j]);
		}
		printf("\n");
	}
}
>>>>>>> refs/remotes/origin/master
