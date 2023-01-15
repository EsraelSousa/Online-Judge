<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, soma_kg=0, cont=1, i, j;
    double soma_preco=0, preco;
    char frutas[100000];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%lf%*c", &preco);
        soma_preco+=preco;
        scanf("%[^\n]%*c", frutas);
        for(j=0;j<strlen(frutas);j++){
            if(frutas[j]==' ')
                cont++;
        }
        printf("day %d: %d kg\n", i+1, cont);
        soma_kg+=cont;
        cont=1;
    }
    printf("%.2lf kg by day\nR$ %.2lf by day\n", (double)soma_kg/qtd_teste, soma_preco/qtd_teste);
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, soma_kg=0, cont=1, i, j;
    double soma_preco=0, preco;
    char frutas[100000];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%lf%*c", &preco);
        soma_preco+=preco;
        scanf("%[^\n]%*c", frutas);
        for(j=0;j<strlen(frutas);j++){
            if(frutas[j]==' ')
                cont++;
        }
        printf("day %d: %d kg\n", i+1, cont);
        soma_kg+=cont;
        cont=1;
    }
    printf("%.2lf kg by day\nR$ %.2lf by day\n", (double)soma_kg/qtd_teste, soma_preco/qtd_teste);
    return 0;
}
>>>>>>> refs/remotes/origin/master
