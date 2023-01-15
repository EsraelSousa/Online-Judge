<<<<<<< HEAD
#include <stdio.h>
int main()
{
    int i,n,m,j,flag=0;
    scanf("%d", &n);
    int v[n];
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    scanf("%d", &m);
    int v1[m];
    for(j=0;j<m;j++){
        scanf("%d", &v1[j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           if (v[i]==v1[j]){
              v[i]=0;
              break;
           }
        }
    }
    for(i=0;i<n;i++){
        if(v[i]!=0 && flag==0){
            printf("%d", v[i]);
            flag=1;
        }else if(v[i]!=0 && flag==1){
            printf(" %d", v[i]);
        }
    }
    printf("\n");
}
=======
#include <stdio.h>
int main()
{
    int i,n,m,j,flag=0;
    scanf("%d", &n);
    int v[n];
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    scanf("%d", &m);
    int v1[m];
    for(j=0;j<m;j++){
        scanf("%d", &v1[j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           if (v[i]==v1[j]){
              v[i]=0;
              break;
           }
        }
    }
    for(i=0;i<n;i++){
        if(v[i]!=0 && flag==0){
            printf("%d", v[i]);
            flag=1;
        }else if(v[i]!=0 && flag==1){
            printf(" %d", v[i]);
        }
    }
    printf("\n");
}
>>>>>>> refs/remotes/origin/master
