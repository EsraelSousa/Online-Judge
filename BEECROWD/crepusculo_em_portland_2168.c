<<<<<<< HEAD
#include <stdio.h>

int main(){
    int n, i, j, cont=0;
    int quart[101][101];
    scanf("%d", &n);
    for(i=0;i<n+1;i++){
        for(j=0;j<n+1;j++)
            scanf("%d", &quart[i][j]);
    }
    for(i=1;i<n+1;i++){
        for(j=1;j<n+1;j++){
            if(quart[i][j]==1)
                cont++;
            if(quart[i][j-1]==1)
                cont++;
            if(quart[i-1][j]==1)
                cont++;
            if(quart[i-1][j-1]==1)
                cont++;
            if(cont>1)
                printf("S");
            else
                printf("U");
            cont=0;
        }
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int n, i, j, cont=0;
    int quart[101][101];
    scanf("%d", &n);
    for(i=0;i<n+1;i++){
        for(j=0;j<n+1;j++)
            scanf("%d", &quart[i][j]);
    }
    for(i=1;i<n+1;i++){
        for(j=1;j<n+1;j++){
            if(quart[i][j]==1)
                cont++;
            if(quart[i][j-1]==1)
                cont++;
            if(quart[i-1][j]==1)
                cont++;
            if(quart[i-1][j-1]==1)
                cont++;
            if(cont>1)
                printf("S");
            else
                printf("U");
            cont=0;
        }
        printf("\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
