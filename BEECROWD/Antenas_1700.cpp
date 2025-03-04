#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int palitos[1005];
int memo[1005][50005]; // Ajuste o tamanho conforme necessário

int solve(int i, int sum1, int sumAll) {
    if (i == n) {
        int sum2 = sumAll - sum1;
        return (sum1 == sum2) ? sum1 : 0;
    }
    if (sum1 > sumAll / 2) {
        return 0;
    }
    if (memo[i][sum1] != -1) {
        return memo[i][sum1];
    }
    int op1 = solve(i + 1, sum1, sumAll);
    int op2 = solve(i + 1, sum1 + palitos[i], sumAll);
    return memo[i][sum1] = max(op1, op2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    while (cin >> n && n) {
        int sumAll = 0;
        for (int i = 0; i < n; i++) {
            cin >> palitos[i];
            sumAll += palitos[i];
        }

        memset(memo, -1, sizeof(memo)); // Inicializa memo com -1
        int res = solve(0, 0, sumAll);
        cout << res << '\n';
    }
    return 0;
}