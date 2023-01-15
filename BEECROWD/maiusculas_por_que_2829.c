<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordena(const void *a, const void *b){
    if(strcasecmp(a, b)==0)
        return strcmp(a, b);
    else
        return strcasecmp(a, b);
}

int main(){
    int qtd_palavra, i;
    scanf("%d", &qtd_palavra);
    char palavras[qtd_palavra][23];
    for(i=0; i<qtd_palavra; i++)
        scanf("%s", palavras[i]);
    qsort(palavras, qtd_palavra, sizeof(palavras[0]), ordena);
    for(i=0; i<qtd_palavra; i++)
        printf("%s\n", palavras[i]);
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordena(const void *a, const void *b){
    if(strcasecmp(a, b)==0)
        return strcmp(a, b);
    else
        return strcasecmp(a, b);
}

int main(){
    int qtd_palavra, i;
    scanf("%d", &qtd_palavra);
    char palavras[qtd_palavra][23];
    for(i=0; i<qtd_palavra; i++)
        scanf("%s", palavras[i]);
    qsort(palavras, qtd_palavra, sizeof(palavras[0]), ordena);
    for(i=0; i<qtd_palavra; i++)
        printf("%s\n", palavras[i]);
    return 0;
}
>>>>>>> refs/remotes/origin/master
