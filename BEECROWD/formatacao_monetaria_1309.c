<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int tam, i;
    char dolares[11], centavos[3];
    while(scanf("%s %s", dolares, centavos) != EOF){
        tam=strlen(dolares);
        printf("$");
        if(tam%3==0){
            for(i=0;i<tam;i++){
                if(i%3==0 && i>0)
                    printf(",");
                printf("%c", dolares[i]);
            }
        }else{
            for(i=0;i<tam;i++){
                if(tam%3==1 && (i==1 || i==4 || i==7))
                    printf(",");
                if(tam%3==2 && (i==2 || i==5 || i==8))
                    printf(",");
                printf("%c", dolares[i]);
            }
        }
        printf(".");
        tam=strlen(centavos);
        if(tam==1)
            printf("0%s\n", centavos);
        else
            printf("%s\n", centavos);
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int tam, i;
    char dolares[11], centavos[3];
    while(scanf("%s %s", dolares, centavos) != EOF){
        tam=strlen(dolares);
        printf("$");
        if(tam%3==0){
            for(i=0;i<tam;i++){
                if(i%3==0 && i>0)
                    printf(",");
                printf("%c", dolares[i]);
            }
        }else{
            for(i=0;i<tam;i++){
                if(tam%3==1 && (i==1 || i==4 || i==7))
                    printf(",");
                if(tam%3==2 && (i==2 || i==5 || i==8))
                    printf(",");
                printf("%c", dolares[i]);
            }
        }
        printf(".");
        tam=strlen(centavos);
        if(tam==1)
            printf("0%s\n", centavos);
        else
            printf("%s\n", centavos);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
