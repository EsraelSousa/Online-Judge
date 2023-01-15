<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int primo_ou_nao(int valor);

int main(){
    int qtd_consuta, valor, i, primo;
    scanf("%d", &qtd_consuta);
    for(i=0;i<qtd_consuta;i++){
        scanf("%d", &valor);
        primo=primo_ou_nao(valor+2);
        if(valor%7==0 && valor%2!=0 && primo ==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

int primo_ou_nao(int valor){
    int cont=0, i;
    for(i=1;i<=sqrt(valor);i++){
        if(valor%i==0)
            cont++;
        if(cont>=2)
            break;
    }
    if(cont==2)
        return 1;
    else
        return 0;
}
=======
#include <stdio.h>
#include <math.h>

int primo_ou_nao(int valor);

int main(){
    int qtd_consuta, valor, i, primo;
    scanf("%d", &qtd_consuta);
    for(i=0;i<qtd_consuta;i++){
        scanf("%d", &valor);
        primo=primo_ou_nao(valor+2);
        if(valor%7==0 && valor%2!=0 && primo ==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

int primo_ou_nao(int valor){
    int cont=0, i;
    for(i=1;i<=sqrt(valor);i++){
        if(valor%i==0)
            cont++;
        if(cont>=2)
            break;
    }
    if(cont==2)
        return 1;
    else
        return 0;
}
>>>>>>> refs/remotes/origin/master
