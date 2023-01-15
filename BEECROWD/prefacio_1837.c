<<<<<<< HEAD
#include <stdio.h>

int modulo(int valor){
    if(valor<0)
        return -1*valor;
    else
        return valor;
}

int main(){
    // a = b*q+r
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    q=a/b;
    r=a%b;
    if(r<0){
        if(q<0)
            q=q-1;
        else
            q=q+1;
        r=r+modulo(b);
    }
    if(q==1 && a<0)
        q=q*-1;
    if(a<0 && b<0 && q<0)
        q=q*-1;
    printf("%d %d", q, r);
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int modulo(int valor){
    if(valor<0)
        return -1*valor;
    else
        return valor;
}

int main(){
    // a = b*q+r
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    q=a/b;
    r=a%b;
    if(r<0){
        if(q<0)
            q=q-1;
        else
            q=q+1;
        r=r+modulo(b);
    }
    if(q==1 && a<0)
        q=q*-1;
    if(a<0 && b<0 && q<0)
        q=q*-1;
    printf("%d %d", q, r);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
