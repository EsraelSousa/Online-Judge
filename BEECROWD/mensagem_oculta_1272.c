<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    char frase[55];
    int qtd_teste, i, j;
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%[^\n]%*c", frase);
        //printf(">> %s\n", frase);
        if(frase[0]!=' ')
            printf("%c", frase[0]);
        for(j=1;j<strlen(frase);j++){
            if(frase[j]!=' ' && frase[j-1]==' ')
                printf("%c", frase[j]);
        }
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    char frase[55];
    int qtd_teste, i, j;
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%[^\n]%*c", frase);
        //printf(">> %s\n", frase);
        if(frase[0]!=' ')
            printf("%c", frase[0]);
        for(j=1;j<strlen(frase);j++){
            if(frase[j]!=' ' && frase[j-1]==' ')
                printf("%c", frase[j]);
        }
        printf("\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
