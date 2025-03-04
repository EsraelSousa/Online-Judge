#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
typedef pair<int, int> pii;

// Direções possíveis (cima, baixo, esquerda, direita)
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void solve(int M, int N, int K) {
    vector<vector<int>> dist(M+1, vector<int>(N+1, INF));
    vector<vector<pii>> nearest(M+1, vector<pii>(N+1, {-1, -1})); // Guarda a sede responsável pelo ponto
    queue<pii> q;
    
    // Lendo as sedes e iniciando BFS Multi-Origem
    for (int i = 0; i < K; i++) {
        int x, y;
        cin >> x >> y;
        dist[x][y] = 0;
        nearest[x][y] = {x, y}; // Cada sede é sua própria referência
        q.push({x, y});
    }

    // BFS Multi-Origem
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx >= 1 && nx <= M && ny > 0 && ny <= N) {
                if (dist[nx][ny] == INF) {  // Se ainda não visitado
                    dist[nx][ny] = dist[x][y] + 1;
                    nearest[nx][ny] = nearest[x][y]; // Herdar a sede mais próxima
                    q.push({nx, ny});
                } 
                // Se há empate de distância, escolhemos a sede menor
                else if (dist[nx][ny] == dist[x][y] + 1) {
                    pii best = min(nearest[nx][ny], nearest[x][y]);
                    nearest[nx][ny] = best;
                }
            }
        }
    }

    // Processar os pedidos
    int L;
    cin >> L;
    for (int i = 0; i < L; i++) {
        int x, y;
        cin >> x >> y;
        cout << nearest[x][y].first << " " << nearest[x][y].second << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N, K, instancia = 1;
    while (cin >> M >> N && (M || N)) {
        cin >> K;
        if(instancia > 1)
            cout << '\n';
        cout << "Instancia " << instancia++ << '\n';
        solve(M, N, K);
    }

    return 0;
}
