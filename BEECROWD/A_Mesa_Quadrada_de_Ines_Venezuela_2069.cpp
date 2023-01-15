/*
Autor: Esrael
Problema: https://www.beecrowd.com.br/judge/pt/problems/view/2069

Ideia: Dado o mdc dos dois números da entrada, vamos buscar o próximo numero perfeito
maior que o mdc e tirar a raiz dele
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll ans = 1;

ll mypow(ll base, ll expoente){
    ll res = 1;
    while(expoente){
        if(expoente & 1) res = res * base;
        base = base * base;
        expoente >>= 1; // divide por 2
    }
    return res;
}

void fatorarNumero(ll n){
    for(int i=2; i*i <= n; i++){
        if(n % i == 0){
            int cont = 0;
            while(n % i == 0){
                cont++;
                n /= i;
            }
            ans *= mypow(i, cont/2 + cont%2);
        }
    }
    if(n > 1) ans *= mypow(n, 1);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    ll Ana, Beto;
    cin >> Ana >> Beto;
    ll mdc = __gcd(Ana, Beto);
    fatorarNumero(mdc);
    cout << ans << '\n';
    return 0;
}