<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_pessoas, total_anoes=0, total_elfos=0, total_humanos=0, total_magos=0, total_hobbits=0, i;
    char nome[20], identificacao;
    scanf("%d", &qtd_pessoas);
    for(i=0;i<qtd_pessoas;i++){
        scanf("%s %c", nome, &identificacao);
        if(identificacao == 'A')
            total_anoes++;
        else if(identificacao == 'E')
            total_elfos++;
        else if(identificacao == 'H')
            total_humanos++;
        else if(identificacao == 'M')
            total_magos++;
        else
            total_hobbits++;
    }
    printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(s)\n%d Mago(s)", total_hobbits, total_humanos, total_elfos, total_anoes, total_magos);
    printf("\n");
    return 0;

}
=======
#include <stdio.h>

int main(){
    int qtd_pessoas, total_anoes=0, total_elfos=0, total_humanos=0, total_magos=0, total_hobbits=0, i;
    char nome[20], identificacao;
    scanf("%d", &qtd_pessoas);
    for(i=0;i<qtd_pessoas;i++){
        scanf("%s %c", nome, &identificacao);
        if(identificacao == 'A')
            total_anoes++;
        else if(identificacao == 'E')
            total_elfos++;
        else if(identificacao == 'H')
            total_humanos++;
        else if(identificacao == 'M')
            total_magos++;
        else
            total_hobbits++;
    }
    printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(s)\n%d Mago(s)", total_hobbits, total_humanos, total_elfos, total_anoes, total_magos);
    printf("\n");
    return 0;

}
>>>>>>> refs/remotes/origin/master
