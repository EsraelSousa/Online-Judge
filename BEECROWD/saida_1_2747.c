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
            //else if(j==38)

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
    int i,j;
    for(i=0;i<39;i++)
        printf("-");
    printf("\n");

    for(i=0;i<5;i++){
        for(j=0;j<39;j++){
            if(j==0 || j==38)
                printf("|");
            //else if(j==38)

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
