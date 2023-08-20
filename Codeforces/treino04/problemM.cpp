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
vi reis;

int main(){
    fast
    int Q, rei = 1, idPessoa = 2;
    cin >> Q;
    pai[1] = 1;
    reis.push_back(1);
    while(Q--){
        int op, id;
        cin >> op >> id;
        if(op == 2){
            if(id == reis[ sz(reis)-1 ]){
                morreu[id] = 1;
                bool flag = 0;
                // get child
                for(auto &x: adj[id]){
                    if(!morreu[x]){
                        reis.push_back(x);
                        flag = 1;
                        break;
                    }
                }
                // get brother
                if(!flag){
                    id = pai[id];
                    for(auto &x: adj[id]){
                        if(!morreu[x]){
                            reis.push_back(x);
                            flag = 1;
                            break;
                        }
                    }
                }
            }
            else{
                morreu[id] = 1;
            }
            cout << reis[ sz(reis)-1 ] << '\n';
        }
        else{
            pai[idPessoa] = id; 
            adj[id].push_back(idPessoa++);
        }
    }
    return 0;
}