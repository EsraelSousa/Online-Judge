#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
    while (true) {
        int N, S;
        cin >> N >> S;
        if (N == 0 && S == 0) break;

        vector<ll> primes(N);
        for (int i = 0; i < N; i++) {
            cin >> primes[i];
        }

        vector<ll> seq(1, 1); // Começa com 1 para facilitar as multiplicações
        vector<int> idx(N, 0); // Ponteiros para cada primo

        for (int count = 0; count < S; count++) {
            ll next_num = LLONG_MAX;
            for (int i = 0; i < N; i++) {
                next_num = min(next_num, primes[i] * seq[idx[i]]);
            }
            seq.push_back(next_num);
            for (int i = 0; i < N; i++) {
                if (primes[i] * seq[idx[i]] == next_num) {
                    idx[i]++;
                }
            }
        }

        cout << seq[S] << endl;
    }

    return 0;
}