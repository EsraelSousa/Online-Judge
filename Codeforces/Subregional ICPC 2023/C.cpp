#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string.h>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <cmath>
#include <numeric>
#include <string>
#include <ctype.h>
#include <tuple>

//   #include <bits/stdc++.h>
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

const int MAXN = 1e5+5;

vi adj[MAXN];
vvi lis;
vi topo;
int ispilha[MAXN];
int curtidas[MAXN];
int ans[MAXN];

void dfs(int v){
    // vamos ver qual é o lis adicionando curtidas de v
    auto it = lower_bound(all(topo), curtidas[v]);
    // ele supera o topo da pilha
    if(it == topo.end()){
        vi vet;
        vet.push_back(curtidas[v]);
        lis.push_back(vet);
        ispilha[v] = sz(lis) - 1;
        topo.push_back(curtidas[v]);
    }
    else{
        int p = (int)(it - topo.begin());
        //assert(p>=-1 && p < sz(lis));
        lis[p].push_back(curtidas[v]);
        ispilha[v] = p;
        topo[p] = curtidas[v];
    }

    // pego a resposta
    ans[v] = sz(lis);
    /*cout << v << ' ' << sz(lis) << " chama v\n";
    for(auto &x: topo)
    	cout << x << ' ';
    cout << '\n';*/
    // chama a dfs para os filhos
    for(auto &x: adj[v])
        dfs(x);
    // vamos remover da pilha
    int p = ispilha[v];
    lis[p].pop_back();
    if(sz(lis[p]) == 0){
        lis.pop_back();
        topo.pop_back();
    }
    else
    	topo[ ispilha[v] ] = lis[ ispilha[v] ][ sz(lis[ ispilha[v] ]) - 1 ];
}

int main(){
    fast
    int n;
    cin >> n;
    for(int i=2; i<=n; i++){
        int id;
        cin >> id;
        adj[id].push_back(i);
    }
    for(int i=1; i<=n; i++)
        cin >> curtidas[i];
    dfs(1);
    for(int i=2; i<=n; i++)
        cout << ans[i] << ((i==n)? '\n' : ' ');
    return 0;
}
