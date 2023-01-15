<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_crianca, cont_carro=0, cont_boneca=0, i;
    char sexo;
    scanf("%d", &qtd_crianca);
    for(i=0;i<qtd_crianca;i++){
        scanf("%*s %c", &sexo);
        if(sexo=='M')
            cont_carro++;
        else
            cont_boneca++;
    }
    printf("%d carrinhos\n%d bonecas\n", cont_carro, cont_boneca);
}
=======
#include <stdio.h>

int main(){
    int qtd_crianca, cont_carro=0, cont_boneca=0, i;
    char sexo;
    scanf("%d", &qtd_crianca);
    for(i=0;i<qtd_crianca;i++){
        scanf("%*s %c", &sexo);
        if(sexo=='M')
            cont_carro++;
        else
            cont_boneca++;
    }
    printf("%d carrinhos\n%d bonecas\n", cont_carro, cont_boneca);
}
>>>>>>> refs/remotes/origin/master
