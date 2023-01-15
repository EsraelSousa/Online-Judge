<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int fatorial[5], tam, n, valor_decimal=0, i;
    char valor_acm[7];
    for(i=0;i<5;i++){
        if(i==0)
            fatorial[0]=1;
        else
            fatorial[i]=(i+1)*fatorial[i-1];
    }
    do{
        scanf("%s", &valor_acm);
        if(valor_acm[0] != '0'){
            tam=strlen(valor_acm);
            i=1;
            while(i <= tam){
                n=valor_acm[i-1]-'0';
                valor_decimal+= n*fatorial[tam-i];
                i++;
            }
            printf("%d\n", valor_decimal);
            valor_decimal=0;
        }
    }while(valor_acm[0] != '0');
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int fatorial[5], tam, n, valor_decimal=0, i;
    char valor_acm[7];
    for(i=0;i<5;i++){
        if(i==0)
            fatorial[0]=1;
        else
            fatorial[i]=(i+1)*fatorial[i-1];
    }
    do{
        scanf("%s", &valor_acm);
        if(valor_acm[0] != '0'){
            tam=strlen(valor_acm);
            i=1;
            while(i <= tam){
                n=valor_acm[i-1]-'0';
                valor_decimal+= n*fatorial[tam-i];
                i++;
            }
            printf("%d\n", valor_decimal);
            valor_decimal=0;
        }
    }while(valor_acm[0] != '0');
    return 0;
}
>>>>>>> refs/remotes/origin/master
