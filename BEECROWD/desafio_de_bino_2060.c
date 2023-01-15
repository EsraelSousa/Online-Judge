<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_numeros, cont_mult2=0, cont_mult3=0, cont_mult4=0, cont_mult5=0, i;
    scanf("%d", &qtd_numeros);
    int vetor_numeros[qtd_numeros];
    for(i=0;i<qtd_numeros;i++){
        scanf("%d", &vetor_numeros[i]);
        if(vetor_numeros[i]%2 == 0)
            cont_mult2++;
        if(vetor_numeros[i]%3 == 0)
            cont_mult3++;
        if(vetor_numeros[i]%4 == 0)
            cont_mult4++;
        if(vetor_numeros[i]%5 == 0)
            cont_mult5++;
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5", cont_mult2, cont_mult3, cont_mult4, cont_mult5);
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_numeros, cont_mult2=0, cont_mult3=0, cont_mult4=0, cont_mult5=0, i;
    scanf("%d", &qtd_numeros);
    int vetor_numeros[qtd_numeros];
    for(i=0;i<qtd_numeros;i++){
        scanf("%d", &vetor_numeros[i]);
        if(vetor_numeros[i]%2 == 0)
            cont_mult2++;
        if(vetor_numeros[i]%3 == 0)
            cont_mult3++;
        if(vetor_numeros[i]%4 == 0)
            cont_mult4++;
        if(vetor_numeros[i]%5 == 0)
            cont_mult5++;
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5", cont_mult2, cont_mult3, cont_mult4, cont_mult5);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
