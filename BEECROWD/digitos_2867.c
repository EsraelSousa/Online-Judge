<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    // fazer n elevado a m e contar quantos digitos tem o resultado
    int qtd_caso, n, m, i;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d %d", &n, &m);
        printf("%.0lf", m*log10(n)+1);
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main(){
    // fazer n elevado a m e contar quantos digitos tem o resultado
    int qtd_caso, n, m, i;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d %d", &n, &m);
        printf("%.0lf", m*log10(n)+1);
        printf("\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
