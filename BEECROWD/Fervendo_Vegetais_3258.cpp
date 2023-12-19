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

int main(){
    fast
    int n;
    long double T;
    priority_queue<pair<long double, int>> fila;
    cin >> T >> n;
    vector<long double> vegetais(n);
    vi cortes(n, 1);
    long double menor = 1e18;
    for(int i=0; i<n; i++){
        cin >> vegetais[i];
        menor = min(menor, vegetais[i]);
        fila.push({vegetais[i], i});
    }
    int ans = 0;
    while(menor/fila.top().ff < T){
        auto atual = fila.top();
        fila.pop();
        ans++;
        cortes[ atual.ss ]++;
        int novo = vegetais[ atual.ss ] / cortes[ atual.ss ];
        menor = min(menor, (long double)novo);
        fila.push({novo, atual.ss});
    }
    cout << ans << '\n';
    return 0;
}