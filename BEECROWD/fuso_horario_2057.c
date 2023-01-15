<<<<<<< HEAD
#include <stdio.h>

int main(){
    int hora_saida, tempo_viagem, fuso_horario, hora_chegada;
    scanf("%d %d %d", &hora_saida, &tempo_viagem, &fuso_horario);
    hora_chegada=hora_saida+tempo_viagem+fuso_horario;
    if(hora_chegada>24)
        hora_chegada=hora_chegada-24;
    if(hora_chegada<0)
        hora_chegada=24+hora_chegada;
    if(hora_chegada== 24)
        printf("0");
    else
        printf("%d", hora_chegada);
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int hora_saida, tempo_viagem, fuso_horario, hora_chegada;
    scanf("%d %d %d", &hora_saida, &tempo_viagem, &fuso_horario);
    hora_chegada=hora_saida+tempo_viagem+fuso_horario;
    if(hora_chegada>24)
        hora_chegada=hora_chegada-24;
    if(hora_chegada<0)
        hora_chegada=24+hora_chegada;
    if(hora_chegada== 24)
        printf("0");
    else
        printf("%d", hora_chegada);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
