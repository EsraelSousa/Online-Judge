<<<<<<< HEAD
#include <stdio.h>

int main(){
    int consumo, total=7;
    scanf("%d", &consumo);
    if(consumo<=10)
        printf("%d\n", total);
    else if(consumo <= 30){
        printf("%d\n", total+(consumo-10));
    }
    else if(consumo <= 100){
        total+=20+(consumo-30)*2;
        printf("%d\n", total);
    }
    else{
        total+=160+(consumo-100)*5;
        printf("%d\n", total);
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int consumo, total=7;
    scanf("%d", &consumo);
    if(consumo<=10)
        printf("%d\n", total);
    else if(consumo <= 30){
        printf("%d\n", total+(consumo-10));
    }
    else if(consumo <= 100){
        total+=20+(consumo-30)*2;
        printf("%d\n", total);
    }
    else{
        total+=160+(consumo-100)*5;
        printf("%d\n", total);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
