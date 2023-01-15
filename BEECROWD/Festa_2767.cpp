#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAXK = 1e5+5;

int restos[MAXK];

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int homens, mulheres;
    ll k, altura;
    while(cin >> homens >> mulheres >> k){
        ll contPar = 0;
        memset(restos, 0, sizeof(restos));
        for(int i=0; i<homens; i++){
            cin >> altura;
            restos[ altura%k ]++;
        }
        for(int i=0; i<mulheres; i++){
            cin >> altura;
            for(int j = (k-altura%k)%k; j<k; j+=k)
                contPar += restos[j];
        }
        cout << contPar << '\n';
    }
    return 0;
}