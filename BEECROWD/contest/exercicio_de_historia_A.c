#include <stdio.h>

int main(){
    int ano, i, cont=0;
    while(scanf("%d", &ano) != EOF){
        for(i=1;i<=ano;i+=100)
            cont++;
        printf("%d\n", cont);
        cont=0;
    }
    return 0;
}
