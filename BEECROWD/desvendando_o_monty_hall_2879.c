<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_simulacao, num, i;
    int portas[3];
    portas[0]=0, portas[1]=0, portas[2]=0;
    scanf("%d", &qtd_simulacao);
    for(i=0;i<qtd_simulacao;i++){
        scanf("%d", &num);
        portas[num-1]++;
    }
    printf("%d\n", qtd_simulacao-portas[0]);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_simulacao, num, i;
    int portas[3];
    portas[0]=0, portas[1]=0, portas[2]=0;
    scanf("%d", &qtd_simulacao);
    for(i=0;i<qtd_simulacao;i++){
        scanf("%d", &num);
        portas[num-1]++;
    }
    printf("%d\n", qtd_simulacao-portas[0]);
    return 0;
}
>>>>>>> refs/remotes/origin/master
