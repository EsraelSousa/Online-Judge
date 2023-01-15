<<<<<<< HEAD
#include <stdio.h>

void mov1(int *vetor){
    int aux;
    aux=vetor[1];
    vetor[1]=vetor[0];
    vetor[0]=aux;
}

void mov2(int *vetor){
    int aux;
    aux=vetor[2];
    vetor[2]=vetor[1];
    vetor[1]=aux;
}

void mov3(int *vetor){
    int aux;
    aux=vetor[2];
    vetor[2]=vetor[0];
    vetor[0]=aux;
}

int main(){
    int qtd_movimentos, mov, i;
    int vetor[3];
    vetor[0]=0, vetor[1]=0, vetor[2]=0;
    char inicio;
    scanf("%d %c", &qtd_movimentos, &inicio);
    if(inicio=='A')
        vetor[0]=1;
    else if(inicio=='B')
        vetor[1]=1;
    else
        vetor[2]=1;
    for(i=0;i<qtd_movimentos;i++){
        scanf("%d", &mov);
        if(mov==1)
            mov1(vetor);
        else if(mov==2)
            mov2(vetor);
        else
            mov3(vetor);
    }
    if(vetor[0]==1)
        printf("A\n");
    else if(vetor[1]==1)
        printf("B\n");
    else
        printf("C\n");
}
=======
#include <stdio.h>

void mov1(int *vetor){
    int aux;
    aux=vetor[1];
    vetor[1]=vetor[0];
    vetor[0]=aux;
}

void mov2(int *vetor){
    int aux;
    aux=vetor[2];
    vetor[2]=vetor[1];
    vetor[1]=aux;
}

void mov3(int *vetor){
    int aux;
    aux=vetor[2];
    vetor[2]=vetor[0];
    vetor[0]=aux;
}

int main(){
    int qtd_movimentos, mov, i;
    int vetor[3];
    vetor[0]=0, vetor[1]=0, vetor[2]=0;
    char inicio;
    scanf("%d %c", &qtd_movimentos, &inicio);
    if(inicio=='A')
        vetor[0]=1;
    else if(inicio=='B')
        vetor[1]=1;
    else
        vetor[2]=1;
    for(i=0;i<qtd_movimentos;i++){
        scanf("%d", &mov);
        if(mov==1)
            mov1(vetor);
        else if(mov==2)
            mov2(vetor);
        else
            mov3(vetor);
    }
    if(vetor[0]==1)
        printf("A\n");
    else if(vetor[1]==1)
        printf("B\n");
    else
        printf("C\n");
}
>>>>>>> refs/remotes/origin/master
