<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_figu_album, qtd_carimbada, qtd_figu_falta, qtd_comprada, num_figu, i;
    scanf("%d %d %d", &qtd_figu_album, &qtd_carimbada, &qtd_comprada);
    int album[qtd_figu_album], carimabadas[qtd_carimbada], compradas[qtd_figu_album];
    qtd_figu_falta=qtd_carimbada;
    for(i=1;i<=qtd_figu_album;i++){
        album[i]=i;
        compradas[i]=0;
    }
    for(i=0;i<qtd_carimbada;i++){
        scanf("%d", &num_figu);
        carimabadas[i]=num_figu;
    }
    for(i=0;i<qtd_comprada;i++){
        scanf("%d", &num_figu);
        compradas[num_figu]++;
    }
    for(i=0;i<qtd_carimbada;i++){
        num_figu=carimabadas[i];
        if(compradas[num_figu]!=0)
            qtd_figu_falta--;
    }
    printf("%d", qtd_figu_falta);
    printf("\n");

    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_figu_album, qtd_carimbada, qtd_figu_falta, qtd_comprada, num_figu, i;
    scanf("%d %d %d", &qtd_figu_album, &qtd_carimbada, &qtd_comprada);
    int album[qtd_figu_album], carimabadas[qtd_carimbada], compradas[qtd_figu_album];
    qtd_figu_falta=qtd_carimbada;
    for(i=1;i<=qtd_figu_album;i++){
        album[i]=i;
        compradas[i]=0;
    }
    for(i=0;i<qtd_carimbada;i++){
        scanf("%d", &num_figu);
        carimabadas[i]=num_figu;
    }
    for(i=0;i<qtd_comprada;i++){
        scanf("%d", &num_figu);
        compradas[num_figu]++;
    }
    for(i=0;i<qtd_carimbada;i++){
        num_figu=carimabadas[i];
        if(compradas[num_figu]!=0)
            qtd_figu_falta--;
    }
    printf("%d", qtd_figu_falta);
    printf("\n");

    return 0;
}
>>>>>>> refs/remotes/origin/master
