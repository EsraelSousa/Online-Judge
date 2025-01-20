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

vector<ii> pecas[2][27];
bool vis[2][27][4];
bool isINF = 0;

void dfs(int sinal, int peca, int lado){
	if(isINF) return;
	if(vis[sinal][peca][lado]){
		isINF = 1;
		return;
	}
	sinal = (sinal + 1)%2;
	for(int t=0; t<pecas[sinal][peca].size(); t++)
		dfs(sinal, lado, pecas[sinal][lado][t].ss);
}

int main(){
	fast
	int n;
	string s;
	cin >> n;
	for(int p=1; p<=n; p++){
		cin >> s;
		for(int i=0; i<8; i+=2){
			if(s[i] == '0') continue;
			int l = s[i]-'A';
			int op = (s[i+1] == '+');
			pecas[op][l].push_back({p, i/2});
		}
	}
	for(int l=0; l<2; l++)
		for(int i=0; i<26; i++)
			for(int t=0; t<pecas[l][i].size(); t++)
				dfs(l, i, pecas[l][i][t].ss);
	return 0;
}