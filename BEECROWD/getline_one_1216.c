<<<<<<< HEAD
#include <stdio.h>

int main(){
    long int soma=0, cont=0, dist;
    char nome[500];
    while(scanf("%[^\n]%*c", nome) != EOF){
        scanf("%d%*c", &dist);
        soma+=dist, cont++;
    }
    printf("%.1lf\n", (double)soma/cont);
    return 0;
}
=======
#include <stdio.h>

int main(){
    long int soma=0, cont=0, dist;
    char nome[500];
    while(scanf("%[^\n]%*c", nome) != EOF){
        scanf("%d%*c", &dist);
        soma+=dist, cont++;
    }
    printf("%.1lf\n", (double)soma/cont);
    return 0;
}
>>>>>>> refs/remotes/origin/master
