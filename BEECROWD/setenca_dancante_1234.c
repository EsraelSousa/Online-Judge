<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char frase[10000];
    if(frase==NULL)
        exit(0);
    int tam, num, i, nivel;
    while(scanf("%[^\n]%*c", frase) != EOF){
        tam=strlen(frase);
        nivel=0;
        for(i=0;i<tam;i++){
            if(frase[i]==' ')
                printf(" ");
            else if(nivel==1){
              nivel=0;
              printf("%c", tolower(frase[i]));
          }
          else if(nivel==0){
              nivel=1;
              printf("%c", toupper(frase[i]));
          }
        }
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char frase[10000];
    if(frase==NULL)
        exit(0);
    int tam, num, i, nivel;
    while(scanf("%[^\n]%*c", frase) != EOF){
        tam=strlen(frase);
        nivel=0;
        for(i=0;i<tam;i++){
            if(frase[i]==' ')
                printf(" ");
            else if(nivel==1){
              nivel=0;
              printf("%c", tolower(frase[i]));
          }
          else if(nivel==0){
              nivel=1;
              printf("%c", toupper(frase[i]));
          }
        }
        printf("\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
