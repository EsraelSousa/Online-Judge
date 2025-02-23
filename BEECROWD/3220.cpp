#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

vi wxor(vi &s) {
    int n = sz(s);
    vi ans = s;
    int allXor = 0;

    // Calcula o XOR de todos os elementos de s
    for (int v : s)
        allXor ^= v;

    // Modifica s[i] e calcula os novos valores para ans
    for (int i = 0; i < n; i++) {
        int aux = s[i];          // Guarda o valor original de s[i]
        s[i] = allXor;           // Modifica s[i]
        ans[i] = allXor ^ aux;   // Calcula o novo valor de ans[i] (XOR de todos, exceto s[i])
        allXor ^= aux;           // Atualiza o XOR removendo o valor anterior de s[i]
    }
    allXor = 0;

    // Calcula o XOR de todos os elementos de s
    for (int v : s)
        allXor ^= v;
    ans[0] = allXor;
    return ans;
}


int main(){
    fast
    int n, m , k;
    while(cin >> n >> m >> k && (n+m+k)){
        vi s(n);
        int X = 0;
        for(int &x: s){
            cin >> x;
            X ^= x;
        }
        //cout << X << " xor all\n";
        m %= n;
        while(m--){
            /*for(auto v: s)
                cout << v << ' ';
            cout << '\n';*/
            s = wxor(s);
        }
        /*for(auto v: s)
                cout << v << ' ';
            cout << '\n';*/
        cout << s[k-1] << '\n';
    }
    return 0;
}