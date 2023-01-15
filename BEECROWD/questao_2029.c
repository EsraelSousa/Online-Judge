<<<<<<< HEAD
#include <stdio.h>

int main(){
    double volume_cm, diametro, altura_recipiente, area_recipiente;
    while(scanf("%lf %lf", &volume_cm, &diametro)!=EOF){
        altura_recipiente=volume_cm/(3.14*(diametro/2)*(diametro/2));
        area_recipiente= 3.14*((diametro*diametro)/4) ;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n", altura_recipiente, area_recipiente);
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    double volume_cm, diametro, altura_recipiente, area_recipiente;
    while(scanf("%lf %lf", &volume_cm, &diametro)!=EOF){
        altura_recipiente=volume_cm/(3.14*(diametro/2)*(diametro/2));
        area_recipiente= 3.14*((diametro*diametro)/4) ;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n", altura_recipiente, area_recipiente);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
