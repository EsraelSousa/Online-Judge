<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, forca, i;
    char nome[10];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%s %d", nome, &forca);
        if(strcmp(nome, "Thor")==0 && forca>0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, forca, i;
    char nome[10];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%s %d", nome, &forca);
        if(strcmp(nome, "Thor")==0 && forca>0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
