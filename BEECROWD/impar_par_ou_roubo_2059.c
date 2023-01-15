#include <stdio.h>

int main(){
    int esc_jogador1, jogador1, jogador2, roubou, acusou_roubo;
    scanf("%d %d %d %d %d", &esc_jogador1, &jogador1, &jogador2, &roubou, &acusou_roubo);
    if(roubou==1 && acusou_roubo==0)
        printf("Jogador 1 ganha!");
    else if(esc_jogador1==1 && acusou_roubo==0 && roubou==0){
        if((jogador1+jogador2)%2==0)
            printf("Jogador 1 ganha!");
        else
            printf("Jogador 2 ganha!");
    }
    else if(esc_jogador1==0  && acusou_roubo==0 && roubou==0){
        if((jogador1+jogador2)%2==1)
            printf("Jogador 1 ganha!");
        else
            printf("Jogador 2 ganha!");
    }
    else if(acusou_roubo==1){
        if(roubou==0)
            printf("Jogador 1 ganha!");
        else
            printf("Jogador 2 ganha!");
    }
    printf("\n");
    return 0;
}
