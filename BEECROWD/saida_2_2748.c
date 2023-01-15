<<<<<<< HEAD
#include <stdio.h>

int main(){
    int i,j;
    for(i=0;i<39;i++)
        printf("-");
    printf("\n");

    for(i=0;i<5;i++){
        for(j=0;j<39;j++){
            if(j==0 || j==38)
                printf("|");
            else if(i==0 && j==9){
                printf("Roberto");
                j=15;
            }
            else if(i==2 && j==9){
                printf("5786");
                j=12;
            }
            else if(i==4 && j==9){
                printf("UNIFEI");
                j=14;
            }
            else
                printf(" ");
        }
        if(i<4)
            printf("\n");
    }

    printf("\n");
    for(i=0;i<39;i++)
        printf("-");
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int i,j;
    for(i=0;i<39;i++)
        printf("-");
    printf("\n");

    for(i=0;i<5;i++){
        for(j=0;j<39;j++){
            if(j==0 || j==38)
                printf("|");
            else if(i==0 && j==9){
                printf("Roberto");
                j=15;
            }
            else if(i==2 && j==9){
                printf("5786");
                j=12;
            }
            else if(i==4 && j==9){
                printf("UNIFEI");
                j=14;
            }
            else
                printf(" ");
        }
        if(i<4)
            printf("\n");
    }

    printf("\n");
    for(i=0;i<39;i++)
        printf("-");
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
