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

struct Item {
    int peso;
    int valor;
};

set<int> knapsack(int capacidade, const vector<Item>& itens) {
    int n = itens.size();
    vector<vector<int>> matriz(n + 1, vector<int>(capacidade + 1, 0));
    set<int> quantidade;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= capacidade; ++j) {
            if (itens[i - 1].peso <= j) {
                matriz[i][j] = max(matriz[i - 1][j - itens[i - 1].peso] + itens[i].valor, matriz[i - 1][j]);
            } else {
                matriz[i][j] = matriz[i - 1][j];
            }
        }
    }

    for(int i=n; i>=1; i--){
        if(matriz[i][capacidade] != matriz[i-1][capacidade]){
            quantidade.insert(i);
            capacidade -= itens[i].peso;
        }
    }

    return quantidade;
}

int main(){
    fast
    int N, T;
    cin >> N >> T;
     vector<Item> itens(N);
    for(auto &x: itens)
        cin >> x.peso >> x.valor;
    set<int> ans = knapsack(T, itens);
    cout << ans.size() << '\n';
    for(auto &x: ans)
        cout << x << ' ';
    cout << '\n';
    return 0;
}