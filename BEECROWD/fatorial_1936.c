<<<<<<< HEAD
#include <stdio.h>

int main(){
    int num, cont=0;
    scanf("%d", &num);
    cont+=num/40320;
    num%=40320;
    cont+=num/5040;
    num%=5040;
    cont+=num/720;
    num%=720;
    cont+=num/120;
    num%=120;
    cont+=num/24;
    num%=24;
    cont+=num/6;
    num%=6;
    cont+=num/2;
    cont+=num%2;
    printf("%d\n", cont);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int num, cont=0;
    scanf("%d", &num);
    cont+=num/40320;
    num%=40320;
    cont+=num/5040;
    num%=5040;
    cont+=num/720;
    num%=720;
    cont+=num/120;
    num%=120;
    cont+=num/24;
    num%=24;
    cont+=num/6;
    num%=6;
    cont+=num/2;
    cont+=num%2;
    printf("%d\n", cont);
    return 0;
}
>>>>>>> refs/remotes/origin/master
