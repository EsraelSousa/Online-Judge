/*
Para fazer esse problema basta saber o periodo pesiano na sequencia = 1500
Para calcular o numero de fibonacci podemos guardar a sequencia em um vetor
Para fazer o exponenciação usamos exponenciação rápida
*/
#include <bits/stdc++.h>

using namespace std;

int mypow(int base, int expoente, int modulo){
    int ans = 1;
    while(expoente){
        if(expoente & 1) ans = (ans * base)%modulo;
        base = (base * base) % modulo;
        expoente >>=1;
    }
    return ans;
}

int main(){
    //ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int fibonacci[1550];
    int testes;
    char numero[10005];
    // calcular a sequencia
    fibonacci[0] = 0;
    fibonacci[1] = fibonacci[2] = 1;
    for(int i=3; i<=1510; i++) fibonacci[i] = (fibonacci[i-1] + fibonacci[i-2])%1000;

    scanf("%d", &testes);
    while(testes--){
        scanf("%s", numero);
        int tamanho = strlen(numero);
        int n_esimo = 0;
        for(int i=0; i<tamanho; i++)
            if(numero[tamanho-i-1] == '1')
                n_esimo = (n_esimo + mypow(2, i, 1500)) % 1500;
        //printf("%d\n", n_esimo);
        printf("%03d\n", fibonacci[n_esimo]);
    }
    return 0;
}