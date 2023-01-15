<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int qtd_letra, i, j, num, tam;
    while(scanf("%d", &qtd_letra) != EOF){
        char frase[qtd_letra][9];
        for(i=0;i<qtd_letra;i++)
            scanf("%s", frase[i]);
        for(i=0;i<qtd_letra;i++){
            num=0;
            tam=strlen(frase[i]);
            for(j=0;j<tam;j++)
                num+=(frase[i][j]-48)*pow(2, tam-1-j);
            printf("%c", num);
        }
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int qtd_letra, i, j, num, tam;
    while(scanf("%d", &qtd_letra) != EOF){
        char frase[qtd_letra][9];
        for(i=0;i<qtd_letra;i++)
            scanf("%s", frase[i]);
        for(i=0;i<qtd_letra;i++){
            num=0;
            tam=strlen(frase[i]);
            for(j=0;j<tam;j++)
                num+=(frase[i][j]-48)*pow(2, tam-1-j);
            printf("%c", num);
        }
        printf("\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
