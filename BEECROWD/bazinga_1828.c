<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    char opcao1[12], opcao2[12];
    int qtd, i;
    scanf("%d", &qtd);
    for(i=1;i<=qtd;i++){
        scanf("%s %s", opcao1, opcao2);
        printf("Caso #%d: ", i);
        if(strcmp(opcao1, opcao2)==0)
            printf("De novo!\n");
        else if (strcmp(opcao1, "tesoura")==0){
            if(strcmp(opcao2, "papel")==0 || strcmp(opcao2, "lagarto")==0)
                printf("Bazinga!\n");
            else
                printf("Raj trapaceou!\n");
        }

        else if (strcmp(opcao1, "papel")==0){
            if(strcmp(opcao2, "pedra")==0 || strcmp(opcao2, "Spock")==0)
                printf("Bazinga!\n");
            else
                printf("Raj trapaceou!\n");
        }

        else if (strcmp(opcao1, "pedra")==0){
            if(strcmp(opcao2, "lagarto")==0 || strcmp(opcao2, "tesoura")==0)
                printf("Bazinga!\n");
            else
                printf("Raj trapaceou!\n");
        }

        else if (strcmp(opcao1, "lagarto")==0){
            if(strcmp(opcao2, "Spock")==0 || strcmp(opcao2, "papel")==0)
                printf("Bazinga!\n");
            else
                printf("Raj trapaceou!\n");
        }

        else if (strcmp(opcao1, "Spock")==0){
            if(strcmp(opcao2, "tesoura")==0 || strcmp(opcao2, "pedra")==0)
                printf("Bazinga!\n");
            else
                printf("Raj trapaceou!\n");
        }
    }
    return 0;
}

=======
#include <stdio.h>
#include <string.h>

int main(){
    char opcao1[12], opcao2[12];
    int qtd, i;
    scanf("%d", &qtd);
    for(i=1;i<=qtd;i++){
        scanf("%s %s", opcao1, opcao2);
        printf("Caso #%d: ", i);
        if(strcmp(opcao1, opcao2)==0)
            printf("De novo!\n");
        else if (strcmp(opcao1, "tesoura")==0){
            if(strcmp(opcao2, "papel")==0 || strcmp(opcao2, "lagarto")==0)
                printf("Bazinga!\n");
            else
                printf("Raj trapaceou!\n");
        }

        else if (strcmp(opcao1, "papel")==0){
            if(strcmp(opcao2, "pedra")==0 || strcmp(opcao2, "Spock")==0)
                printf("Bazinga!\n");
            else
                printf("Raj trapaceou!\n");
        }

        else if (strcmp(opcao1, "pedra")==0){
            if(strcmp(opcao2, "lagarto")==0 || strcmp(opcao2, "tesoura")==0)
                printf("Bazinga!\n");
            else
                printf("Raj trapaceou!\n");
        }

        else if (strcmp(opcao1, "lagarto")==0){
            if(strcmp(opcao2, "Spock")==0 || strcmp(opcao2, "papel")==0)
                printf("Bazinga!\n");
            else
                printf("Raj trapaceou!\n");
        }

        else if (strcmp(opcao1, "Spock")==0){
            if(strcmp(opcao2, "tesoura")==0 || strcmp(opcao2, "pedra")==0)
                printf("Bazinga!\n");
            else
                printf("Raj trapaceou!\n");
        }
    }
    return 0;
}

>>>>>>> refs/remotes/origin/master
