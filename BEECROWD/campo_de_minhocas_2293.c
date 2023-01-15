<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_linha, qtd_coluna, soma1=0, i, j, soma_max=0;
    scanf("%d %d", &qtd_linha, &qtd_coluna);
    int mapa[qtd_linha][qtd_coluna];
    for(i=0;i<qtd_linha;i++){
        for(j=0;j<qtd_coluna;j++){
            scanf("%d", &mapa[i][j]);
            soma1+=mapa[i][j];
        }
        if(soma1>soma_max)
            soma_max=soma1;
        soma1=0;
    }
    for(i=0;i<qtd_coluna;i++){
        for(j=0;j<qtd_linha;j++){
            soma1+=mapa[j][i];
            if(soma1>soma_max)
                soma_max=soma1;
        }
        if(soma1>soma_max)
            soma_max=soma1;
        soma1=0;
    }
    printf("%d\n", soma_max);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_linha, qtd_coluna, soma1=0, i, j, soma_max=0;
    scanf("%d %d", &qtd_linha, &qtd_coluna);
    int mapa[qtd_linha][qtd_coluna];
    for(i=0;i<qtd_linha;i++){
        for(j=0;j<qtd_coluna;j++){
            scanf("%d", &mapa[i][j]);
            soma1+=mapa[i][j];
        }
        if(soma1>soma_max)
            soma_max=soma1;
        soma1=0;
    }
    for(i=0;i<qtd_coluna;i++){
        for(j=0;j<qtd_linha;j++){
            soma1+=mapa[j][i];
            if(soma1>soma_max)
                soma_max=soma1;
        }
        if(soma1>soma_max)
            soma_max=soma1;
        soma1=0;
    }
    printf("%d\n", soma_max);
    return 0;
}
>>>>>>> refs/remotes/origin/master
