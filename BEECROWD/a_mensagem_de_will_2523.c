#include <stdio.h>

int main(){
    char alfabeto[27];
    int qtd_letra, num_letra,i;
    while(scanf("%s", alfabeto) != EOF){
        scanf("%d", &qtd_letra);
        char mensagem_will[qtd_letra+1];
        for(i=0;i<=qtd_letra;i++)
            mensagem_will[i]='\0';
        for(i=0;i<qtd_letra;i++){
            scanf("%d", &num_letra);
            mensagem_will[i]=alfabeto[num_letra-1];
        }
        printf("%s", mensagem_will);
        printf("\n");
    }
    return 0;
}