#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 2*1e5+5;
struct edge{
	int u, v, dist;
};
edge ares[MAXN];
int pai[MAXN], peso[MAXN];
int isDoente[MAXN];

bool comp(edge& a, edge& b){
	return a.dist > b.dist;
}

int find(int x){
	if(x == pai[x]) return x;
	return pai[x] = find(pai[x]);
}

void unio(int x, int y){
	x = find(x);
	y = find(y);
	if(peso[x] < peso[y]){
		pai[x] = y;
		isDoente[y] += isDoente[x];
	}
	else if(peso[x] > peso[y]){
		pai[y] = x;
		isDoente[x] += isDoente[y];
	}
	else{
		pai[x] = y;
		peso[y]++;
		isDoente[y] += isDoente[x];
	}
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, m, ini, u, v, p;
    ll ans = 0;
    cin >> n >> m;
    for(int i=0; i<m; i++){
    	cin >> u;
    	if(!i) ini = u;
    	isDoente[u] = 1;
    }
    for(int i=1; i<n; i++)
    	cin >> ares[i].u >>	ares[i].v >> ares[i].dist;
    sort(ares+1, ares+n, comp);
    for(int i=0; i<n; i++) pai[i] = i;
    for(int i=1; i<n; i++){
    	u = find(ares[i].u);
    	v = find(ares[i].v);
    	p = ares[i].dist;
    	if(u != v && isDoente[u] + isDoente[v] < 2)
    		unio(u, v);
    	else
    		ans += p;
    }
    cout << ans << '\n';
    return 0;
}
