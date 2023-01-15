<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct presente Tpresente;

 struct presente{
    char presente[150];
    double preco;
    int preferencia;
 };

int ordena(Tpresente *a, Tpresente *b);

int main(){
    int qtd_presente, cont=0, i;
    char nome[103];
    while(scanf("%s %d%*c", &nome, &qtd_presente) != EOF){
        setbuf(stdin, NULL);
        if(cont==1)
            printf("\n");
        Tpresente total_presentes[qtd_presente];
        for(i=0;i<qtd_presente;i++){
            scanf("%[^\n]%*c", total_presentes[i].presente);
            setbuf(stdin, NULL);
            scanf("%lf %d%*c", &total_presentes[i].preco, &total_presentes[i].preferencia);
            setbuf(stdin, NULL);
        }
        qsort(total_presentes, qtd_presente, sizeof(Tpresente), ordena);  // função para ordenar com as regras
        printf("Lista de %s\n", nome);
        for(i=0;i<qtd_presente;i++)
            printf("%s - R$%.2lf\n", total_presentes[i].presente, total_presentes[i].preco);
        cont=1;
    }
    printf("\n");
    return 0;
}

int ordena(Tpresente *a, Tpresente *b){
    if(a->preferencia == b->preferencia){
        if(a->preco == b->preco){
            return strcmp(a->presente, b->presente);
        }
        else if(a->preco < b->preco)
            return -1;
        else
            return 1;
    }
    else if(a->preferencia > b->preferencia)
        return -1;
    else
        return 1;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct presente Tpresente;

 struct presente{
    char presente[150];
    double preco;
    int preferencia;
 };

int ordena(Tpresente *a, Tpresente *b);

int main(){
    int qtd_presente, cont=0, i;
    char nome[103];
    while(scanf("%s %d%*c", &nome, &qtd_presente) != EOF){
        setbuf(stdin, NULL);
        if(cont==1)
            printf("\n");
        Tpresente total_presentes[qtd_presente];
        for(i=0;i<qtd_presente;i++){
            scanf("%[^\n]%*c", total_presentes[i].presente);
            setbuf(stdin, NULL);
            scanf("%lf %d%*c", &total_presentes[i].preco, &total_presentes[i].preferencia);
            setbuf(stdin, NULL);
        }
        qsort(total_presentes, qtd_presente, sizeof(Tpresente), ordena);  // função para ordenar com as regras
        printf("Lista de %s\n", nome);
        for(i=0;i<qtd_presente;i++)
            printf("%s - R$%.2lf\n", total_presentes[i].presente, total_presentes[i].preco);
        cont=1;
    }
    printf("\n");
    return 0;
}

int ordena(Tpresente *a, Tpresente *b){
    if(a->preferencia == b->preferencia){
        if(a->preco == b->preco){
            return strcmp(a->presente, b->presente);
        }
        else if(a->preco < b->preco)
            return -1;
        else
            return 1;
    }
    else if(a->preferencia > b->preferencia)
        return -1;
    else
        return 1;
}
>>>>>>> refs/remotes/origin/master
