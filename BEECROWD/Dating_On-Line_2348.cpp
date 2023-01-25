#include <bits/stdc++.h>

using namespace std;

double _PI = acos(-1.0);

bool comp(int a, int b){
    return a > b;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    double ans = 0;
    cout << fixed << setprecision(3);
    cin >> n;
    vector<int> valores(n), aux(n);
    for(int i=0; i<n; i++)  cin >> valores[i];
    sort(valores.begin(), valores.end(), comp);
    for(int i=0, j = 0; j<n; j+=2, i++){
        aux[n/2+i] = valores[j];
        if(i)
            aux[n/2-i] = valores[j+1];
        else j--; // não posso pular dois ainda
    }
    if(n % 2 == 0) aux[0] = valores[n-1];
    for(int i=0; i<n-1; i++)
        ans += 0.5 * sin(2*_PI/n) * aux[i] * aux[i+1];
    ans += 0.5 * sin(2*_PI/n) * aux[n-1] * aux[0];
    cout << ans << '\n';
    return 0;
}