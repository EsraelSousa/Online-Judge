#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <set>
#include <map>

//#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e3+5;
typedef pair<int, int> pii;

map<string, int> ids;
bool adj[MAXN][MAXN];
bool visited[MAXN];
int qtd_artigo;

int dijk(int s, int t){
	vector<int> dist(MAXN, 1e9);
	priority_queue<pii, vector<pii>, greater<pii> > fila;
	int u, v, d;
	dist[s] = 0;
	fila.push(make_pair(0, s));
	while(fila.size()){
		d = fila.top().first;
		v = fila.top().second;
		fila.pop();
		if(visited[v]) continue;
		visited[v] = 1;
		for(int i=1; i<=qtd_artigo; i++){
			if(adj[v][i] && d+1 < dist[i]){
				dist[i] = d+1;
				fila.push(make_pair(d+1, i));
			}
		}
  }
	
	return dist[t];
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, a, b;
    string u, v;
    vector<int> artigos;
    cin >> n;
    for(int i=0; i<n; i++){
    	cin >> u >> v;
    	if(ids.find(u) == ids.end())
    		ids[u] = ids.size()+1;
    	if(ids.find(v) == ids.end())
    		ids[v] = ids.size()+1;
    	a = ids[u];
    	b = ids[v];
    	adj[a][b] = 1;
    }
  
    map<string, int>:: iterator it = ids.begin();
    while(it != ids.end()){
    	artigos.push_back(it->second);
    	it++;
    }
  
    qtd_artigo = ids.size();
    for(int i=0; i<qtd_artigo-1; i++){
    	if(i == 0) adj[ artigos[i] ][ artigos[i+1] ] = 1;
    	else adj[ artigos[i] ][ artigos[i-1] ] = adj[ artigos[i] ][ artigos[i+1] ] = 1; 
    }
    it = ids.end();
    it--;
    v = it->first;
    it--;
    u = it->first;
    adj[ artigos[qtd_artigo-1] ][ artigos[qtd_artigo-2] ] = 1;
  
    cin >> u >> v;
    cout << dijk(ids[u], ids[v]) << '\n';
    return 0;
}
/*
4
Chaves Quico
Quico Chiquinha
Professor_Girafales Dona_Florinda
Chaves Dona_Clotilde
Chaves Chiquinha
*/
