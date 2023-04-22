#include <bits/stdc++.h>
#include <cstring>

using namespace std;

string numero;
int num_mod, tam_num;
int matriz[1005][1005];

int resposta(int posicao, int valor){
    if(posicao == tam_num)
        return valor==0;
    if(matriz[posicao][valor] != -1)
        return matriz[posicao][valor];
    if(numero[posicao] != '?')
        return resposta(posicao+1, (10*valor+ numero[posicao]-'0')%num_mod);
    else{
        int i = (posicao==0);
        for(; i<10; i++){
            if(resposta(posicao+1, (10*valor+i)%num_mod)){
                numero[posicao] = '0' + i;
                return 1;
            }
        }
    }
    return matriz[posicao][valor] = 0;
}

int main(){
    cin >> numero >> num_mod;
    tam_num = numero.size();
    memset(matriz, -1, sizeof(matriz));
    cout << (resposta(0, 0) ? numero : "*") <<  endl;
    return 0;
}
