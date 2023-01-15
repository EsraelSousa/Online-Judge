<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int ordena(const void *a,  const void *b);

int main(){
    int qtd_livro, i;
    while(scanf("%d", &qtd_livro) != EOF){
        int livros[qtd_livro];
        for(i=0;i<qtd_livro;i++)
            scanf("%d", &livros[i]);
        qsort(livros, qtd_livro, sizeof(int), ordena);
        for(i=0;i<qtd_livro;i++)
            printf("%04d\n", livros[i]);
    }
    return 0;
}

int ordena(const void *a,  const void *b){
    if(*(int*)a == *(int*)b)
        return 0;
    else if(*(int*)a < *(int*)b)
        return -1;
    else
        return 1;
}
=======
#include <stdio.h>
#include <stdlib.h>

int ordena(const void *a,  const void *b);

int main(){
    int qtd_livro, i;
    while(scanf("%d", &qtd_livro) != EOF){
        int livros[qtd_livro];
        for(i=0;i<qtd_livro;i++)
            scanf("%d", &livros[i]);
        qsort(livros, qtd_livro, sizeof(int), ordena);
        for(i=0;i<qtd_livro;i++)
            printf("%04d\n", livros[i]);
    }
    return 0;
}

int ordena(const void *a,  const void *b){
    if(*(int*)a == *(int*)b)
        return 0;
    else if(*(int*)a < *(int*)b)
        return -1;
    else
        return 1;
}
>>>>>>> refs/remotes/origin/master
