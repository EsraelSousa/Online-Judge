<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_pessoas, voto, cont_contra=0, i;
    while(scanf("%d", &qtd_pessoas)!=EOF){
        for(i=0;i<qtd_pessoas;i++){
            scanf("%d", &voto);
            if(voto==1)
                cont_contra++;
        }
        if(cont_contra*1.00 >= (2.00*qtd_pessoas)/3)
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
        cont_contra=0;
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_pessoas, voto, cont_contra=0, i;
    while(scanf("%d", &qtd_pessoas)!=EOF){
        for(i=0;i<qtd_pessoas;i++){
            scanf("%d", &voto);
            if(voto==1)
                cont_contra++;
        }
        if(cont_contra*1.00 >= (2.00*qtd_pessoas)/3)
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
        cont_contra=0;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
