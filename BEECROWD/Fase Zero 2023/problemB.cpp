#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    double a, b, c; // se for ull da WA
    ull resposta;
    char opcao;
    cin >> a >> b >> c;
    cin >> opcao;

    // A->B 3 -> 2 a * 2 / 3
    // B->A 2 -> 3 b * 3 / 2
    // C->A 2->5 c * 5 / 2
    // A->C 5->2 a * 2 / 5
    // B->C 5->3 b * 3 / 5
    // C->B 3->5 c * 5 / 3
    if (opcao == 'A') {
        // converter do C->B e B->A
        resposta = a + b * 3 / 2 + c * 5 / 2;
    } else if (opcao == 'B') {
        // converter do A->B e C->B
        resposta = b + a * 2 / 3 + c * 5 / 3;
    } else {
        // converte do A->B e B->C
        resposta = c + a * 2 / 5 + b * 3 / 5;
    }
    
    cout << resposta << '\n';
    
    return 0;
}