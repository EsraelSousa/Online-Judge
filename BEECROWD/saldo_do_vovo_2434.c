<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_opera, saldo, mim, i, valor;
    scanf("%d %d", &qtd_opera, &saldo);
    mim=saldo;
    for(i=0;i<qtd_opera;i++){
        scanf("%d", &valor);
        saldo+=valor;
        if(saldo<mim)
            mim=saldo;
    }
    printf("%d\n", mim);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_opera, saldo, mim, i, valor;
    scanf("%d %d", &qtd_opera, &saldo);
    mim=saldo;
    for(i=0;i<qtd_opera;i++){
        scanf("%d", &valor);
        saldo+=valor;
        if(saldo<mim)
            mim=saldo;
    }
    printf("%d\n", mim);
    return 0;
}
>>>>>>> refs/remotes/origin/master
