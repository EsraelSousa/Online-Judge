#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;

double solve(int N, int K) {
    double prob = 0.0;
    for (int d = 1; d <= N; d++) {
        if (K % d == 0) { // Se d divide K, contribui na soma
            prob += 1.0 / N;
        }
    }
    return prob;
}

int main() {
    fast;
    precompute();
    
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        cout << fixed << setprecision(12) << solve(N, K) << '\n';
    }
    return 0;
}
