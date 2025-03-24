#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> unidades = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
vector<string> especiais = {"dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
vector<string> dezenas = {"", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
vector<string> centenas = {"", "cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};

string numeroPorExtenso(int num) {
    if (num == 0) return "zero";
    if (num == 100) return "cem"; // Exceção para 100 exato

    string resultado;

    int milhar = num / 1000;
    int centena = (num % 1000) / 100;
    int dezena = (num % 100) / 10;
    int unidade = num % 10;

    // Milhares
    if (milhar > 0) {
        if (milhar == 1) {
            resultado += "mil";
        } else {
            resultado += numeroPorExtenso(milhar) + " mil";
        }
        if (centena > 0 || dezena > 0 || unidade > 0) resultado += " e ";
    }

    // Centenas
    if (centena > 0) {
        resultado += (num % 100 == 0 && centena == 1) ? "cem" : centenas[centena];
        if (dezena > 0 || unidade > 0) resultado += " e ";
    }

    // Dezenas especiais (10-19)
    if (dezena == 1) {
        resultado += especiais[unidade];
    } else {
        if (dezena > 1) {
            resultado += dezenas[dezena];
            if (unidade > 0) resultado += " e ";
        }
        if (unidade > 0) {
            resultado += unidades[unidade];
        }
    }

    return resultado;
}

int main() {
    int num;
    while (cin >> num) {
        cout << numeroPorExtenso(num) << endl;
    }
    return 0;
}
