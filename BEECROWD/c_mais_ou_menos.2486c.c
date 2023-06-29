#include <stdio.h>
#include <string.h>

int verifica_fonte(char *nome);

int main(){
    char fonte_vitamina[16];
    int qtd_alimento=1, quantidade, total=0, i;
    while(qtd_alimento!=0){
        scanf("%d", &qtd_alimento);
        if(qtd_alimento!=0){
            for(i=0;i<qtd_alimento;i++){
                scanf("%d%*c %[^\n]%*c", &quantidade, &fonte_vitamina);
                total+=quantidade*verifica_fonte(fonte_vitamina);
            }
            if(total<110)
                printf("Mais %d mg\n", 110-total);
            else if(total>130)
                printf("Menos %d mg\n", total-130);
            else
                printf("%d mg\n", total);
            total=0;
        }
    }
    return 0;
}

int verifica_fonte(char *nome){
    if(strcmp(nome, "suco de laranja")==0)
        return 120;
    else if(strcmp(nome, "morango fresco")==0)
        return 85;
    else if(strcmp(nome, "mamao")==0)
        return 85;
    else if(strcmp(nome, "goiaba vermelha")==0)
        return 70;
    else if(strcmp(nome, "manga")==0)
        return 56;
    else if(strcmp(nome, "laranja")==0)
        return 50;
    else if(strcmp(nome, "brocolis")==0)
        return 34;
    else
        return 0;

}
