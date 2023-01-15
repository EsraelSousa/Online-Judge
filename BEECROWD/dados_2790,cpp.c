<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_dado, face, cont_diferente=0, num_max=0, i;
    int dados[6];
    for(i=0;i<6;i++)
        dados[i]=0;
    scanf("%d", &qtd_dado);
    for(i=0;i<qtd_dado;i++){
        scanf("%d", &face);
        dados[face-1]++;
    }
    for(i=0;i<6;i++)
        printf("%d ", dados[i]);
    printf("\n");
    printf("%d\n", cont_diferente);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_dado, face, cont_diferente=0, num_max=0, i;
    int dados[6];
    for(i=0;i<6;i++)
        dados[i]=0;
    scanf("%d", &qtd_dado);
    for(i=0;i<qtd_dado;i++){
        scanf("%d", &face);
        dados[face-1]++;
    }
    for(i=0;i<6;i++)
        printf("%d ", dados[i]);
    printf("\n");
    printf("%d\n", cont_diferente);
    return 0;
}
>>>>>>> refs/remotes/origin/master
