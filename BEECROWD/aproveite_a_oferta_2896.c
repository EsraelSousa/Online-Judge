<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_caso, a, b, i;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d %d", &a, &b);
        if(a<b)
            printf("%d", a);
        else
            printf("%d", (a/b)*1+a%b);
        printf("\n");
    }
}
=======
#include <stdio.h>

int main(){
    int qtd_caso, a, b, i;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d %d", &a, &b);
        if(a<b)
            printf("%d", a);
        else
            printf("%d", (a/b)*1+a%b);
        printf("\n");
    }
}
>>>>>>> refs/remotes/origin/master
