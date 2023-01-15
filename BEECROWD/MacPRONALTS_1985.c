<<<<<<< HEAD
/*
1001 | R$ 1.50

1002 | R$ 2.50

1003 | R$ 3.50

1004 | R$ 4.50

1005 | R$ 5.50
*/
#include <stdio.h>

int main(){
    double total_compra=0;
    int qtd_comrado, produto, quantidade, i;
    scanf("%d", &qtd_comrado);
    for(i=0;i<qtd_comrado;i++){
        scanf("%d %d", &produto, &quantidade);
        if(produto==1001)
            total_compra=total_compra+quantidade*1.50;
        else if(produto==1002)
            total_compra=total_compra+quantidade*2.50;
        else if(produto==1003)
            total_compra=total_compra+quantidade*3.50;
        else if(produto==1004)
            total_compra=total_compra+quantidade*4.50;
        else if(produto==1005)
            total_compra=total_compra+quantidade*5.50;
    }
    printf("%.2lf", total_compra);
    printf("\n");
    return 0;
}
=======
/*
1001 | R$ 1.50

1002 | R$ 2.50

1003 | R$ 3.50

1004 | R$ 4.50

1005 | R$ 5.50
*/
#include <stdio.h>

int main(){
    double total_compra=0;
    int qtd_comrado, produto, quantidade, i;
    scanf("%d", &qtd_comrado);
    for(i=0;i<qtd_comrado;i++){
        scanf("%d %d", &produto, &quantidade);
        if(produto==1001)
            total_compra=total_compra+quantidade*1.50;
        else if(produto==1002)
            total_compra=total_compra+quantidade*2.50;
        else if(produto==1003)
            total_compra=total_compra+quantidade*3.50;
        else if(produto==1004)
            total_compra=total_compra+quantidade*4.50;
        else if(produto==1005)
            total_compra=total_compra+quantidade*5.50;
    }
    printf("%.2lf", total_compra);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
