<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_teste, n, r, i;
    int fibo[40];
    for(i=0;i<40;i++){
        if(i<=1)
            fibo[i]=1;
        else
            fibo[i]=fibo[i-1]+fibo[i-2];
    }

    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d", &n);
        //r= fib(n);
        printf("fib(%d) = %d calls = %d\n", n, 2*(fibo[n]-1), fibo[n-1]);
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_teste, n, r, i;
    int fibo[40];
    for(i=0;i<40;i++){
        if(i<=1)
            fibo[i]=1;
        else
            fibo[i]=fibo[i-1]+fibo[i-2];
    }

    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d", &n);
        //r= fib(n);
        printf("fib(%d) = %d calls = %d\n", n, 2*(fibo[n]-1), fibo[n-1]);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
