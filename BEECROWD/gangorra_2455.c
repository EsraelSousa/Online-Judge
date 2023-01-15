<<<<<<< HEAD
#include <stdio.h>

int main(){
    int peso1, peso2, crianca1, crianca2, valor1, valor2;
    scanf("%d %d %d %d", &peso1, &crianca1, &peso2, &crianca2);
    valor1=peso1*crianca1;
    valor2=peso2*crianca2;
    if(valor1 == valor2)
        printf("0");
    else if(valor1 < valor2)
        printf("1");
    else
        printf("-1");
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int peso1, peso2, crianca1, crianca2, valor1, valor2;
    scanf("%d %d %d %d", &peso1, &crianca1, &peso2, &crianca2);
    valor1=peso1*crianca1;
    valor2=peso2*crianca2;
    if(valor1 == valor2)
        printf("0");
    else if(valor1 < valor2)
        printf("1");
    else
        printf("-1");
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
