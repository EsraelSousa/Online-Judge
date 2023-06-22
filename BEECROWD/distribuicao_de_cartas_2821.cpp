#include <bits/stdc++.h>

using namespace std;

const int MAXN = 65;
int valor[MAXN];
int n, k;

int valueCarta(string c){
    if(c == "A") return 1;
    if(c == "Q") return 12;
    if(c == "J") return 11;
    if(c == "K") return 13;
    if(c == "10") return 10;
    return c[0]-'1';
}

int contV(int X){
    int ans = 1;
    int sum = 0;
    for(int i=0; i<n; i++){
        if(sum + valor[i] > X){
            sum = 0;
            ans++;
        }
        sum += valor[i];
    }
    return ans;
}

int maxCont(int X){
    int ans  = 0;
    int cont = 0, sum = 0;
    for(int i=0; i<n; i++){
        if(sum + valor[i] > X){
            ans = max(ans, cont);
            cout << sum << ' ' << cont << " cont\n";
            sum = 0;
            cont  = 0;
        }
        sum += valor[i];
        cont++;
    }
    cout << cont <<" cont\n";
    return max(ans, cont);
}

int main(){
    cin >> n >> k;
    string carta;
    for(int i=0; i<n; i++){
        cin >> carta;
        valor[i] = valueCarta(carta);
    }
    int l = 1, r = 100, m, ans = 0;
    while(l < r){
        m = l + (r-l)/2;
        if(contV(m) == k){
            ans = m;
        }
        if(contV(m) > k){
            l = m+1;
        }
        else 
            r = m-1;
    }
    ans = l;
    cout << contV(27) << " para 28\n";
    cout << maxCont(ans) << ' ' << ans << '\n';
    return 0;
    
}