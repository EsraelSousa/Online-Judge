<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int qtd_bilhete, qtd_pessoas, id,  i, cont=0;
    int numeros[10000];
    do{
        scanf("%d %d", &qtd_bilhete, &qtd_pessoas);
        if(qtd_bilhete!=0 && qtd_pessoas!=0){
            memset(numeros, 0, sizeof(numeros));
            for(i=0;i<qtd_pessoas;i++){
                scanf("%d", &id);
                numeros[id-1]++;
            }
            for(i=0;i<qtd_bilhete;i++){
                if(numeros[i]>1)
                    cont++;
            }
            printf("%d\n", cont);
            cont=0;
        }
    }while(qtd_bilhete!=0 && qtd_pessoas!=0);
    return 0;
}
=======
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int qtd_bilhete, qtd_pessoas, id,  i, cont=0;
    int numeros[10000];
    do{
        scanf("%d %d", &qtd_bilhete, &qtd_pessoas);
        if(qtd_bilhete!=0 && qtd_pessoas!=0){
            memset(numeros, 0, sizeof(numeros));
            for(i=0;i<qtd_pessoas;i++){
                scanf("%d", &id);
                numeros[id-1]++;
            }
            for(i=0;i<qtd_bilhete;i++){
                if(numeros[i]>1)
                    cont++;
            }
            printf("%d\n", cont);
            cont=0;
        }
    }while(qtd_bilhete!=0 && qtd_pessoas!=0);
    return 0;
}
>>>>>>> refs/remotes/origin/master
