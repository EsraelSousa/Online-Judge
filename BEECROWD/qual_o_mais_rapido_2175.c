<<<<<<< HEAD
#include <stdio.h>

int main(){
    double Otavio, Bruno, Ian;
    scanf("%lf %lf %lf", &Otavio, &Bruno, &Ian);
    if((Bruno==Otavio) || (Bruno==Ian) || (Otavio==Ian))
        printf("Empate\n");
    else if(Otavio>Bruno && Otavio>Ian){
        if(Bruno>Ian)
            printf("Ian\n");
        else
            printf("Bruno\n");
    }
    else if(Bruno>Otavio && Bruno>Ian){
        if(Otavio>Ian)
            printf("Ian\n");
        else
            printf("Otavio\n");
    }else{
        if(Otavio>Bruno)
            printf("Bruno\n");
        else
            printf("Otavio\n");
    }
    return 0;
}

=======
#include <stdio.h>

int main(){
    double Otavio, Bruno, Ian;
    scanf("%lf %lf %lf", &Otavio, &Bruno, &Ian);
    if((Bruno==Otavio) || (Bruno==Ian) || (Otavio==Ian))
        printf("Empate\n");
    else if(Otavio>Bruno && Otavio>Ian){
        if(Bruno>Ian)
            printf("Ian\n");
        else
            printf("Bruno\n");
    }
    else if(Bruno>Otavio && Bruno>Ian){
        if(Otavio>Ian)
            printf("Ian\n");
        else
            printf("Otavio\n");
    }else{
        if(Otavio>Bruno)
            printf("Bruno\n");
        else
            printf("Otavio\n");
    }
    return 0;
}

>>>>>>> refs/remotes/origin/master
