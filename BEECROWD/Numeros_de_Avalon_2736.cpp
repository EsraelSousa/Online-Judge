#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ll memo[25][2][2];
int digits[25], tam;

ll solve(int p, bool tigth, bool last, int month, string& year){
    if(p == tam) return 1;
    ll &ans = memo[p][tigth][last];
    if(ans != -1) return ans;
    ans = 0;
    for(int i=0; i<10; i++){
        if(i == month || (last && i == year[1]-'0')) continue; // números inválidos
        if(tigth && i > digits[p]) break; // já estou criando um número maior que X
        ans += solve(p+1, tigth && i == digits[p], i == year[0]-'0', month, year);
    }
    return ans;
}

void toVector(ull n){
    tam = 0;
    while(n){
        digits[tam++] = n%10;
        n /= 10;
    }
    for(int i=0; i<tam/2; i++)
        swap(digits[i], digits[tam-i-1]);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    ll n;
    int month;
    string year;
    while(cin >> n >> month >> year){
        /*vamos ficar chutando valores e ver se a quantidade
        de números até aqule chute é igual a n -> busca binária */
        ull l = 1, r = 10000000000000000000ull;
        ull ans = -1;
        n++; // a query é de 0 a X, mas a seq é de 1 a X valida
        while(l <= r){
            ull m = l + (r-l)/2;
            toVector(m);
            memset(memo, -1, sizeof(memo)); 
            if(solve(0, 1, 0, month, year) >= n){
                ans = m;
                r = m-1;
            }
            else
                l = m+1;
        } 
        cout << ans << '\n';
    }
    return 0;
}
