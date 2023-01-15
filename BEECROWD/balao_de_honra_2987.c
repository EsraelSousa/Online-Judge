<<<<<<< HEAD
#include <stdio.h>

int main(){
    int cont_posica=1, i;
    char letra, afa;
    scanf("%c", &letra);
    for(i=65;i<91;i++){
        afa=i;
        if(afa==letra)
            break;
        cont_posica++;
    }
    printf("%d ", cont_posica);
    printf("\n");
}
=======
#include <stdio.h>

int main(){
    int cont_posica=1, i;
    char letra, afa;
    scanf("%c", &letra);
    for(i=65;i<91;i++){
        afa=i;
        if(afa==letra)
            break;
        cont_posica++;
    }
    printf("%d ", cont_posica);
    printf("\n");
}
>>>>>>> refs/remotes/origin/master
