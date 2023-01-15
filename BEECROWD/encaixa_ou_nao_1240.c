<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_caso, i, n, k, ver;
    char num1[33], num2[33], substring[33];
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%s %s", &num1, &num2);
        if(strlen(num2) > strlen(num1))
            printf("nao encaixa\n");
        else{
            n=strlen(num1);
            k=strlen(num2);
            for(;k>=0;n--, k--){
               if(num1[n]==num2[k])
                   ver=0;
               else{
                   ver=1;
                   break;
               }
            }
            if(ver==0)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
    }
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_caso, i, n, k, ver;
    char num1[33], num2[33], substring[33];
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%s %s", &num1, &num2);
        if(strlen(num2) > strlen(num1))
            printf("nao encaixa\n");
        else{
            n=strlen(num1);
            k=strlen(num2);
            for(;k>=0;n--, k--){
               if(num1[n]==num2[k])
                   ver=0;
               else{
                   ver=1;
                   break;
               }
            }
            if(ver==0)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
    }
}
>>>>>>> refs/remotes/origin/master
