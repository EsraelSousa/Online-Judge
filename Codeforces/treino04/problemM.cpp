// Ideia confusa

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

const int MAXN = 1e5+5;

vi adj[MAXN];
int pai[MAXN], morreu[MAXN];

void dfs(int v, int filho, bool &achei, int &rei){
    if(v == filho || achei) return;
    if(!morreu[v]){
        achei = true;
        rei = v;
        return;
    }

    
        
}

int main(){
    fast
    int Q, rei = 1, idPessoa = 2;
    cin >> Q;
    pai[1] = 1;
    while(Q--){
        int op, id;
        cin >> op >> id;
        if(op == 2){
            
            cout << rei << '\n';
        }
        else{
            adj[id].push_back(idPessoa++);
        }
    }
    return 0;
}