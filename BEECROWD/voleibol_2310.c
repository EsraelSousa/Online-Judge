<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_teste, s1, s2, b1, b2, a1, a2, i;
    double total_saque=0, total_bloqueio=0, total_ataque=0, qtd_saque_bom=0, qtd_bloqueio_bom=0, qtd_ataque_bom=0;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%*s %d %d %d %d %d %d", &s1, &b1, &a1, &s2, &b2, &a2);
        total_saque+=s1;
        total_bloqueio+=b1;
        total_ataque+=a1;
        qtd_saque_bom+=s2;
        qtd_bloqueio_bom+=b2;
        qtd_ataque_bom+=a2;
    }
    printf("Pontos de Saque: %.2lf %%.\n", 100*qtd_saque_bom/total_saque);
    printf("Pontos de Bloqueio: %.2lf %%.\n", 100*qtd_bloqueio_bom/total_bloqueio);
    printf("Pontos de Ataque: %.2lf %%.\n", 100*qtd_ataque_bom/total_ataque);
    return 0;
}

=======
#include <stdio.h>

int main(){
    int qtd_teste, s1, s2, b1, b2, a1, a2, i;
    double total_saque=0, total_bloqueio=0, total_ataque=0, qtd_saque_bom=0, qtd_bloqueio_bom=0, qtd_ataque_bom=0;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%*s %d %d %d %d %d %d", &s1, &b1, &a1, &s2, &b2, &a2);
        total_saque+=s1;
        total_bloqueio+=b1;
        total_ataque+=a1;
        qtd_saque_bom+=s2;
        qtd_bloqueio_bom+=b2;
        qtd_ataque_bom+=a2;
    }
    printf("Pontos de Saque: %.2lf %%.\n", 100*qtd_saque_bom/total_saque);
    printf("Pontos de Bloqueio: %.2lf %%.\n", 100*qtd_bloqueio_bom/total_bloqueio);
    printf("Pontos de Ataque: %.2lf %%.\n", 100*qtd_ataque_bom/total_ataque);
    return 0;
}

>>>>>>> refs/remotes/origin/master
