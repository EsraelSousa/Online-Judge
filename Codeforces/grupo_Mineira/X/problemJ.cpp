#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define fs first
#define sd second;
#define all(x) x.begin(), x.end()
#define left(x) (2*x)
#define right(x) (2*x + 1)

struct Data{
    int tamanhoSapato;
    int qtdPes;
    int majestosidade;

    bool operator<(const Data& other) const{
        if(this->majestosidade == other.majestosidade)
            return this->qtdPes < other.qtdPes;
        else
            return this->majestosidade > other.majestosidade;
    }
};

const int MAXT = 505;

int qtdSapato[MAXT][2];

int main(){
    fast
    int n, m;
    ll ans = 0;
    cin >> n >> m;
    vector<Data> k_peia(n);
    for(int i=0; i<n; i++)
        cin >> k_peia[i].qtdPes >> k_peia[i].tamanhoSapato >> k_peia[i].majestosidade;
    
    sort(all(k_peia));

    for(int i=1; i<=m; i++){
        for(int j=0; j<2; j++)
            cin >> qtdSapato[i][j];
            

    for(int i=0; i<n; i++){
        int qtdDisponivel = min(qtdSapato[ k_peia[i].tamanhoSapato ][0], qtdSapato[ k_peia[i].tamanhoSapato ][1]);
        int qtdPes = k_peia[i].qtdPes / 2;
        if(qtdPes <= qtdDisponivel){
            ans += k_peia[i].majestosidade;
            qtdSapato[ k_peia[i].tamanhoSapato ][0] -= qtdPes;
            qtdSapato[ k_peia[i].tamanhoSapato ][1] -= qtdPes;
        }
    }
    cout << ans << '\n';
    return 0;
}