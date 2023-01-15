<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_instancia, bonus, ataque1, ataque2, defesa1, defesa2, level1, level2, i;
    double j1=0, j2=0;
    scanf("%d", &qtd_instancia);
    for(i=0;i<qtd_instancia;i++){
        scanf("%d %d %d %d %d %d %d", &bonus, &ataque1, &defesa1, &level1, &ataque2, &defesa2, &level2);
        if(level1%2==0)
            j1=bonus;
        if(level2%2==0)
            j2=bonus;
        j1+=1.00*(ataque1+defesa1)/2;
        j2+=1.00*(ataque2+defesa2)/2;
        if(j1 == j2)
            printf("Empate\n");
        else if(j1 > j2)
            printf("Dabriel\n");
        else
            printf("Guarte\n");
        j1=0;
        j2=0;
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_instancia, bonus, ataque1, ataque2, defesa1, defesa2, level1, level2, i;
    double j1=0, j2=0;
    scanf("%d", &qtd_instancia);
    for(i=0;i<qtd_instancia;i++){
        scanf("%d %d %d %d %d %d %d", &bonus, &ataque1, &defesa1, &level1, &ataque2, &defesa2, &level2);
        if(level1%2==0)
            j1=bonus;
        if(level2%2==0)
            j2=bonus;
        j1+=1.00*(ataque1+defesa1)/2;
        j2+=1.00*(ataque2+defesa2)/2;
        if(j1 == j2)
            printf("Empate\n");
        else if(j1 > j2)
            printf("Dabriel\n");
        else
            printf("Guarte\n");
        j1=0;
        j2=0;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
