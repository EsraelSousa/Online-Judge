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
    if(n%2!=0)
        matriz[n/2][n/2]=n/2+1;
    for(i=0;i<n/2;i++){
        for(j=i;j<n-i;j++
        ){
            matriz[i][j]=k;
            matriz[n-i-1][j]=k;
        }
        j=i;
        for(m=i;m<n-1-i;m++){
            matriz[m][j]=k;
            matriz[m][n-1-i]=k;
        }
        k++;
    }
    return matriz;
}

void exibe_matriz(int **matriz, int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==n-1)
                printf("%3d", matriz[i][j]);
            else
                printf("%3d ", matriz[i][j]);
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
    if(n%2!=0)
        matriz[n/2][n/2]=n/2+1;
    for(i=0;i<n/2;i++){
        for(j=i;j<n-i;j++
        ){
            matriz[i][j]=k;
            matriz[n-i-1][j]=k;
        }
        j=i;
        for(m=i;m<n-1-i;m++){
            matriz[m][j]=k;
            matriz[m][n-1-i]=k;
        }
        k++;
    }
    return matriz;
}

void exibe_matriz(int **matriz, int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==n-1)
                printf("%3d", matriz[i][j]);
            else
                printf("%3d ", matriz[i][j]);
		}
		printf("\n");
	}
}
>>>>>>> refs/remotes/origin/master
