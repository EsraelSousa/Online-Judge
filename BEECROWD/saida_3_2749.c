<<<<<<< HEAD
#include <stdio.h>

int main(){
    int i, k;
    for(i=0;i<39;i++)
        printf("-");
    printf("\n");

    for(k=0;k<5;k++){
        for(i=0;i<39;i++){
        if(i==0 || i==38)
            printf("|");
        else if(k==0 && i==1){
            printf("x = 35");
            i=6;
        }
        else if(k==2 && i==16){
            printf("x = 35");
            i=21;
        }
        else if(k==4 && i==32){
            printf("x = 35");
            i=37;
        }
        else
            printf(" ");
        }
    printf("\n");
    }


    for(i=0;i<39;i++)
        printf("-");
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int i, k;
    for(i=0;i<39;i++)
        printf("-");
    printf("\n");

    for(k=0;k<5;k++){
        for(i=0;i<39;i++){
        if(i==0 || i==38)
            printf("|");
        else if(k==0 && i==1){
            printf("x = 35");
            i=6;
        }
        else if(k==2 && i==16){
            printf("x = 35");
            i=21;
        }
        else if(k==4 && i==32){
            printf("x = 35");
            i=37;
        }
        else
            printf(" ");
        }
    printf("\n");
    }


    for(i=0;i<39;i++)
        printf("-");
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
