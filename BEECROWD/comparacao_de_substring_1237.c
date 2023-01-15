<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int busca_maior_substring_comum(char *frase1, char *frase2){
    int tam1, tam2, tamanho_max=0, i, j;
    tam1=strlen(frase1), tam2=strlen(frase2);
    int matriz[tam1+1][tam2+1];
    memset(matriz, 0, sizeof(matriz));
    for(i=1;i<=tam1;i++){
        for(j=1;j<=tam2;j++){
            if(frase1[i-1]==frase2[j-1]){
                matriz[i][j]= matriz[i-1][j-1]+1;
                if(matriz[i][j] > tamanho_max)
                    tamanho_max=matriz[i][j];
            }
        }
    }/*   mostra a matriz com o tamanho maximo
    for(i=0;i<=tam1;i++){
        for(j=0;j<=tam2;j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }*/
    return tamanho_max;
}

int main(){
    char frase1[55], frase2[55], matriz[51][51];
    while(scanf("%[^\n]%*c %[^\n]%*c", frase1, frase2)!= EOF){
        printf("%d\n", busca_maior_substring_comum(frase1, frase2));
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int busca_maior_substring_comum(char *frase1, char *frase2){
    int tam1, tam2, tamanho_max=0, i, j;
    tam1=strlen(frase1), tam2=strlen(frase2);
    int matriz[tam1+1][tam2+1];
    memset(matriz, 0, sizeof(matriz));
    for(i=1;i<=tam1;i++){
        for(j=1;j<=tam2;j++){
            if(frase1[i-1]==frase2[j-1]){
                matriz[i][j]= matriz[i-1][j-1]+1;
                if(matriz[i][j] > tamanho_max)
                    tamanho_max=matriz[i][j];
            }
        }
    }/*   mostra a matriz com o tamanho maximo
    for(i=0;i<=tam1;i++){
        for(j=0;j<=tam2;j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }*/
    return tamanho_max;
}

int main(){
    char frase1[55], frase2[55], matriz[51][51];
    while(scanf("%[^\n]%*c %[^\n]%*c", frase1, frase2)!= EOF){
        printf("%d\n", busca_maior_substring_comum(frase1, frase2));
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
