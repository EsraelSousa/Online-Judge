<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_lesma_grupo, velocidade_lesma, velocidade_max=0, i;
    while(scanf("%d", &qtd_lesma_grupo)!=EOF){
        for(i=0;i<qtd_lesma_grupo;i++){
            scanf("%d", &velocidade_lesma);
            if(velocidade_lesma > velocidade_max)
            velocidade_max=velocidade_lesma;
        }
        if(velocidade_max < 10)
            printf("1");
        else if(velocidade_max >= 10 && velocidade_max < 20)
            printf("2");
        else
            printf("3");
        velocidade_max=0;
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_lesma_grupo, velocidade_lesma, velocidade_max=0, i;
    while(scanf("%d", &qtd_lesma_grupo)!=EOF){
        for(i=0;i<qtd_lesma_grupo;i++){
            scanf("%d", &velocidade_lesma);
            if(velocidade_lesma > velocidade_max)
            velocidade_max=velocidade_lesma;
        }
        if(velocidade_max < 10)
            printf("1");
        else if(velocidade_max >= 10 && velocidade_max < 20)
            printf("2");
        else
            printf("3");
        velocidade_max=0;
        printf("\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
