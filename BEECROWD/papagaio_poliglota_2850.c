<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    char situacao[10];
    while(scanf("%[^\n]%*c", &situacao)!=EOF){
        if(strcmp(situacao, "nenhuma")==0)
            printf("portugues\n");
        else if(strcmp(situacao, "direita")==0)
            printf("frances\n");
        else if(strcmp(situacao, "esquerda")==0)
            printf("ingles\n");
        else if(strcmp(situacao, "as duas")==0)
            printf("caiu\n");
        else
            printf("ERRRO\n");
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    char situacao[10];
    while(scanf("%[^\n]%*c", &situacao)!=EOF){
        if(strcmp(situacao, "nenhuma")==0)
            printf("portugues\n");
        else if(strcmp(situacao, "direita")==0)
            printf("frances\n");
        else if(strcmp(situacao, "esquerda")==0)
            printf("ingles\n");
        else if(strcmp(situacao, "as duas")==0)
            printf("caiu\n");
        else
            printf("ERRRO\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
