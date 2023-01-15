<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, x, y, i;
    double rafael, beto, carlos;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d %d", &x, &y);
        rafael=pow((3*x), 2)+pow(y, 2);
        beto=2*pow(x, 2)+pow((5*y), 2);
        carlos=-100*x+pow(y, 3);
        if(rafael > carlos && rafael > beto)
            printf("Rafael ganhou\n");
        else if(beto >rafael && beto > carlos)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }
    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, x, y, i;
    double rafael, beto, carlos;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d %d", &x, &y);
        rafael=pow((3*x), 2)+pow(y, 2);
        beto=2*pow(x, 2)+pow((5*y), 2);
        carlos=-100*x+pow(y, 3);
        if(rafael > carlos && rafael > beto)
            printf("Rafael ganhou\n");
        else if(beto >rafael && beto > carlos)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
