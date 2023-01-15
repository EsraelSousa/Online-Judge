#include <stdio.h>
#include <string.h>

int main(){
    int i, j, qtd_teste, tam, cont_7=0, cont_Q=0, cont_J=0, cont_K=0, cont_A=0, cont_outro=0, mim=1001;
    char cartas[1003];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%s", cartas);tam=strlen(cartas);
        for(j=0;j<tam;j++){
            if(cartas[j]=='Q')
                cont_Q++;
            else if(cartas[j]=='J')
                cont_J++;
            else if(cartas[j]=='K')
                cont_K++;
            else if(cartas[j]=='A')
                cont_A++;
            else if(cartas[j]=='7')
                cont_7++;
            else
                cont_outro++;
        }
        if(cont_7 < mim)
            mim=cont_7;
        if(cont_Q < mim)
            mim=cont_Q;
        if(cont_J < mim)
            mim=cont_J;
        if(cont_K < mim)
            mim=cont_K;
        if(cont_A < mim)
            mim=cont_A;
        if(tam==5){
            if(strcmp(cartas, "7QJKA")!=0)
                printf("5\n");
            else
                printf("0\n");
        }
        else if(cont_7==0 || cont_Q==0 || cont_J==0 || cont_K==0 || cont_A==0)
            printf("%d\n", tam);
        else{
        cont_outro+=cont_7 - mim;
        cont_outro+=cont_Q - mim;
        cont_outro+=cont_K - mim;
        cont_outro+=cont_J - mim;
        cont_outro+=cont_A - mim;
        printf("%d\n", cont_outro);
        }
        cont_7=0, cont_Q=0, cont_J=0, cont_K=0, cont_A=0, cont_outro=0, mim=1001;
    }
    return 0;
}
