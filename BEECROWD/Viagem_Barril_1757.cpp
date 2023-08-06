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

struct edge{
	int u, v, peso;
	
	edge(){}
	
	edge(int u, int v, int p) : u(u), v(v), peso(p){}
	
	bool operator<(const edge &other) const{
		return this->peso < other.peso;
	}
};

const int MAXN = 1e2+5;

int mat[MAXN][MAXN];
int pai[MAXN];
int peso[MAXN];

int find(int x){
	if(x == pai[x]) return x;
	return pai[x] = find(pai[x]);
}

void join(int a, int b){
	a = find(a);
	b = find(b);
	
	if(peso[a] < peso[b])
		pai[a] = b;
	else if(peso[a] > peso[b])
		pai[b] = a;
	else{
		pai[a] = b;
		peso[a]++;
	}
}

void task(){
    int n, m, ans = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    	memset(mat[i], 0, sizeof(mat[i]));
    while(m--){
    	int a, b;
    	cin >> a >> b;
    	mat[a][b] = mat[b][a] = 1;
    }
    vector<edge> arestas;
    for(int i=0; i<n; i++){
    	for(int j=i+1; j<n; j++)
    		arestas.push_back(edge(i, j, mat[i][j]));
    }
    sort(all(arestas));
    for(int i=0; i<n; i++)
    	pai[i] = i, peso[i] = 0;
    
    for(auto &e: arestas){
    	if(find(e.u) != find(e.v)){
    		//cout << e.u << ' ' << e.v << ' ' << e.peso << '\n';
    		ans += e.peso;
    		join(e.u, e.v);
    		n--;
    		if(n==1) break;
    	}
    }
    cout << ans << '\n';
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--)
        task();
    return 0;
}
