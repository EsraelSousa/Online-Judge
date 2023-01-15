<<<<<<< HEAD
#include <cstdio>

int main(){
    int farinha, ovo, leite, qtd_min=1000000;
    scanf("%d %d %d", &farinha, &ovo, &leite);
    if(farinha/2 < qtd_min)
        qtd_min=farinha/2;
    if(ovo/3 < qtd_min)
        qtd_min=ovo/3;
    if(leite/5 < qtd_min)
        qtd_min=leite/5;
    printf("%d\n", qtd_min);
    return 0;
}
=======
#include <cstdio>

int main(){
    int farinha, ovo, leite, qtd_min=1000000;
    scanf("%d %d %d", &farinha, &ovo, &leite);
    if(farinha/2 < qtd_min)
        qtd_min=farinha/2;
    if(ovo/3 < qtd_min)
        qtd_min=ovo/3;
    if(leite/5 < qtd_min)
        qtd_min=leite/5;
    printf("%d\n", qtd_min);
    return 0;
}
>>>>>>> refs/remotes/origin/master
