/*
Para esse problema foi usado algoritmo caixa preta
Algoritmo: FFT do cp algorithm
lá tem uma parte no final que fala de problemas relacionados
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

using cd = complex<double>;
const double PI = acos(-1);

void fft(vector<cd> & a, bool invert) {
    int n = a.size();
    if (n == 1)
        return;

    vector<cd> a0(n / 2), a1(n / 2);
    for (int i = 0; 2 * i < n; i++) {
        a0[i] = a[2*i];
        a1[i] = a[2*i+1];
    }
    fft(a0, invert);
    fft(a1, invert);

    double ang = 2 * PI / n * (invert ? -1 : 1);
    cd w(1), wn(cos(ang), sin(ang));
    for (int i = 0; 2 * i < n; i++) {
        a[i] = a0[i] + w * a1[i];
        a[i + n/2] = a0[i] - w * a1[i];
        if (invert) {
            a[i] /= 2;
            a[i + n/2] /= 2;
        }
        w *= wn;
    }
}

vector<ll> multiply(vector<ll> const& a, vector<ll> const& b) {
    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < a.size() + b.size()) 
        n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++)
        fa[i] *= fb[i];
    fft(fa, true);

    vector<ll> result(n);
    for (int i = 0; i < n; i++)
        result[i] = round(fa[i].real());
    return result;
}


int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int D1, D2, query, k;
    cin >> D1 >> D2 >> query;
    vector<ll> ans, aux(max(D1, D2));
    k = 0;
    for(int i=0; i<D1; i++){
        cin >> aux[i];
        k = max(1LL * k, aux[i]);
    }
    vector<ll> d1(k+1, 0);
    for(int i=0; i<D1; i++)
        d1[ aux[i] ]++;
    k = 0;
    for(int i=0; i<D2; i++){
        cin >> aux[i];
        k = max(1LL * k, aux[i]);
    }
    vector<ll> d2(k+1, 0);
    for(int i=0; i<D1; i++)
        d2[ aux[i] ]++;
    ans = multiply(d1, d2);
    /*
    for(auto x: d1) cout << x << ' ';
    cout << '\n';
    for(auto x: d2) cout << x << ' ';
    cout << '\n';
    ans = multiply(d1, d2);
    for(auto x: ans) cout << x << ' ';
    cout << '\n';*/
    while(query--){
        cin >> k;
        cout << ans[k] << '\n';
    }
    return 0;
}