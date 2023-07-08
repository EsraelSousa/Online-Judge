#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

ll mypow(ll b, ll a, ll mod){
    ll ans = 1;
    b %= mod;
    while(a){
        if(a & 1)
            ans = (ans * b) % mod;
        b = (b * b) % mod;
        a >>= 1;
    }
    return ans;
}

void solve(){
    ll n, s;
    ll resto = 0, potencia = 1; // potencia fica sendo 2^i
    string b;
    cin >> n >> s >> b;
    /*
    versão com exponenciação binária é mais lento, passou em 967 ms, da pra retirar 
    pelas propriedades da ponticiação 2^n = 2 * 2^(n-1) -> Tfg me passou essa ideia
    for(int i=0; i<s; i++){
        if(b[s-1-i] == '1'){
            resto += mypow(2, i, n);
        }
    }
    */
    for(int i=0; i<s; i++){
        if(b[s-i-1] == '1'){
            resto += potencia;
        }
        potencia *= 2; // proxima potencia de 2
        potencia %= n; // tiro o modulo n
    }
    resto %= n; // posso tirar o modulo do resto só no final pq nunca é maior que 10^11
    cout << ((resto>0)? "Phishing de criptomoeda.\n" : "To the moon!\n");
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--) solve();
    return 0;
}