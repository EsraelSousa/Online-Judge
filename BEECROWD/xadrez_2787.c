#include <stdio.h>

int main(){
    int qtd_linha, qtd_coluna;
    scanf("%d %d", &qtd_linha, &qtd_coluna);
    if((qtd_linha+qtd_coluna)%2==0)
        printf("1");
    else
        printf("0");
    printf("\n");
    return 0;
}
