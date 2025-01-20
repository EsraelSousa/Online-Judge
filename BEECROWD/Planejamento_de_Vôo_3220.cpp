#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <assert.h>
#include <iomanip>
#include <numeric>
#include <string.h>
#include <queue>

using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef vector<int> vi;
typedef long long ll;
#define sz(x) (int)(x.size())
#define all(x) x.begin(), x.end()
#define ii pair<int, int>
#define ff first
#define ss second

const int MAXN = 2505;

bool adj[MAXN][MAXN]; // Adjacência da árvore
int grau[MAXN]; // Grau de cada nó
int component[MAXN];
bool visited[MAXN];
int n;

void dfs(int v, int dist, int &maxDist, int &farthestNode) {
    visited[v] = true;
    if (dist > maxDist) {
        maxDist = dist;
        farthestNode = v;
    }
    for (int u=1; u<=n; u++) {
        if (!visited[u] && adj[v][u]) {
            dfs(u, dist + 1, maxDist, farthestNode);
        }
    }
}

void dfs(int v, int idComp){
    component[v] = idComp;
    for(int u=1; u<=n; u++)
        if(component[u] != idComp && adj[v][u]) 
            dfs(u, idComp);
}

int calculateDiameter() {
    int maxDist = 0, peripheral1 = 1;
    // Primeira DFS para encontrar o nó mais distante de um nó arbitrário (1)
    memset(visited, 0, sizeof(visited));
    dfs(1, 0, maxDist, peripheral1);

    // Segunda DFS a partir do nó mais distante encontrado para encontrar o diâmetro
    maxDist = 0;
    int peripheral2 = peripheral1;
    memset(visited, 0, sizeof(visited));
    dfs(peripheral1, 0, maxDist, peripheral2);

    // O valor de maxDist agora é o diâmetro do grafo
    return maxDist;
}

ii edgeCenter(int idComponent) {
    queue<int> q;
    // Inicialmente adiciona todas as folhas à fila
    for (int i = 1; i <= n; i++) {
        if (grau[i] == 1 && component[i] == idComponent) {
            q.push(i);
        }
    }

    int last = -1, secondLast = -1;

    // Elimina folhas iterativamente
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        secondLast = last;
        last = u;
        for (int v = 1; v <= n; v++) {
            if (adj[u][v]) {
                //adj[u][v] = adj[v][u] = false; // Remove aresta
                grau[v]--;
                if (grau[v] == 1) {
                    q.push(v); // Adiciona nova folha
                }
            }
        }
    }
    return {secondLast, last}; // Aresta central
}

void addConection(int a, int b){
    adj[a][b] = adj[b][a] = 1;
}

void rmConection(int a, int b){
    adj[a][b] = adj[b][a] = 0;
}

void solve() {
    cin >> n;
    // Inicializa a matriz de adjacência e grau
    for (int i = 1; i <= n; i++) {
        grau[i] = 0;
        for (int j = 1; j <= n; j++) {
            adj[i][j] = false;
        }
    }
    // Lê as arestas e constrói a árvore
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = adj[v][u] = true;
        grau[u]++;
        grau[v]++;
    }
    ii edgeRm = edgeCenter(0);
    adj[edgeRm.ff][edgeRm.ss] = adj[edgeRm.ss][edgeRm.ff] = 0;
    dfs(edgeRm.ss, 1);
    for(int i=1; i<=n; i++){
        grau[i] = 0;
        for(int u=1; u<=n; u++)
            grau[i] += adj[i][u];
    }
    ii edgeT1 = edgeCenter(0);
    ii edgeT2 = edgeCenter(1);
    ii newEdge = {edgeT1.ff, edgeT2.ff};
    addConection(newEdge.ff, newEdge.ss);
    int bestPath = calculateDiameter();
    rmConection(newEdge.ff, newEdge.ss);
    addConection(edgeT1.ff, edgeT2.ss);
    if(calculateDiameter() < bestPath){
        bestPath = calculateDiameter();
        newEdge = {edgeT1.ff, edgeT2.ss};
    }
    rmConection(edgeT1.ff, edgeT2.ss);
    addConection(edgeT1.ss, edgeT2.ff);
    if(calculateDiameter() < bestPath){
        bestPath = calculateDiameter();
        newEdge = {edgeT1.ss, edgeT2.ff};
    }
    rmConection(edgeT1.ss, edgeT2.ff);
    addConection(edgeT1.ss, edgeT2.ss);
    if(calculateDiameter() < bestPath){
        bestPath = calculateDiameter();
        newEdge = {edgeT1.ss, edgeT2.ss};
    }
    cout << bestPath << '\n';
    cout << edgeRm.ff << ' ' << edgeRm.ss << '\n';
    cout << newEdge.ff << ' ' << newEdge.ss << '\n';
}

int main() {
    fast;
    int tes = 1;
    // cin >> tes;
    while (tes--) {
        solve();
    }
    return 0;
}
