<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, i;
    double qtd_alimento;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%lf", &qtd_alimento);
        printf("%d dias\n", (int)ceil(log2(qtd_alimento)));
    }
    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, i;
    double qtd_alimento;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%lf", &qtd_alimento);
        printf("%d dias\n", (int)ceil(log2(qtd_alimento)));
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
