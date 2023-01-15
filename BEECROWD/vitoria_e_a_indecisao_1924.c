<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_casos, i;
    char curso_quer_fazer[100];
    char curso_deve_fazer[]="Ciencia da Computacao";
    scanf("%d%*c", &qtd_casos);
    for(i=0;i<qtd_casos;i++){
        scanf("%[^\n]%*c", curso_quer_fazer);
    }
    printf("%s", curso_deve_fazer);
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_casos, i;
    char curso_quer_fazer[100];
    char curso_deve_fazer[]="Ciencia da Computacao";
    scanf("%d%*c", &qtd_casos);
    for(i=0;i<qtd_casos;i++){
        scanf("%[^\n]%*c", curso_quer_fazer);
    }
    printf("%s", curso_deve_fazer);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
