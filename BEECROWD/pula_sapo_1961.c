<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    int altura_pulo, qtd_cano, i, corre=0;
    scanf("%d %d", &altura_pulo, &qtd_cano);
    int canos[qtd_cano];
    for(i=0;i<qtd_cano;i++){
        scanf("%d", &canos[i]);
        if(i>0){
            if(fabs(canos[i]-canos[i-1])>altura_pulo)
                corre=1;
        }
    }
    if(corre==0)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main(){
    int altura_pulo, qtd_cano, i, corre=0;
    scanf("%d %d", &altura_pulo, &qtd_cano);
    int canos[qtd_cano];
    for(i=0;i<qtd_cano;i++){
        scanf("%d", &canos[i]);
        if(i>0){
            if(fabs(canos[i]-canos[i-1])>altura_pulo)
                corre=1;
        }
    }
    if(corre==0)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
