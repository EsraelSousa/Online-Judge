<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_peca_roupa, lim_min_Lavadora, lim_max_Lavadora, lim_min_Secadora, lim_max_Secadora;
    scanf("%d %d %d %d %d", &qtd_peca_roupa, &lim_min_Lavadora, &lim_max_Lavadora, &lim_min_Secadora, &lim_max_Secadora);
    if(qtd_peca_roupa>=lim_min_Lavadora && qtd_peca_roupa<=lim_max_Lavadora && qtd_peca_roupa>=lim_min_Secadora && qtd_peca_roupa<=lim_max_Secadora)
        printf("possivel");
    else
        printf("impossivel");
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_peca_roupa, lim_min_Lavadora, lim_max_Lavadora, lim_min_Secadora, lim_max_Secadora;
    scanf("%d %d %d %d %d", &qtd_peca_roupa, &lim_min_Lavadora, &lim_max_Lavadora, &lim_min_Secadora, &lim_max_Secadora);
    if(qtd_peca_roupa>=lim_min_Lavadora && qtd_peca_roupa<=lim_max_Lavadora && qtd_peca_roupa>=lim_min_Secadora && qtd_peca_roupa<=lim_max_Secadora)
        printf("possivel");
    else
        printf("impossivel");
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
