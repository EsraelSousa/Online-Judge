#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, i;
    double x1, x2, x3, y1, y2, y3;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
        printf("%.3lf\n", fabs((x1*y2+y1*x3+x2*y3)-(y2*x3+x1*y3+y1*x2))/2);
    }
    return 0;
}
