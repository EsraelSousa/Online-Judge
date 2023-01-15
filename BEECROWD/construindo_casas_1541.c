<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    int largura=1, comprimento, porcentagem_permitida;
    while(largura!=0){
        scanf("%d", &largura);
        if(largura!=0){
            scanf("%d %d", &comprimento, &porcentagem_permitida);
            printf("%d\n", (int)sqrt((100.00*largura*comprimento)/porcentagem_permitida));
        }
    }
    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main(){
    int largura=1, comprimento, porcentagem_permitida;
    while(largura!=0){
        scanf("%d", &largura);
        if(largura!=0){
            scanf("%d %d", &comprimento, &porcentagem_permitida);
            printf("%d\n", (int)sqrt((100.00*largura*comprimento)/porcentagem_permitida));
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
