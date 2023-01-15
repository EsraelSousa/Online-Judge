<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_teste, i, j;
    int pontos[6], distancias[6];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        for(j=0;j<6;j++)
            scanf("%d %d", &pontos[j], &distancias[j]);
        if(pontos[0]*distancias[0]+pontos[1]*distancias[1]+pontos[2]*distancias[2] > pontos[3]*distancias[3]+pontos[4]*distancias[4]+pontos[5]*distancias[5])
            printf("JOAO\n");
        else
            printf("MARIA\n");
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_teste, i, j;
    int pontos[6], distancias[6];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        for(j=0;j<6;j++)
            scanf("%d %d", &pontos[j], &distancias[j]);
        if(pontos[0]*distancias[0]+pontos[1]*distancias[1]+pontos[2]*distancias[2] > pontos[3]*distancias[3]+pontos[4]*distancias[4]+pontos[5]*distancias[5])
            printf("JOAO\n");
        else
            printf("MARIA\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
