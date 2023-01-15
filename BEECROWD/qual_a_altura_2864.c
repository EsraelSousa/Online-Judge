<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, i;
    double a, b, c, res;
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%lf %lf %lf%*c", &a, &b, &c);
        res=(b*b)-4*a*c;
        printf("%.2lf\n", -1*res/(4*a));
    }
    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, i;
    double a, b, c, res;
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%lf %lf %lf%*c", &a, &b, &c);
        res=(b*b)-4*a*c;
        printf("%.2lf\n", -1*res/(4*a));
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
