#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> binarios;

void gerarBinarios(){
    queue<ll> fila;
    fila.push(1LL);
    ll at, limite = 111111111111;
    int n = 4095;
    while(n--){
        at = fila.front();
        fila.pop();
        binarios.push_back(at);
        at *= 10;
        fila.push(at);
        fila.push(at+1);
    }
}

ll read_int() {
    bool minus = false;
    ll result = 0;
    char ch;
    ch = getchar_unlocked();
    if(ch == EOF) exit(0);
    while (1) {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar_unlocked();
    }
    if (ch == '-') minus = true;
    else result = ch-'0';
    while (1) {
        ch = getchar_unlocked();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus) return -result;
    else return result;
}

int main(){
    ll n, ans = -1;
    gerarBinarios();
    //sort(binarios.begin(), binarios.end());
    while(1){
        n = read_int();
        ans = (n > 1)? -1 : 1;
        for(int i=1; i<4095 && ans < 0; i++){
            if(binarios[i] % n == 0) ans = binarios[i];
        }
        printf("%lld\n", ans);
        ans = -1;
    }
    return 0;
}