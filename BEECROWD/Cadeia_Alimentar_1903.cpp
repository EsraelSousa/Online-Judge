#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;

const int MAXN = 1e5 + 5;

vector<int> adj[MAXN], adjCondensado[MAXN]; // Grafo original e condensado
int ids[MAXN], low[MAXN], scc[MAXN], grauIn[MAXN], grauOut[MAXN];
bool onStack[MAXN];
stack<int> s;
int id = 0, sccCount = 0;

// **Tarjan para encontrar Componentes Fortemente Conexas (CFCs)**
void tarjan(int v) {
    static int timer = 0;
    ids[v] = low[v] = ++timer;
    s.push(v);
    onStack[v] = true;

    for (int u : adj[v]) {
        if (ids[u] == 0) { // Nó não visitado
            tarjan(u);
            low[v] = min(low[v], low[u]);
        } else if (onStack[u]) { // Nó ainda na pilha
            low[v] = min(low[v], ids[u]);
        }
    }

    // **Se v é a raiz de uma CFC, removemos a CFC da pilha**
    if (ids[v] == low[v]) {
        while (true) {
            int u = s.top(); s.pop();
            onStack[u] = false;
            scc[u] = sccCount;
            if (u == v) break;
        }
        sccCount++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, m, u, v;
    cin >> n >> m;

    while (m--) {
        cin >> u >> v;
        adj[u].push_back(v);
    }

    // **1. Encontrar as CFCs com Tarjan**
    memset(ids, 0, sizeof(ids));
    memset(low, 0, sizeof(low));
    memset(scc, -1, sizeof(scc));
    memset(onStack, false, sizeof(onStack));

    for (int i = 1; i <= n; i++) {
        if (ids[i] == 0)
            tarjan(i);
    }

    // **2. Criar o grafo condensado**
    memset(grauIn, 0, sizeof(grauIn));
    memset(grauOut, 0, sizeof(grauOut));

    for (int v = 1; v <= n; v++) {
        for (int u : adj[v]) {
            if (scc[v] != scc[u]) { // Apenas ligações entre CFCs diferentes
                adjCondensado[scc[v]].push_back(scc[u]);
                grauIn[scc[u]]++;
                grauOut[scc[v]]++;
            }
        }
    }

    // **3. Verificar fontes e sumidouros no DAG**
    int fontes = 0, sumidouros = 0;
    for (int i = 0; i < sccCount; i++) {
        if (grauIn[i] == 0) fontes++;
        if (grauOut[i] == 0) sumidouros++;
    }

    // **Se há no máximo 1 fonte e 1 sumidouro, o grafo é semi-fortemente conexo**
    if (fontes == 1 && sumidouros == 1) {
        cout << "Bolada\n";
    } else {
        cout << "Nao Bolada\n";
    }

    return 0;
}