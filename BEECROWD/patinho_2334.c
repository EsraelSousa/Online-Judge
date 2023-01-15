<<<<<<< HEAD
#include <stdio.h>

int main(){
    unsigned long long int qtd_patinhos;
    do{
        scanf("%llu", &qtd_patinhos);
        if(qtd_patinhos!=-1)
            if(qtd_patinhos==0)
                printf("0\n");
            else
                printf("%llu\n", qtd_patinhos-1);
    }while(qtd_patinhos!=-1);
}
=======
#include <stdio.h>

int main(){
    unsigned long long int qtd_patinhos;
    do{
        scanf("%llu", &qtd_patinhos);
        if(qtd_patinhos!=-1)
            if(qtd_patinhos==0)
                printf("0\n");
            else
                printf("%llu\n", qtd_patinhos-1);
    }while(qtd_patinhos!=-1);
}
>>>>>>> refs/remotes/origin/master
