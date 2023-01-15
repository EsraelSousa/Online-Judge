<<<<<<< HEAD
#include <stdio.h>

int main(){
    unsigned long long int a=3;
    int i, n;
    scanf("%d", &n);
    for(i=1; i<n; i++){
        a= a+(a-1);
    }
    printf("%llu\n", a*a);
    return 0;
}
=======
#include <stdio.h>

int main(){
    unsigned long long int a=3;
    int i, n;
    scanf("%d", &n);
    for(i=1; i<n; i++){
        a= a+(a-1);
    }
    printf("%llu\n", a*a);
    return 0;
}
>>>>>>> refs/remotes/origin/master
