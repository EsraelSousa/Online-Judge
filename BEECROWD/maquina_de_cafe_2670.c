<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_andar1, qtd_andar2, qtd_andar3, tempo_andar1, tempo_andar2, tempo_andar3, tempo_minimo;
    scanf("%d %d %d", &qtd_andar1, &qtd_andar2, &qtd_andar3);
    tempo_andar1=2*qtd_andar2+4*qtd_andar3;
    tempo_andar2=2*qtd_andar1+2*qtd_andar3;
    tempo_andar3=2*qtd_andar2+4*qtd_andar1;
    tempo_minimo=tempo_andar1;
    if(tempo_andar2<tempo_minimo)
        tempo_minimo=tempo_andar2;
    if(tempo_andar3<tempo_minimo)
        tempo_minimo=tempo_andar3;
    printf("%d", tempo_minimo);
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_andar1, qtd_andar2, qtd_andar3, tempo_andar1, tempo_andar2, tempo_andar3, tempo_minimo;
    scanf("%d %d %d", &qtd_andar1, &qtd_andar2, &qtd_andar3);
    tempo_andar1=2*qtd_andar2+4*qtd_andar3;
    tempo_andar2=2*qtd_andar1+2*qtd_andar3;
    tempo_andar3=2*qtd_andar2+4*qtd_andar1;
    tempo_minimo=tempo_andar1;
    if(tempo_andar2<tempo_minimo)
        tempo_minimo=tempo_andar2;
    if(tempo_andar3<tempo_minimo)
        tempo_minimo=tempo_andar3;
    printf("%d", tempo_minimo);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
