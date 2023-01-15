<<<<<<< HEAD
#include <stdio.h>

int main(){
    int nota;
    scanf("%d", &nota);
    if(nota==0)
        printf("E");
    else if(nota>=1 && nota<=35)
        printf("D");
    else if(nota>35 && nota<=60)
        printf("C");
    else if(nota>60 && nota<=85)
        printf("B");
    else if(nota>85 && nota<=100)
        printf("A");
    else
        printf("Nota invalida");
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int nota;
    scanf("%d", &nota);
    if(nota==0)
        printf("E");
    else if(nota>=1 && nota<=35)
        printf("D");
    else if(nota>35 && nota<=60)
        printf("C");
    else if(nota>60 && nota<=85)
        printf("B");
    else if(nota>85 && nota<=100)
        printf("A");
    else
        printf("Nota invalida");
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
