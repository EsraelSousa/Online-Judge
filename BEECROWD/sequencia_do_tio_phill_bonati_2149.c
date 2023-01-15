<<<<<<< HEAD
#include <stdio.h>

int main(){
    long long int sequencia[17];
    int termo_n, i;
    sequencia[0]=0, sequencia[1]=1;
    for(i=2;i<17;i++){
        if(i%2==0)
            sequencia[i]=sequencia[i-1]+sequencia[i-2];
        else
            sequencia[i]=sequencia[i-1]*sequencia[i-2];
    }
    while(scanf("%d", &termo_n) != EOF){
        printf("%lld\n", sequencia[termo_n-1]);
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    long long int sequencia[17];
    int termo_n, i;
    sequencia[0]=0, sequencia[1]=1;
    for(i=2;i<17;i++){
        if(i%2==0)
            sequencia[i]=sequencia[i-1]+sequencia[i-2];
        else
            sequencia[i]=sequencia[i-1]*sequencia[i-2];
    }
    while(scanf("%d", &termo_n) != EOF){
        printf("%lld\n", sequencia[termo_n-1]);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
