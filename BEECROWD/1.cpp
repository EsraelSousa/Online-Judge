#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10010;
vector<int> adj[MAXN], adjSCC[MAXN];
vector<int> stk;
int dfs_low[MAXN], dfs_num[MAXN], scc_id[MAXN], in_stack[MAXN];
int in_degree[MAXN], out_degree[MAXN];
int timer, scc_count;
int N, M;

void tarjan(int u) {
    dfs_low[u] = dfs_num[u] = ++timer;
    stk.push_back(u);
    in_stack[u] = true;

    for (int v : adj[u]) {
        if (!dfs_num[v]) {  // Se v não foi visitado, faz DFS nele
            tarjan(v);
            dfs_low[u] = min(dfs_low[u], dfs_low[v]);
        } else if (in_stack[v]) {  // Se v está na pilha, pertence ao mesmo SCC
            dfs_low[u] = min(dfs_low[u], dfs_num[v]);
        }
    }

    if (dfs_low[u] == dfs_num[u]) {  // Encontrou um SCC
        while (true) {
            int v = stk.back();
            stk.pop_back();
            in_stack[v] = false;
            scc_id[v] = scc_count;
            if (u == v) break;
        }
        scc_count++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int R, S;
        cin >> R >> S;
        adj[R].push_back(S);
    }

    // Passo 1: Rodar Tarjan para encontrar SCCs
    for (int i = 1; i <= N; i++) {
        if (!dfs_num[i]) tarjan(i);
    }

    // Passo 2: Criar o grafo condensado
    for (int u = 1; u <= N; u++) {
        for (int v : adj[u]) {
            if (scc_id[u] != scc_id[v]) {
                adjSCC[scc_id[u]].push_back(scc_id[v]);
                in_degree[scc_id[v]]++;
                out_degree[scc_id[u]]++;
            }
        }
    }

    // Passo 3: Contar SCCs com grau de entrada e saída zero
    int zero_in = 0, zero_out = 0;
    for (int i = 0; i < scc_count && scc_count > 1; i++) {
        if (in_degree[i] == 0) zero_in++;
        if (out_degree[i] == 0) zero_out++;
    }
    cout << zero_in << ' ' << zero_out << '\n';
    // Passo 4: O resultado é o máximo entre zero_in e zero_out
    cout << max(zero_in, zero_out) << '\n';

    return 0;
}
