<<<<<<< HEAD
#include <stdio.h>

int main(){
    long int seque[10000];
    int i;
    seque[0]=2;
    for(i=1;i<=32000;i++){
        seque[i]=i+1+seque[i-1];
        printf("%ld\n", i+1+seque[i-1]);
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    long int seque[10000];
    int i;
    seque[0]=2;
    for(i=1;i<=32000;i++){
        seque[i]=i+1+seque[i-1];
        printf("%ld\n", i+1+seque[i-1]);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
