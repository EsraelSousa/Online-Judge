<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_teste, num_pessoas, i;
    do{
        scanf("%d", &qtd_teste);
        for(i=0;i<qtd_teste;i++){
            scanf("%d", &num_pessoas);
            if(num_pessoas%2!=0)
                printf("%d\n", 2*num_pessoas-1);
            else
                printf("%d\n", 2*(num_pessoas-1));
        }
    }while(qtd_teste!=0);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_teste, num_pessoas, i;
    do{
        scanf("%d", &qtd_teste);
        for(i=0;i<qtd_teste;i++){
            scanf("%d", &num_pessoas);
            if(num_pessoas%2!=0)
                printf("%d\n", 2*num_pessoas-1);
            else
                printf("%d\n", 2*(num_pessoas-1));
        }
    }while(qtd_teste!=0);
    return 0;
}
>>>>>>> refs/remotes/origin/master
