<<<<<<< HEAD
#include <stdio.h>

int main(){
    int hora, minuto;
    while(scanf("%d %*c %d", &hora, &minuto)!=EOF){
        if(hora<7)
            printf("Atraso maximo: 0\n");
        else{
            printf("Atraso maximo: %d\n",(hora-7)*60+minuto);
        }
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int hora, minuto;
    while(scanf("%d %*c %d", &hora, &minuto)!=EOF){
        if(hora<7)
            printf("Atraso maximo: 0\n");
        else{
            printf("Atraso maximo: %d\n",(hora-7)*60+minuto);
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
