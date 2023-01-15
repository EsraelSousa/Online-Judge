<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int cont_abertura=0, i, j=0, corr=0;
    char lista_assuntos[100005];
    scanf("%s", lista_assuntos);
    for(i=0;i<strlen(lista_assuntos);i++){
        if(lista_assuntos[i]=='(' && corr==0){
            j=i+1;
            while(j<strlen(lista_assuntos)){
                if(lista_assuntos[j]==')'){
                    lista_assuntos[i]='*', lista_assuntos[j]='*';
                    break;
                }
                j++;
            }
        }
        if(j==strlen(lista_assuntos))
            corr=1;
        if(lista_assuntos[i]=='(' && corr==1)
            cont_abertura++;
    }
    if(cont_abertura>0)
        printf("Ainda temos %d assunto(s) pendente(s)!\n", cont_abertura);
    else
        printf("Partiu RU!\n");
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int cont_abertura=0, i, j=0, corr=0;
    char lista_assuntos[100005];
    scanf("%s", lista_assuntos);
    for(i=0;i<strlen(lista_assuntos);i++){
        if(lista_assuntos[i]=='(' && corr==0){
            j=i+1;
            while(j<strlen(lista_assuntos)){
                if(lista_assuntos[j]==')'){
                    lista_assuntos[i]='*', lista_assuntos[j]='*';
                    break;
                }
                j++;
            }
        }
        if(j==strlen(lista_assuntos))
            corr=1;
        if(lista_assuntos[i]=='(' && corr==1)
            cont_abertura++;
    }
    if(cont_abertura>0)
        printf("Ainda temos %d assunto(s) pendente(s)!\n", cont_abertura);
    else
        printf("Partiu RU!\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
