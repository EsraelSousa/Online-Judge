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

const int MAXN = 15;

vi adj[MAXN+5];

int main(){
    fast
    int n = 5, m;
    cin >> n >> m;
    const int T = n;
    while(m--){
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    int a, b;
    cin >> a >> b;
    
    //cout << bitset<6>(5).to_string() << '\n';
    for(int i=0; i<(1 << n); i++){
        if(a == 1 && i > 0) // impossible
            break;
        int maxDefeito = 0;
        string colors = bitset<15>(i).to_string();
        reverse(all(colors));
        colors = colors.substr(0, n);
        reverse(all(colors));
        for(int u=0; u<n; u++){
            int countEqual = 0;
            for(auto v: adj[u]){
                countEqual += (colors[u] == colors[v]);
            }
            maxDefeito = max(maxDefeito, countEqual);
        }

        if(maxDefeito <= b){
            cout << "DEU BOA, ADAM\n";
            for(int j=0; j<n; j++)
                cout << ((colors[j] == '1')? 2 : 1);
            cout << '\n';
            exit(0);
        }
    }
    cout << "FOI MAL, ADAM\n";
    return 0;
}