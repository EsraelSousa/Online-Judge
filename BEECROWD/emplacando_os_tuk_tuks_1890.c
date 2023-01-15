<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, qtd_letra, qtd_num, i;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d %d", &qtd_letra, &qtd_num);
        if(qtd_letra>0 || qtd_num>0)
            printf("%.0lf\n", pow(26, qtd_letra)*pow(10, qtd_num));
        else
            printf("0\n");
    }
    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_teste, qtd_letra, qtd_num, i;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d %d", &qtd_letra, &qtd_num);
        if(qtd_letra>0 || qtd_num>0)
            printf("%.0lf\n", pow(26, qtd_letra)*pow(10, qtd_num));
        else
            printf("0\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
