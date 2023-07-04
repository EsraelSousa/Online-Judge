#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

const int MAX = 1e4+5;
int palpite[MAX], erro[MAX];
int chave[MAX], qtdV[MAX];
int cont[MAX];
map<int, int> qtds;

int binFinf(int P, int x){
    int ans = P;
    int l=1, m, r = P;
    while(l <= r){
        m = l + (r-l)/2;
        if(chave[m] >= x){
            ans = m;
            r = m-1;
        }
        else  l = m+1;
    }
    return ans;
}

int main(){
    fast
    int n;
    bool flag;
    set<int> ans;
    cin >> n;
    for(int i=1; i<=n; i++) cin >> palpite[i];
    for(int i=1; i<=n; i++){
        cin >> erro[i];
        if(qtds.find(erro[i]) == qtds.end()) qtds[ erro[i] ] = 0;
        qtds[ erro[i] ]++;
    }
    map<int, int>::iterator itm = qtds.begin();
    int P = 1;
    while(itm != qtds.end()){
        chave[P] = itm->first;
        qtdV[P++] = itm->second;
        itm++; 
    }
    for(int i=1; i<=n; i++){
        int valor = palpite[1] + erro[i];
        if(valor < 1 || valor > 1e9) continue;
        flag = 1;
        memset(cont, 0, sizeof(cont));
        for(int j=1; j<=n && flag; j++){
            int x = abs(palpite[j] - valor);
            int p = binFinf(P, x);
            if(chave[p] != x) flag = 0;
            if(qtdV[p] == cont[p]) flag = 0;
            cont[p]++;
        }
        if(flag) ans.insert(valor);
    }
    for(int i=1; i<=n; i++){
        int valor = palpite[1] - erro[i];
        if(valor < 1 || valor > 1e9) continue;
        flag = 1;
        memset(cont, 0, sizeof(cont));
        for(int j=1; j<=n && flag; j++){
            int x = abs(palpite[j] - valor);
            int p = binFinf(P, x);
            if(chave[p] != x) flag = 0;
            if(qtdV[p] == cont[p]) flag = 0;
            cont[p]++;
        }
        if(flag) ans.insert(valor);
    }
    set<int>:: iterator it = ans.begin();
    while(it != ans.end()){
        cout << *it << "\n";
        it++;
    }
    return 0;
}