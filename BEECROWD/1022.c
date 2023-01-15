#include <stdio.h>

int max_divisor_comum(int numerador, int denominador);

int main(){
    int num1,num2,div1,div2,numerador, denominador, max_divisor, qtd_tes, i;
    char operacao;
    scanf("%d", &qtd_tes);
    for(i=0;i<qtd_tes;i++){
        scanf("%d %*c %d %c %d %*c %d", &num1, &div1, &operacao, &num2, &div2);
        if(operacao == '+'){
            numerador=num1*div2+num2*div1;
            denominador=div1*div2;
            max_divisor=max_divisor_comum(numerador, denominador);
            if(numerador < 0 && denominador < 0)
                printf("%d/%d = %d/%d\n", -1*numerador, -1*denominador, -1*(numerador/max_divisor), -1*(denominador/max_divisor));
            else if(denominador < 0)
                printf("-%d/%d = -%d/%d\n", numerador, -1*denominador, numerador/max_divisor, -1*(denominador/max_divisor));
            else
                printf("%d/%d = %d/%d\n", numerador, denominador, numerador/max_divisor, denominador/max_divisor);
        }
        else if(operacao =='-'){
            numerador=num1*div2-num2*div1;
            denominador=div1*div2;
            max_divisor=max_divisor_comum(numerador, denominador);
            if(numerador < 0 && denominador < 0)
                printf("%d/%d = %d/%d\n", -1*numerador, -1*denominador, -1*(numerador/max_divisor), -1*(denominador/max_divisor));
            else if (num1*div2 < num2*div1 )
                printf("%d/%d = %d/%d\n", numerador, denominador, numerador/max_divisor, denominador/max_divisor);
            else if(denominador < 0)
                printf("-%d/%d = -%d/%d\n", numerador, -1*denominador, numerador/max_divisor, -1*(denominador/max_divisor));
            else
                printf("%d/%d = %d/%d\n", numerador, denominador, numerador/max_divisor, denominador/max_divisor);
        }
        else if(operacao == '*'){
            numerador=num1*num2;
            denominador=div1*div2;
            max_divisor=max_divisor_comum(numerador, denominador);
            if(numerador < 0 && denominador < 0)
                printf("%d/%d = %d/%d\n", -1*numerador, -1*denominador, -1*(numerador/max_divisor), -1*(denominador/max_divisor));
            else if(denominador < 0)
                printf("-%d/%d = -%d/%d\n", numerador, -1*denominador, numerador/max_divisor, -1*(denominador/max_divisor));
            else
                printf("%d/%d = %d/%d\n", numerador, denominador, numerador/max_divisor, denominador/max_divisor);
        }else{
            numerador=num1*div2;
            denominador=num2*div1;
            max_divisor=max_divisor_comum(numerador, denominador);
            if(numerador < 0 && denominador < 0)
                printf("%d/%d = %d/%d\n", -1*numerador, -1*denominador, -1*(numerador/max_divisor), -1*(denominador/max_divisor));
            else if(denominador < 0)
                printf("-%d/%d = %d/%d\n", numerador, -1*denominador, numerador/max_divisor, -1*(denominador/max_divisor));
            else
                printf("%d/%d = %d/%d\n", numerador, denominador, numerador/max_divisor, denominador/max_divisor);
        }
    }

    return 0;
}

int max_divisor_comum(int numerador, int denominador){
    int resto=1, resposta=1, aux;
    // retirando o sinal negativo
    if(numerador < 0)
        numerador=-1*numerador;
    if(denominador < 0)
        denominador=-1*denominador;
    // organizando quem é maior que quem
    if(denominador > numerador){
        aux=numerador;
        numerador=denominador;
        denominador=aux;
    }
    // calculando o MDC:
    if(numerador == denominador)
        return numerador;
    if(numerador%denominador == 0)
        return denominador;
    while(resto>0){
        numerador/denominador;
        resto=numerador%denominador;
        numerador=denominador;
        if(resto != 0)
            resposta=resto;
        denominador=resto;
    }
    return resposta;
}
