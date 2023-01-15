<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_caso, botao1, botao2, i;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d %d", &botao1, &botao2);
        if(botao1+botao2==0)
            printf("PROXYCITY\n");
        else if(botao1+botao2==1)
            printf("P.Y.N.G.\n");
        else if(botao1+botao2==2)
            printf("DNSUEY!\n");
        else if(botao1+botao2==3)
            printf("SERVERS\n");
        else if(botao1+botao2==4)
            printf("HOST!\n");
        else if(botao1+botao2==5)
            printf("CRIPTONIZE\n");
        else if(botao1+botao2==6)
            printf("OFFLINE DAY\n");
        else if(botao1+botao2==7)
            printf("SALT\n");
        else if(botao1+botao2==8)
            printf("ANSWER!\n");
        else if(botao1+botao2==9)
            printf("RAR?\n");
        else if(botao1+botao2==10)
            printf("WIFI ANTENNAS\n");
        else   // questao não tratou este caso
            printf("ERRO!\n");

    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_caso, botao1, botao2, i;
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%d %d", &botao1, &botao2);
        if(botao1+botao2==0)
            printf("PROXYCITY\n");
        else if(botao1+botao2==1)
            printf("P.Y.N.G.\n");
        else if(botao1+botao2==2)
            printf("DNSUEY!\n");
        else if(botao1+botao2==3)
            printf("SERVERS\n");
        else if(botao1+botao2==4)
            printf("HOST!\n");
        else if(botao1+botao2==5)
            printf("CRIPTONIZE\n");
        else if(botao1+botao2==6)
            printf("OFFLINE DAY\n");
        else if(botao1+botao2==7)
            printf("SALT\n");
        else if(botao1+botao2==8)
            printf("ANSWER!\n");
        else if(botao1+botao2==9)
            printf("RAR?\n");
        else if(botao1+botao2==10)
            printf("WIFI ANTENNAS\n");
        else   // questao não tratou este caso
            printf("ERRO!\n");

    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
