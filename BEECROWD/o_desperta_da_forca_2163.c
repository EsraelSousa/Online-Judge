<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_linha, qtd_coluna, encontrou=0, i, j;
    scanf("%d %d", &qtd_linha, &qtd_coluna);
    int matriz[qtd_linha][qtd_coluna];
    for(i=0;i<qtd_linha;i++){
        for(j=0;j<qtd_coluna;j++)
            scanf("%d",  &matriz[i][j]);
    }
    for(i=1;i<qtd_linha-1;i++){
        for(j=1;j<qtd_coluna-1;j++){
            if(matriz[i][j]==42){
                if(matriz[i-1][j-1]==7 && matriz[i+1][j+1]==7 && matriz[i][j-1]==7 && matriz[i][j+1]==7 && matriz[i-1][j]==7 && matriz[i+1][j]==7 && matriz[i-1][j+1]==7 && matriz[i+1][j-1]==7){
                    printf("%d %d\n", i+1, j+1);
                    encontrou=1;
                }
            }
            if(encontrou==1)
                break;
        }
    }
    if(encontrou==0)
        printf("0 0\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_linha, qtd_coluna, encontrou=0, i, j;
    scanf("%d %d", &qtd_linha, &qtd_coluna);
    int matriz[qtd_linha][qtd_coluna];
    for(i=0;i<qtd_linha;i++){
        for(j=0;j<qtd_coluna;j++)
            scanf("%d",  &matriz[i][j]);
    }
    for(i=1;i<qtd_linha-1;i++){
        for(j=1;j<qtd_coluna-1;j++){
            if(matriz[i][j]==42){
                if(matriz[i-1][j-1]==7 && matriz[i+1][j+1]==7 && matriz[i][j-1]==7 && matriz[i][j+1]==7 && matriz[i-1][j]==7 && matriz[i+1][j]==7 && matriz[i-1][j+1]==7 && matriz[i+1][j-1]==7){
                    printf("%d %d\n", i+1, j+1);
                    encontrou=1;
                }
            }
            if(encontrou==1)
                break;
        }
    }
    if(encontrou==0)
        printf("0 0\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
