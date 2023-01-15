<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct palavra Tpalavra;

struct palavra{
    char palavra[52];
    int tamanho;
    int ordem;
};

int ordena(Tpalavra *a, Tpalavra *b);

int main(){
    char texto[1000];
    int qtd_caso, i, j, k=0, n=0, cont_palavra=0;
    Tpalavra palavras[52];
    scanf("%d%*c", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%[^\n]%*c", texto);
        for(j=0;j<strlen(texto);j++){
            if(texto[j]==' '){
                palavras[n].palavra[k]='\0';
                palavras[n].tamanho= strlen(palavras[n].palavra);
                palavras[n].ordem=n;
                n++;
                k=0;
                cont_palavra++;
            }else{
                palavras[n].palavra[k]=texto[j];
                k++;
            }
        }
        palavras[n].palavra[k]='\0';
        palavras[n].tamanho= strlen(palavras[n].palavra);
        palavras[n].ordem=n;
        n++;
        k=0;
        cont_palavra++;
        n=0;
        qsort(palavras, cont_palavra, sizeof(Tpalavra), ordena);
        for(j=0;j<cont_palavra;j++){
            if(j==cont_palavra-1)
                printf("%s\n", palavras[j].palavra);
            else
                printf("%s ", palavras[j].palavra);
        }
        cont_palavra=0;
    }
    return 0;
}

int ordena(Tpalavra *a, Tpalavra *b){
    if(a->tamanho == b->tamanho)
        return a->ordem - b->ordem;
    else if(a->tamanho < b->tamanho)
        return 1;
    else
        return -1;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct palavra Tpalavra;

struct palavra{
    char palavra[52];
    int tamanho;
    int ordem;
};

int ordena(Tpalavra *a, Tpalavra *b);

int main(){
    char texto[1000];
    int qtd_caso, i, j, k=0, n=0, cont_palavra=0;
    Tpalavra palavras[52];
    scanf("%d%*c", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%[^\n]%*c", texto);
        for(j=0;j<strlen(texto);j++){
            if(texto[j]==' '){
                palavras[n].palavra[k]='\0';
                palavras[n].tamanho= strlen(palavras[n].palavra);
                palavras[n].ordem=n;
                n++;
                k=0;
                cont_palavra++;
            }else{
                palavras[n].palavra[k]=texto[j];
                k++;
            }
        }
        palavras[n].palavra[k]='\0';
        palavras[n].tamanho= strlen(palavras[n].palavra);
        palavras[n].ordem=n;
        n++;
        k=0;
        cont_palavra++;
        n=0;
        qsort(palavras, cont_palavra, sizeof(Tpalavra), ordena);
        for(j=0;j<cont_palavra;j++){
            if(j==cont_palavra-1)
                printf("%s\n", palavras[j].palavra);
            else
                printf("%s ", palavras[j].palavra);
        }
        cont_palavra=0;
    }
    return 0;
}

int ordena(Tpalavra *a, Tpalavra *b){
    if(a->tamanho == b->tamanho)
        return a->ordem - b->ordem;
    else if(a->tamanho < b->tamanho)
        return 1;
    else
        return -1;
}
>>>>>>> refs/remotes/origin/master
