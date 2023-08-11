/*
Problema simples de grandezas inversamente proporcionais
*/

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

int main(){
    fast
    ll A, B, C;
    cin >> A >> B >> C;
    ll mmc = lcm(A, lcm(B, C)); // para trabalhar com inteiros
    ll qtdTrabalhadores = mmc;
    // Vamos ordenar para ficar melhor de computar a resposta
    if(A < B) swap(A, B);
    if(B < C) swap(B, C);
    if(A < B) swap(A, B);
    // calculo para o 2ª e 3ª empresa
    // mmc / x = A / E => mmc / x = E / A => x = mmc * A / E 
    qtdTrabalhadores += mmc * A / B;
    qtdTrabalhadores += mmc * A / C;
    cout << fixed << setprecision(3) << 1.0 * A * mmc / qtdTrabalhadores <<'\n';
    return 0;
}