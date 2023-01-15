<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_teste, i;
    long int anos_transcorrido;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%ld", &anos_transcorrido);
        if(anos_transcorrido==2014)
            printf("1 D.C.\n");
        else if(anos_transcorrido>2014)
            printf("%ld A.C.\n", anos_transcorrido-2014);
        else
            printf("%ld D.C.\n", 2015-anos_transcorrido);
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_teste, i;
    long int anos_transcorrido;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%ld", &anos_transcorrido);
        if(anos_transcorrido==2014)
            printf("1 D.C.\n");
        else if(anos_transcorrido>2014)
            printf("%ld A.C.\n", anos_transcorrido-2014);
        else
            printf("%ld D.C.\n", 2015-anos_transcorrido);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
