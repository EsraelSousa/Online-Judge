#include <iostream>
#include <cstdio>

int main(){
    int ano, i, cont=0;
    while(scanf("%d", &ano) == 1){
        for(i=1;i<=ano;i+=100)
            cont++;
        printf("%d\n", cont);
        cont=0;
    }
    return 0;
}
