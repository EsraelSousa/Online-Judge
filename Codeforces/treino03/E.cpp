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

const int MAXN = 1e2+5;
vi adj[MAXN];

void bfs(int v, map<int, string> &names){
    queue<int> fila;
    fila.push(v);
    while(fila.size()){
        v = fila.front();
        fila.pop();
        cout << names[v] << '\n';
        for(auto &x: adj[v])
            fila.push(x);
    }
}

int main(){
    fast
    int n, t = 1, v;
    map<string, int> ids;
    map<int, string> names;
    cin >> n;
    vi hasChild(n+5, 1);
    while(n--){
        string a, b;
        cin >> a >> b;
        int id1, id2;
        if(ids.find(a) == ids.end())
            ids[a] = t++;
        if(ids.find(b) == ids.end())
            ids[b] = t++;
        id1 = ids[a];
        id2 = ids[b];    
        names[id1] = a;
        names[id2] = b;

        adj[id2].push_back(id1);
        hasChild[id1] = 0;
    }
    for(int i=1; i<t; i++)
        if(hasChild[i])
            n = i;
    bfs(n, names);
    return 0;
}