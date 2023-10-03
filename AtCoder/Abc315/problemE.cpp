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

const int MAXN = 2e5+5;

vi adj[MAXN], adj1[MAXN];
bool isFila[MAXN];

int main(){
    fast
    int n;
    cin >> n;
    vi ans, grau(n+1, 0);
    for(int i=1; i<=n; i++){
        int m;
        cin >> m;
        grau[i] = m;
        while(m--){
            int x;
            cin >> x;
            adj[i].push_back(x);
            if(i > 1)
            adj1[x].push_back(i);
        }
    }
    for(auto &x: adj[1]){
        ans.push_back(x);
        isFila[x] = 1;
    }
    for(int i=0; i<sz(ans); i++){
        int v = ans[i];
        for(auto &x: adj[v]){
            if(!isFila[x]){
                ans.push_back(x);
                isFila[x] = 1;
            }
        }
    }
    priority_queue<int> fila;
    for(auto &x: ans){
        if(grau[x] == 0)
            fila.push(x);
    }
    bool flag = 0;
    while(sz(fila)){
        int v = fila.top();
        fila.pop();
        if(flag) cout << ' ';
        cout << v;
        flag = 1;
        for(auto &x: adj1[v]){
            grau[x]--;
            if(grau[x] == 0)
                fila.push(x);
        }
    }
    cout << '\n';
    return 0;
}