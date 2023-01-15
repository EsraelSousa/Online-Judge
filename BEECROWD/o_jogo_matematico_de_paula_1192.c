<<<<<<< HEAD
#include <stdio.h>

int main(){
    int num1, num2, qtd_teste, i, j;
    char caractere;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d %c %d", &num1, &caractere, &num2);
        if(num1==num2)
            printf("%d\n", num1*num2);
        else if(caractere < 91)
            printf("%d\n", num2-num1);
        else
            printf("%d\n", num1+num2);

    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int num1, num2, qtd_teste, i, j;
    char caractere;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d %c %d", &num1, &caractere, &num2);
        if(num1==num2)
            printf("%d\n", num1*num2);
        else if(caractere < 91)
            printf("%d\n", num2-num1);
        else
            printf("%d\n", num1+num2);

    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
