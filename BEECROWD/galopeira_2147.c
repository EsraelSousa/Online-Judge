<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, i;
    char palavra[10003];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%s", &palavra);
        printf("%.2lf\n", strlen(palavra)*0.01);
    }
    return 0;
}

=======
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, i;
    char palavra[10003];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%s", &palavra);
        printf("%.2lf\n", strlen(palavra)*0.01);
    }
    return 0;
}

>>>>>>> refs/remotes/origin/master
