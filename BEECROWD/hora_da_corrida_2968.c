<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_volta, qtd_placa, i;
    long double resultado;
    scanf("%d %d", &qtd_volta, &qtd_placa);
    for(i=1;i<=9;i++){
        resultado=(qtd_volta*qtd_placa*i)/10.00;
        if(i==9)
            printf("%ld", (int)ceil(resultado));
        else
            printf("%ld ", (int)ceil(resultado));
    }
    printf("\n");
    return 0;
}

=======
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_volta, qtd_placa, i;
    long double resultado;
    scanf("%d %d", &qtd_volta, &qtd_placa);
    for(i=1;i<=9;i++){
        resultado=(qtd_volta*qtd_placa*i)/10.00;
        if(i==9)
            printf("%ld", (int)ceil(resultado));
        else
            printf("%ld ", (int)ceil(resultado));
    }
    printf("\n");
    return 0;
}

>>>>>>> refs/remotes/origin/master
