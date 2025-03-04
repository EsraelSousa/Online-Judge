#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())
#define vi vector<int>

const int MAX = 1e3+5;
vector<vi> mat(MAX, vi(MAX, 0)), dp(MAX, vi(MAX, 0));

class BIT2D {
private:
    int n, m;
    vector<vector<int>> bit;

public:
    BIT2D(int n, int m) : n(n), m(m), bit(n + 1, vector<int>(m + 1, 0)) {}

    void update(int x, int y, int delta) {
        for (int i = x; i <= n; i += i & -i) {
            for (int j = y; j <= m; j += j & -j) {
                bit[i][j] += delta;
            }
        }
    }

    int query(int x, int y) {
        if (x < 1 || y < 1) return 0; // Evita acesso inválido
        int sum = 0;
        for (int i = x; i > 0; i -= i & -i) {
            for (int j = y; j > 0; j -= j & -j) {
                sum += bit[i][j];
            }
        }
        return sum;
    }

    int range_query(int x1, int y1, int x2, int y2) {
        if (x1 < 1) x1 = 1;
        if (y1 < 1) y1 = 1;
        return query(x2, y2) - query(x1 - 1, y2) - query(x2, y1 - 1) + query(x1 - 1, y1 - 1);
    }
};

void task() {
    int n, m;
    if (!(cin >> n >> m)) {
        cerr << "Erro na leitura de n e m.\n";
        return;
    }
    
    char c;
    //BIT2D bit(n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> c;
            mat[i][j] = (c == '.');
            //bit.update(i+1, j+1, mat[i][j]);
            dp[i][j] = mat[i][j]; // Inicializa dp corretamente
        }

    int maxL = 0;
    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++) {
            if (mat[i][j]) {
                if (i > 0 && j > 0)
                    dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                else
                    dp[i][j] = 1;
                maxL = max(maxL, dp[i][j]);
            }
        }

    cout << "The side of the square is " << maxL << " and the locations are:\n";

    int countSquare = 0;
    for (int i = 0; i <= n - maxL && maxL; i++) {
        for (int j = 0; j <= m - maxL; j++) {
            if (dp[i+maxL-1][j+maxL-1] >= maxL) {
                countSquare++;
                cout << i+1 << ' ' << j+1 << '\n';
            }
        }
    }

    cout << countSquare << " in total.\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        task();
    }

    return 0;
}
