<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int ordena(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
    int qtd_num, cont=1, atual, i;
    scanf("%d", &qtd_num);
    int numeros[qtd_num];
    for(i=0;i<qtd_num;i++)
        scanf("%d", &numeros[i]);
    qsort(numeros, qtd_num, sizeof(int), ordena);
    for(i=0;i<qtd_num;i++){
        if(i==0)
            atual=numeros[0];
        else if(atual==numeros[i])
            cont++;
        else{
            printf("%d aparece %d vez(es)\n", atual, cont);
            cont=1, atual=numeros[i];
        }
    }
    printf("%d aparece %d vez(es)\n", atual, cont);
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

int ordena(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
    int qtd_num, cont=1, atual, i;
    scanf("%d", &qtd_num);
    int numeros[qtd_num];
    for(i=0;i<qtd_num;i++)
        scanf("%d", &numeros[i]);
    qsort(numeros, qtd_num, sizeof(int), ordena);
    for(i=0;i<qtd_num;i++){
        if(i==0)
            atual=numeros[0];
        else if(atual==numeros[i])
            cont++;
        else{
            printf("%d aparece %d vez(es)\n", atual, cont);
            cont=1, atual=numeros[i];
        }
    }
    printf("%d aparece %d vez(es)\n", atual, cont);
    return 0;
}
>>>>>>> refs/remotes/origin/master
