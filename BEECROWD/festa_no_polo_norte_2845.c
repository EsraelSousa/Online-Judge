<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_elfo, maior=-1, i;
    scanf("%d", &qtd_elfo);
    int identificadores[qtd_elfo];
    for(i=0;i<qtd_elfo;i++){
        scanf("%d", &identificadores[i]);
        if(identificadores[i]>maior)
            maior=identificadores[i];
    }
    printf("%d\n", maior+1);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_elfo, maior=-1, i;
    scanf("%d", &qtd_elfo);
    int identificadores[qtd_elfo];
    for(i=0;i<qtd_elfo;i++){
        scanf("%d", &identificadores[i]);
        if(identificadores[i]>maior)
            maior=identificadores[i];
    }
    printf("%d\n", maior+1);
    return 0;
}
>>>>>>> refs/remotes/origin/master
