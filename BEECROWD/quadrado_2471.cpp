<<<<<<< HEAD
#include <cstdio>
#include <cstring>

int main(){
    int n, soma_max=0, flag=0, i, j;
    scanf("%d", &n);
    int quad[n][n], somas[2*n];
    memset(somas, 0, sizeof(somas));
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &quad[i][j]);
            somas[i]+=quad[i][j];
            somas[j+n]+=quad[i][j];
        }
    }
    for(i=0; i<n; i++){
        if(somas[i] != somas[i+n]){
            printf("* %d\n", i);
        }
    }
    return 0;
}
=======
#include <cstdio>
#include <cstring>

int main(){
    int n, soma_max=0, flag=0, i, j;
    scanf("%d", &n);
    int quad[n][n], somas[2*n];
    memset(somas, 0, sizeof(somas));
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &quad[i][j]);
            somas[i]+=quad[i][j];
            somas[j+n]+=quad[i][j];
        }
    }
    for(i=0; i<n; i++){
        if(somas[i] != somas[i+n]){
            printf("* %d\n", i);
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
