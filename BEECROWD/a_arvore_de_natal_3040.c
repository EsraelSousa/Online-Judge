<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_teste, altura, especura, qtd_galhos, i;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d %d %d", &altura, &especura, &qtd_galhos);
        if(altura>=200 && altura<=300 && especura>=50 && qtd_galhos>=150)
            printf("Sim\n");
        else
            printf("Nao\n");
    }
}
=======
#include <stdio.h>

int main(){
    int qtd_teste, altura, especura, qtd_galhos, i;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d %d %d", &altura, &especura, &qtd_galhos);
        if(altura>=200 && altura<=300 && especura>=50 && qtd_galhos>=150)
            printf("Sim\n");
        else
            printf("Nao\n");
    }
}
>>>>>>> refs/remotes/origin/master
