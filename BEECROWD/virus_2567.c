<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int ordena(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int main(){
    int qtd_virus, i, letalidade;
    int idades_virus[1000];
    while(scanf("%d", &qtd_virus) !=  EOF){
        letalidade=0;
        for(i=0;i<qtd_virus;i++)
            scanf("%d", &idades_virus[i]);
        qsort(idades_virus,qtd_virus, sizeof(int), ordena);
        for(i=0;i<qtd_virus/2;i++)
            letalidade+=idades_virus[i]-idades_virus[qtd_virus-1-i];
        printf("%d\n", letalidade);
    }
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

int ordena(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int main(){
    int qtd_virus, i, letalidade;
    int idades_virus[1000];
    while(scanf("%d", &qtd_virus) !=  EOF){
        letalidade=0;
        for(i=0;i<qtd_virus;i++)
            scanf("%d", &idades_virus[i]);
        qsort(idades_virus,qtd_virus, sizeof(int), ordena);
        for(i=0;i<qtd_virus/2;i++)
            letalidade+=idades_virus[i]-idades_virus[qtd_virus-1-i];
        printf("%d\n", letalidade);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
