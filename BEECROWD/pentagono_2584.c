<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, i;
    double compr, aux;
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%lf", &compr);
        aux=tan(54*3.1415926535897932/180.0)*(compr/2);
        printf("%.3lf\n", 10*(aux*(compr/2)/2));
    }
    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, i;
    double compr, aux;
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%lf", &compr);
        aux=tan(54*3.1415926535897932/180.0)*(compr/2);
        printf("%.3lf\n", 10*(aux*(compr/2)/2));
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
