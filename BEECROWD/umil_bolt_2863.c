<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_baterias, i;
    double menor_tempo=12, valor_do_tempo;
    while(scanf("%d", &qtd_baterias)!= EOF){
        for(i=0;i<qtd_baterias;i++){
            scanf("%lf", &valor_do_tempo);
            if(valor_do_tempo < menor_tempo)
                menor_tempo=valor_do_tempo;
        }
        printf("%.2lf\n", menor_tempo);
        menor_tempo=12;
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_baterias, i;
    double menor_tempo=12, valor_do_tempo;
    while(scanf("%d", &qtd_baterias)!= EOF){
        for(i=0;i<qtd_baterias;i++){
            scanf("%lf", &valor_do_tempo);
            if(valor_do_tempo < menor_tempo)
                menor_tempo=valor_do_tempo;
        }
        printf("%.2lf\n", menor_tempo);
        menor_tempo=12;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
