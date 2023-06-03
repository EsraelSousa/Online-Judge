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

const int MAXN = 1e4+5;
int pai[MAXN], peso[MAXN];

int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void unionV(int a, int b){
    a = find(a);
    b = find(b);
    if(a == b) return;
    if(peso[a] < peso[b])
        pai[a] = b;
    else if(peso[a] > peso[b])
        pai[b] = a;
    else{
        pai[a] = b;
        peso[b]++;
    }
}

int main(){
    fast
    int n, m, q;
    int u, v;
    bool flag = 0;
    while(cin >> n >> m >> q){
    	for(int i=1; i<=n; i++) pai[i] = i, peso[i] = 0;
    	while(m--){
    		cin >> u >> v;
    		unionV(u, v);
    	}
    	if(flag) cout << "\n";
    	while(q--){
    		cin >> u >> v;
    		u = find(u);
    		v = find(v);
    		cout << ((u == v)? "S\n" : "N\n");
    	}
    	flag = 1;
    }
    return 0;
}
