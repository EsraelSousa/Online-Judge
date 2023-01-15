<<<<<<< HEAD
#include <stdio.h>

int main(){
    int soma_bolas_neve=0, qtd_bola, i;
    for(i=0;i<9;i++){
        scanf("%d", &qtd_bola);
        soma_bolas_neve+=qtd_bola;
    }
    if(soma_bolas_neve%9==1)
        printf("Dasher\n");
    else if(soma_bolas_neve%9==2)
        printf("Dancer\n");
    else if(soma_bolas_neve%9==3)
        printf("Prancer\n");
    else if(soma_bolas_neve%9==4)
        printf("Vixen\n");
    else if(soma_bolas_neve%9==5)
        printf("Comet\n");
    else if(soma_bolas_neve%9==6)
        printf("Cupid\n");
    else if(soma_bolas_neve%9==7)
        printf("Donner\n");
    else if(soma_bolas_neve%9==8)
        printf("Blitzen\n");
    else if(soma_bolas_neve%9==0)
        printf("Rudolph\n");

    return 0;
}
=======
#include <stdio.h>

int main(){
    int soma_bolas_neve=0, qtd_bola, i;
    for(i=0;i<9;i++){
        scanf("%d", &qtd_bola);
        soma_bolas_neve+=qtd_bola;
    }
    if(soma_bolas_neve%9==1)
        printf("Dasher\n");
    else if(soma_bolas_neve%9==2)
        printf("Dancer\n");
    else if(soma_bolas_neve%9==3)
        printf("Prancer\n");
    else if(soma_bolas_neve%9==4)
        printf("Vixen\n");
    else if(soma_bolas_neve%9==5)
        printf("Comet\n");
    else if(soma_bolas_neve%9==6)
        printf("Cupid\n");
    else if(soma_bolas_neve%9==7)
        printf("Donner\n");
    else if(soma_bolas_neve%9==8)
        printf("Blitzen\n");
    else if(soma_bolas_neve%9==0)
        printf("Rudolph\n");

    return 0;
}
>>>>>>> refs/remotes/origin/master
