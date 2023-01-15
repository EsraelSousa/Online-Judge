<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int vis[100005], qtd[100005], in;
vector< vector<int> > list_adj(100005);

void DFS(int v){
	vis[v]=1;
	++in;
	for(int i=0; i<list_adj[v].size(); i++){
		if(!vis[ list_adj[v][i] ]) DFS(list_adj[v][i]);
	}
	qtd[v]=in;
	in=0;
}

int main(){
	ios_base::sync_with_stdio(0);
	int n, k, x, ans=0;
	cin >> n >> k;
	for(int i=2; i<=n; i++){
		cin >> x;
		list_adj[x].push_back(i);
	}
	DFS(1);
	//for(int i=1; i<=n; i++) cout << i << " " << qtd[i] << endl;
	//cout << endl;
	sort(qtd+1, qtd+n+1);
	//for(int i=n; i>0; i--) cout << qtd[i] << endl;
	for(int i=n; i>n-k && qtd[i]; i--) ans+=qtd[i];
	cout << ans << endl;
	return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int vis[100005], qtd[100005], in;
vector< vector<int> > list_adj(100005);

void DFS(int v){
	vis[v]=1;
	++in;
	for(int i=0; i<list_adj[v].size(); i++){
		if(!vis[ list_adj[v][i] ]) DFS(list_adj[v][i]);
	}
	qtd[v]=in;
	in=0;
}

int main(){
	ios_base::sync_with_stdio(0);
	int n, k, x, ans=0;
	cin >> n >> k;
	for(int i=2; i<=n; i++){
		cin >> x;
		list_adj[x].push_back(i);
	}
	DFS(1);
	//for(int i=1; i<=n; i++) cout << i << " " << qtd[i] << endl;
	//cout << endl;
	sort(qtd+1, qtd+n+1);
	//for(int i=n; i>0; i--) cout << qtd[i] << endl;
	for(int i=n; i>n-k && qtd[i]; i--) ans+=qtd[i];
	cout << ans << endl;
	return 0;
}
>>>>>>> refs/remotes/origin/master
