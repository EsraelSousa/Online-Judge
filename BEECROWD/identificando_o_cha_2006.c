<<<<<<< HEAD
#include <stdio.h>

int main(){
    // (1) o chá branco; (2) chá verde; (3) chá preto; ou (4) chá de ervas
    int cha_correto, competidor1, competidor2, competidor3, competidor4, competidor5;
    int cont_acertos=0;
    scanf("%d %d %d %d %d %d", &cha_correto, &competidor1, &competidor2, &competidor3, &competidor4, &competidor5);
    if(cha_correto==competidor1)
        cont_acertos++;
    if(cha_correto==competidor2)
        cont_acertos++;
    if(cha_correto==competidor3)
        cont_acertos++;
    if(cha_correto == competidor4)
        cont_acertos++;
    if(cha_correto == competidor5)
        cont_acertos++;
    printf("%d", cont_acertos);
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    // (1) o chá branco; (2) chá verde; (3) chá preto; ou (4) chá de ervas
    int cha_correto, competidor1, competidor2, competidor3, competidor4, competidor5;
    int cont_acertos=0;
    scanf("%d %d %d %d %d %d", &cha_correto, &competidor1, &competidor2, &competidor3, &competidor4, &competidor5);
    if(cha_correto==competidor1)
        cont_acertos++;
    if(cha_correto==competidor2)
        cont_acertos++;
    if(cha_correto==competidor3)
        cont_acertos++;
    if(cha_correto == competidor4)
        cont_acertos++;
    if(cha_correto == competidor5)
        cont_acertos++;
    printf("%d", cont_acertos);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
