<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    char frase[500];
    int i, cont=0;
    scanf("%[^\n]%*c", &frase);
    for(i=0;i<strlen(frase);i++){
        if(frase[i]==',' && cont==0){
            printf("\n");
            cont++;
        }else
            printf("%c", frase[i]);
    }
    printf("\n");
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    char frase[500];
    int i, cont=0;
    scanf("%[^\n]%*c", &frase);
    for(i=0;i<strlen(frase);i++){
        if(frase[i]==',' && cont==0){
            printf("\n");
            cont++;
        }else
            printf("%c", frase[i]);
    }
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
