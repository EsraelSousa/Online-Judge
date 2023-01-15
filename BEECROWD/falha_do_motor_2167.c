<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_teste, pri_queda=0, i;
    scanf("%d", &qtd_teste);
    int valores[qtd_teste];
    for(i=1;i<=qtd_teste;i++){
        scanf("%d", &valores[i]);
    }
    for(i=1;i<=qtd_teste;i++){
        if(valores[i] < valores[i-1] && i>1){
            pri_queda=i;
            break;
        }
    }
    printf("%d", pri_queda);
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_teste, pri_queda=0, i;
    scanf("%d", &qtd_teste);
    int valores[qtd_teste];
    for(i=1;i<=qtd_teste;i++){
        scanf("%d", &valores[i]);
    }
    for(i=1;i<=qtd_teste;i++){
        if(valores[i] < valores[i-1] && i>1){
            pri_queda=i;
            break;
        }
    }
    printf("%d", pri_queda);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
