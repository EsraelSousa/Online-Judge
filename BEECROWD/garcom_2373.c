<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_caso, qtd_lata, qtd_copo, qtd_copo_quebrado=0, i;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d %d", &qtd_lata, &qtd_copo);
        if(qtd_lata > qtd_copo)
            qtd_copo_quebrado+=qtd_copo;
    }
    printf("%d", qtd_copo_quebrado);
    printf("\n");
    return 0;

}
=======
#include <stdio.h>

int main(){
    int qtd_caso, qtd_lata, qtd_copo, qtd_copo_quebrado=0, i;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d %d", &qtd_lata, &qtd_copo);
        if(qtd_lata > qtd_copo)
            qtd_copo_quebrado+=qtd_copo;
    }
    printf("%d", qtd_copo_quebrado);
    printf("\n");
    return 0;

}
>>>>>>> refs/remotes/origin/master
