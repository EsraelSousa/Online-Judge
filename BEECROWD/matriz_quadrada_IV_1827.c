<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int** preenche_matriz(int n);
void exibe_matriz(int **matriz, int n);

int main(){
    int n, i, cont=0;
    while(scanf("%d", &n) != EOF){
    		if(cont==1)
                printf("\n");
    		int **matriz;
    		matriz=preenche_matriz(n);
    		exibe_matriz(matriz, n);
    		for(i=0;i<n;i++)
                free(matriz[i]);
    		free(matriz);
    		cont=1;
    }
    printf("\n");
    return 0;
}

int** preenche_matriz(int n){
	int **matriz, i;
	matriz=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++)
        matriz[i]=(int*)malloc(sizeof(int)*n);
	int j, m, k=2;
    for(i=0;i<n;i++){

        if(i<n/3 || i>= n-n/3){
            for(j=0;j<n;j++){
                if(i+j==n-1)
                    matriz[i][j]=3;
                else if(i==j)
                    matriz[i][j]=2;
                else
                    matriz[i][j]=0;
            }
        }
        else{
            for(j=0;j<n;j++){
                if(j<n/3 || j>= n-n/3)
                    matriz[i][j]=0;
                else
                    matriz[i][j]=1;
            }
        }
        matriz[n/2][n/2]=4;
    }
    return matriz;
}

void exibe_matriz(int **matriz, int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
                printf("%d", matriz[i][j]);
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
    while(scanf("%d", &n) != EOF){
    		if(cont==1)
                printf("\n");
    		int **matriz;
    		matriz=preenche_matriz(n);
    		exibe_matriz(matriz, n);
    		for(i=0;i<n;i++)
                free(matriz[i]);
    		free(matriz);
    		cont=1;
    }
    printf("\n");
    return 0;
}

int** preenche_matriz(int n){
	int **matriz, i;
	matriz=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++)
        matriz[i]=(int*)malloc(sizeof(int)*n);
	int j, m, k=2;
    for(i=0;i<n;i++){

        if(i<n/3 || i>= n-n/3){
            for(j=0;j<n;j++){
                if(i+j==n-1)
                    matriz[i][j]=3;
                else if(i==j)
                    matriz[i][j]=2;
                else
                    matriz[i][j]=0;
            }
        }
        else{
            for(j=0;j<n;j++){
                if(j<n/3 || j>= n-n/3)
                    matriz[i][j]=0;
                else
                    matriz[i][j]=1;
            }
        }
        matriz[n/2][n/2]=4;
    }
    return matriz;
}

void exibe_matriz(int **matriz, int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
                printf("%d", matriz[i][j]);
		}
		printf("\n");
	}
}
>>>>>>> refs/remotes/origin/master
