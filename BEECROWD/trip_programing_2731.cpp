<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string.h>

using namespace std;

#define f first
#define s second

int n, a, vis[20];
vector< vector< pair<int, int> > > list_adj(20);

void dijkistra(int des){
	int dis[20], v, u, d, space=0;
	queue<int> caminho;
	priority_queue< pair<int, int> > fi;
	for(int i=1; i<=n; i++) dis[i]=100000000;
	dis[des]=0;
	fi.push({0, des});
	while(!fi.empty()){
		v=fi.top().s; fi.pop();
		if(vis[v]) continue;
		//if(v==1) break;
		vis[v]=1; caminho.push(v);
		for(int x=0; x< list_adj[v].size(); x++){
			u=list_adj[v][x].f, d=list_adj[v][x].s;
			if(dis[v]+d < dis[u]){
				dis[u]=dis[v]+d;
				fi.push({-dis[u], u});
			}
		}
	}
	if(dis[1]<=120){
		cout << "Will not be late. Travel time - " << dis[1] << " - best way - ";
	}else{
		cout << "It will be " << dis[1]-120 << " minutes late. Travel time - " << dis[1] << " - best way - ";
	}
	while(caminho.size()>0){
		if(space) cout << " " << caminho.front();
		else cout << caminho.front();
		caminho.pop();
		space=1;
	}
	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
	int v, w, p;
	while(cin >> n >> a && (n+a)){
		for(int i=0; i<a; i++){
			cin >> v >> w >> p;
			list_adj[v].push_back({w, p});
			list_adj[w].push_back({v, p});
		}
		cin >> v;
		dijkistra(v);
		for(int i=1; i<=n; i++) list_adj[i].clear();
		memset(vis, 0, sizeof(vis));
	}
	return 0;
}
=======
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string.h>

using namespace std;

#define f first
#define s second

int n, a, vis[20];
vector< vector< pair<int, int> > > list_adj(20);

void dijkistra(int des){
	int dis[20], v, u, d, space=0;
	queue<int> caminho;
	priority_queue< pair<int, int> > fi;
	for(int i=1; i<=n; i++) dis[i]=100000000;
	dis[des]=0;
	fi.push({0, des});
	while(!fi.empty()){
		v=fi.top().s; fi.pop();
		if(vis[v]) continue;
		//if(v==1) break;
		vis[v]=1; caminho.push(v);
		for(int x=0; x< list_adj[v].size(); x++){
			u=list_adj[v][x].f, d=list_adj[v][x].s;
			if(dis[v]+d < dis[u]){
				dis[u]=dis[v]+d;
				fi.push({-dis[u], u});
			}
		}
	}
	if(dis[1]<=120){
		cout << "Will not be late. Travel time - " << dis[1] << " - best way - ";
	}else{
		cout << "It will be " << dis[1]-120 << " minutes late. Travel time - " << dis[1] << " - best way - ";
	}
	while(caminho.size()>0){
		if(space) cout << " " << caminho.front();
		else cout << caminho.front();
		caminho.pop();
		space=1;
	}
	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
	int v, w, p;
	while(cin >> n >> a && (n+a)){
		for(int i=0; i<a; i++){
			cin >> v >> w >> p;
			list_adj[v].push_back({w, p});
			list_adj[w].push_back({v, p});
		}
		cin >> v;
		dijkistra(v);
		for(int i=1; i<=n; i++) list_adj[i].clear();
		memset(vis, 0, sizeof(vis));
	}
	return 0;
}
>>>>>>> refs/remotes/origin/master
