<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_caso, tempo_horas, distancia_km, i;
    long int total_km=0;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d %d", &tempo_horas, &distancia_km);
        total_km+=tempo_horas*distancia_km;
    }
    printf("%ld", total_km);
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_caso, tempo_horas, distancia_km, i;
    long int total_km=0;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d %d", &tempo_horas, &distancia_km);
        total_km+=tempo_horas*distancia_km;
    }
    printf("%ld", total_km);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
