<<<<<<< HEAD
#include <stdio.h>

int main(){
    int n, i, j;
    while(scanf("%d", &n) != EOF){
        int matriz[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i+j==n-1)
                    matriz[i][j]=2;
                else if(i==j)
                    matriz[i][j]=1;
                else
                    matriz[i][j]=3;
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                printf("%d", matriz[i][j]);
            printf("\n");
        }
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int n, i, j;
    while(scanf("%d", &n) != EOF){
        int matriz[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i+j==n-1)
                    matriz[i][j]=2;
                else if(i==j)
                    matriz[i][j]=1;
                else
                    matriz[i][j]=3;
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                printf("%d", matriz[i][j]);
            printf("\n");
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
