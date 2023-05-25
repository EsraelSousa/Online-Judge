/*
Tesoura corta papel
Papel cobre pedra
Pedra derruba lagarto
Lagarto adormece Spock
Spock derrete tesoura
Tesoura prende lagarto
Lagarto come papel
Papel refuta Spock
Spock vaporiza pedra
Pedra quebra tesoura
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int resposta1(char *palavra1);
int resposta2(char *palavra2);
int ganhador(int resultado1, int resultado2);
int main(){
    char *pa1, *pa2;
    int qtd_teste,i,resultado1,resultado2,ganhador_jogo;
    pa1=(char *)malloc(sizeof(char)*13);
    pa2=(char *)malloc(sizeof(char)*13);
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%s %s", pa1, pa2);
        resultado1=resposta1(pa1);
        resultado2=resposta2(pa2);
        ganhador_jogo=ganhador(resultado1, resultado2);
        if(ganhador_jogo==0)
            printf("empate\n");
        else if(ganhador_jogo==1)
            printf("rajesh\n");
        else
            printf("sheldon\n");
    }
    free(pa1);
    free(pa2);
    return 0;
}
int resposta1(char *palavra1){
    if(strcmp(palavra1, "tesousa")==0)
        return  1;
    if(strcmp(palavra1, "papel")==0)
        return  2;
    if(strcmp(palavra1, "pedra")==0)
        return  3;
    if(strcmp(palavra1, "lagarto")==0)
        return  4;
    if(strcmp(palavra1, "spock")==0)
        return  5;
}
int resposta2(char *palavra2){
    if(strcmp(palavra2, "tesousa")==0)
        return  1;
    if(strcmp(palavra2, "papel")==0)
        return  2;
    if(strcmp(palavra2, "pedra")==0)
        return  3;
    if(strcmp(palavra2, "lagarto")==0)
        return  4;
    if(strcmp(palavra2, "spock")==0)
        return  5;
}
int ganhador(int resultado1, int resultado2){
    if(resultado1==resultado2)
        return 0;
    else if(resultado1==1){
        if(resultado2==2 || resultado2==4)
            return 1;
        else
            return 2;
    }
    else if(resultado1==2){
        if(resultado2==3 || resultado2==5)
            return 1;
        else
            return 2;
    }
    else if(resultado1==3){
        if(resultado2==1 || resultado2==4)
            return 1;
        else
            return 2;
    }
    else if(resultado1==4){
        if(resultado2==2 || resultado2==5)
            return 1;
        else
            return 2;
    }
    else if(resultado1==5){
        if(resultado2==1 || resultado2==3)
            return 1;
        else
            return 2;
    }
}
