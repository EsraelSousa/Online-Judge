<<<<<<< HEAD
#include <stdio.h>

int main(){
    int A,B,C;
    while(scanf("%d %d %d", &A, &B, &C)!=EOF){
        if(A==B && B==C)
            printf("*\n");
        else if(A!=B && A!=C && B==C)
            printf("A\n");
        else if(B!=A && B!=C && A==C)
            printf("B\n");
        else
            printf("C\n");
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int A,B,C;
    while(scanf("%d %d %d", &A, &B, &C)!=EOF){
        if(A==B && B==C)
            printf("*\n");
        else if(A!=B && A!=C && B==C)
            printf("A\n");
        else if(B!=A && B!=C && A==C)
            printf("B\n");
        else
            printf("C\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
