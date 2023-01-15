#include <stdio.h>
#include <string.h>

int main(){
    char frase[10000];
    int i, tam;
    while(scanf("%[^\n]%*c", frase) != EOF){
        tam=strlen(frase);
        for(i=0;i<tam;i++){
            if((frase[i]==' ' && frase[i+1]==',') || (frase[i]==' ' && frase[i+1]=='.'))
                continue;
            else
                printf("%c", frase[i]);
        }
        printf("\n");
    }
    return 0;
}
