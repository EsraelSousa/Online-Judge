<<<<<<< HEAD
#include <stdio.h>

int main(){
    int num1;
    float num2;
    char caractere;
    char frase[53];
    scanf("%d %f %c %[^\n]%*c", &num1, &num2, &caractere, frase);
    printf("%d%f%c%s\n", num1, num2, caractere, frase);
    printf("%d\t%f\t%c\t%s\n", num1, num2, caractere, frase);
    printf("%10d%10f%10c%10s\n", num1, num2, caractere, frase);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int num1;
    float num2;
    char caractere;
    char frase[53];
    scanf("%d %f %c %[^\n]%*c", &num1, &num2, &caractere, frase);
    printf("%d%f%c%s\n", num1, num2, caractere, frase);
    printf("%d\t%f\t%c\t%s\n", num1, num2, caractere, frase);
    printf("%10d%10f%10c%10s\n", num1, num2, caractere, frase);
    return 0;
}
>>>>>>> refs/remotes/origin/master
