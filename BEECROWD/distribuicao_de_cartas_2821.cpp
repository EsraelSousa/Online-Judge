/*A ideia deste problema é apenas fazer uma busca binaria no valor maximo*/
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 65;
int valor[MAXN];
int n, k;

int valueCarta(string& c){
    if(c == "A") return 1;
    if(c == "Q") return 12;
    if(c == "J") return 11;
    if(c == "K") return 13;
    if(c == "10") return 10;
    return c[0]-'0';
}

int contPlays(int X){
    int ans = 1;
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(sum + valor[i] > X){
            sum = 0;
            ans++;
        }
        sum += valor[i];
    }
    return ans;
}

int contMaxQtdCartas(int X){
    int ans = 0;
    int cont = 0, sum = 0;
    sum = 0;
    for(int i=1; i<=n; i++){
        if(sum + valor[i] > X){
            ans = max(ans, cont);
            sum = valor[i];
            cont  = 1;
        }
        else{
            sum += valor[i];
            cont++;
        }
    }
    return max(ans, cont);
}

int main(){
    cin >> n >> k;
    string carta;
    for(int i=1; i<=n; i++){
        cin >> carta;
        valor[i] = valueCarta(carta);
    }
    int l = 1, r = 800, m, ans = 0;
    while(l <= r){
        m = l + (r-l)/2;
        if(contPlays(m) == k){
            ans = m;
        }
        if(contPlays(m) > k){
            l = m+1;
        }
        else 
            r = m-1;
    }
    cout << contMaxQtdCartas(ans) << ' ' << ans << '\n';
    return 0;
}
