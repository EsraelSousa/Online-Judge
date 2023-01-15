<<<<<<< HEAD
#include <cstdio>

int main(){
    int qtd_teste, qtd_presente, peso_max, peso_i, soma, qtd_viagem, i;
    scanf("%d", &qtd_teste);
    for(i=0; i<qtd_teste; i++){
        scanf("%d %d", &qtd_presente, &peso_max);
        soma=0, qtd_viagem=0;
        for(int j=0; j<qtd_presente; j++){
            scanf("%d", &peso_i);
            if(soma + peso_i > peso_max)
                qtd_viagem++, soma=peso_i;
            else
                soma+=peso_i;
        }
        if(soma > 0)
            qtd_viagem++;
        printf("%d\n", qtd_viagem);
    }
    return 0;
}
=======
#include <cstdio>

int main(){
    int qtd_teste, qtd_presente, peso_max, peso_i, soma, qtd_viagem, i;
    scanf("%d", &qtd_teste);
    for(i=0; i<qtd_teste; i++){
        scanf("%d %d", &qtd_presente, &peso_max);
        soma=0, qtd_viagem=0;
        for(int j=0; j<qtd_presente; j++){
            scanf("%d", &peso_i);
            if(soma + peso_i > peso_max)
                qtd_viagem++, soma=peso_i;
            else
                soma+=peso_i;
        }
        if(soma > 0)
            qtd_viagem++;
        printf("%d\n", qtd_viagem);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
