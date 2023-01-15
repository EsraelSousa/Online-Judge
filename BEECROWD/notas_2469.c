<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_nota, i, nota, cont_max=0;
    scanf("%d", &qtd_nota);
    int notas[101];
    memset(notas, 0, sizeof(notas));
    for(i=0;i<qtd_nota;i++){
        scanf("%d", &nota);
        notas[nota]++;
    }
    for(i=0;i<101;i++){
        if(notas[i] > cont_max)
            cont_max=notas[i];
    }
    for(i=100;notas[i] != cont_max;i--){
        continue;
    }
    printf("%d\n", i);
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_nota, i, nota, cont_max=0;
    scanf("%d", &qtd_nota);
    int notas[101];
    memset(notas, 0, sizeof(notas));
    for(i=0;i<qtd_nota;i++){
        scanf("%d", &nota);
        notas[nota]++;
    }
    for(i=0;i<101;i++){
        if(notas[i] > cont_max)
            cont_max=notas[i];
    }
    for(i=100;notas[i] != cont_max;i--){
        continue;
    }
    printf("%d\n", i);
    return 0;
}
>>>>>>> refs/remotes/origin/master
