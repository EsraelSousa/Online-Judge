<<<<<<< HEAD
#include <stdio.h>

int main(){
    int A,B,C;
    scanf("%d %d %d", &A, &B, &C);
    if(A>=B+C || B>=A+C || C>=A+C){
        printf("Invalido");
        printf("\n");
    }
    else{
        if(A==B && B== C)
            printf("Valido-Equilatero\n");
        else if(A!=B && A!=C && B!=C)
            printf("Valido-Escaleno\n");
        else
            printf("Valido-Isoceles\n");

        if(A*A==B*B+C*C || B*B==A*A+C*C || C*C==A*A+B*B)
            printf("Retangulo: S");
        else
            printf("Retangulo: N");
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int A,B,C;
    scanf("%d %d %d", &A, &B, &C);
    if(A>=B+C || B>=A+C || C>=A+C){
        printf("Invalido");
        printf("\n");
    }
    else{
        if(A==B && B== C)
            printf("Valido-Equilatero\n");
        else if(A!=B && A!=C && B!=C)
            printf("Valido-Escaleno\n");
        else
            printf("Valido-Isoceles\n");

        if(A*A==B*B+C*C || B*B==A*A+C*C || C*C==A*A+B*B)
            printf("Retangulo: S");
        else
            printf("Retangulo: N");
        printf("\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
