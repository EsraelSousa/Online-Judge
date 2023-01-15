<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_disponivel_frango, qtd_disponivel_bife, qtd_disponivel_massa, qtd_pedido_frango, qtd_pedido_bife, qtd_pedido_massa, qtd_sem_pedido;
    scanf("%d %d %d %d %d %d", &qtd_disponivel_frango, &qtd_disponivel_bife, &qtd_disponivel_massa, &qtd_pedido_frango, &qtd_pedido_bife, &qtd_pedido_massa);
    if(qtd_pedido_frango>qtd_disponivel_frango)
        qtd_sem_pedido=(qtd_pedido_frango-qtd_disponivel_frango);
    if(qtd_pedido_bife > qtd_disponivel_bife)
        qtd_sem_pedido+=qtd_pedido_bife-qtd_disponivel_bife;
    if(qtd_pedido_massa>qtd_disponivel_massa)
        qtd_sem_pedido+=qtd_pedido_massa-qtd_disponivel_massa;
    printf("%d", qtd_sem_pedido);
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_disponivel_frango, qtd_disponivel_bife, qtd_disponivel_massa, qtd_pedido_frango, qtd_pedido_bife, qtd_pedido_massa, qtd_sem_pedido;
    scanf("%d %d %d %d %d %d", &qtd_disponivel_frango, &qtd_disponivel_bife, &qtd_disponivel_massa, &qtd_pedido_frango, &qtd_pedido_bife, &qtd_pedido_massa);
    if(qtd_pedido_frango>qtd_disponivel_frango)
        qtd_sem_pedido=(qtd_pedido_frango-qtd_disponivel_frango);
    if(qtd_pedido_bife > qtd_disponivel_bife)
        qtd_sem_pedido+=qtd_pedido_bife-qtd_disponivel_bife;
    if(qtd_pedido_massa>qtd_disponivel_massa)
        qtd_sem_pedido+=qtd_pedido_massa-qtd_disponivel_massa;
    printf("%d", qtd_sem_pedido);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
