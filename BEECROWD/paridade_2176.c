<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    char mensagem[102];
    int cont_1=0, i;
    scanf("%s", mensagem);
    for(i=0;i<strlen(mensagem);i++){
        if(mensagem[i]=='1')
            cont_1++;
    }
    if(cont_1%2==0)
        printf("%s0", mensagem);
    else
        printf("%s1", mensagem);
    printf("\n");
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    char mensagem[102];
    int cont_1=0, i;
    scanf("%s", mensagem);
    for(i=0;i<strlen(mensagem);i++){
        if(mensagem[i]=='1')
            cont_1++;
    }
    if(cont_1%2==0)
        printf("%s0", mensagem);
    else
        printf("%s1", mensagem);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
