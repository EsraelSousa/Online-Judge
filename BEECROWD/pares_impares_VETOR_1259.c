<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int funcao_ordenamento_crescente(const void * a, const void * b);
int funcao_ordenamento_decrescente(const void * a, const void * b);

int main(){
    int qtd_numero, valor, i, cont_par=0, cont_impa=0;
    scanf("%d", &qtd_numero);
    int aux[qtd_numero], aux1[qtd_numero], aux2[qtd_numero];

    for(i=0;i<qtd_numero;i++){
        scanf("%d", &valor);
        if(valor%2==0){
            aux1[cont_par]=valor;
            cont_par++;
        }else{
            aux2[cont_impa]=valor;
            cont_impa++;
        }
    }
    int vetor_par[cont_par], vetor_impa[cont_impa];
    for(i=0;i<cont_par;i++)
        vetor_par[i]=aux1[i];
    for(i=0;i<cont_impa;i++)
        vetor_impa[i]=aux2[i];
    qsort(vetor_par, cont_par, sizeof(int), funcao_ordenamento_crescente);
    qsort(vetor_impa, cont_impa, sizeof(int), funcao_ordenamento_decrescente);
    for(i=0;i<cont_par;i++)
        printf("%d\n", vetor_par[i]);
    for(i=0;i<cont_impa;i++)
        printf("%d\n", vetor_impa[i]);
    return 0;
}

int funcao_ordenamento_crescente(const void * a, const void * b)
{
    if (*(int *)a == * (int *)b){
        return 0;
    }else if (*(int *)a < *(int*)b){
        return -1;
    }else{
        return 1;
    }
}

int funcao_ordenamento_decrescente(const void * a, const void * b)
{
    if (*(int *)a == * (int *)b){
        return 0;
    }else if (*(int *)a < *(int*)b){
        return 1;
    }else{
        return -1;
    }
}
=======
#include <stdio.h>
#include <stdlib.h>

int funcao_ordenamento_crescente(const void * a, const void * b);
int funcao_ordenamento_decrescente(const void * a, const void * b);

int main(){
    int qtd_numero, valor, i, cont_par=0, cont_impa=0;
    scanf("%d", &qtd_numero);
    int aux[qtd_numero], aux1[qtd_numero], aux2[qtd_numero];

    for(i=0;i<qtd_numero;i++){
        scanf("%d", &valor);
        if(valor%2==0){
            aux1[cont_par]=valor;
            cont_par++;
        }else{
            aux2[cont_impa]=valor;
            cont_impa++;
        }
    }
    int vetor_par[cont_par], vetor_impa[cont_impa];
    for(i=0;i<cont_par;i++)
        vetor_par[i]=aux1[i];
    for(i=0;i<cont_impa;i++)
        vetor_impa[i]=aux2[i];
    qsort(vetor_par, cont_par, sizeof(int), funcao_ordenamento_crescente);
    qsort(vetor_impa, cont_impa, sizeof(int), funcao_ordenamento_decrescente);
    for(i=0;i<cont_par;i++)
        printf("%d\n", vetor_par[i]);
    for(i=0;i<cont_impa;i++)
        printf("%d\n", vetor_impa[i]);
    return 0;
}

int funcao_ordenamento_crescente(const void * a, const void * b)
{
    if (*(int *)a == * (int *)b){
        return 0;
    }else if (*(int *)a < *(int*)b){
        return -1;
    }else{
        return 1;
    }
}

int funcao_ordenamento_decrescente(const void * a, const void * b)
{
    if (*(int *)a == * (int *)b){
        return 0;
    }else if (*(int *)a < *(int*)b){
        return 1;
    }else{
        return -1;
    }
}
>>>>>>> refs/remotes/origin/master
