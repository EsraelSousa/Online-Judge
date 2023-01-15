<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_caso, hora, minuto, acao, i;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d %d %d", &hora, &minuto, &acao);
        printf("%02d:%02d - ", hora, minuto);
        if(acao==1)
            printf("A porta abriu!\n");
        else
            printf("A porta fechou!\n");
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_caso, hora, minuto, acao, i;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d %d %d", &hora, &minuto, &acao);
        printf("%02d:%02d - ", hora, minuto);
        if(acao==1)
            printf("A porta abriu!\n");
        else
            printf("A porta fechou!\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
