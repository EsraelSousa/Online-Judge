<<<<<<< HEAD
#include <stdio.h>

int main(){
    int limite, n1, n2;
    char operacao;
    scanf("%d", &limite);
    scanf("%d %c %d", &n1, &operacao, &n2);
    if(operacao=='+')
        n1+=n2;
    else
        n1*=n2;
    if(n1<=limite)
        printf("OK\n");
    else
        printf("OVERFLOW\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int limite, n1, n2;
    char operacao;
    scanf("%d", &limite);
    scanf("%d %c %d", &n1, &operacao, &n2);
    if(operacao=='+')
        n1+=n2;
    else
        n1*=n2;
    if(n1<=limite)
        printf("OK\n");
    else
        printf("OVERFLOW\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
