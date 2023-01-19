#include <bits/stdc++.h>
using namespace std;
using ll = long long;

mt19937 rnd;
ll gen(ll a, ll b) {
    uniform_int_distribution<ll> dist (a, b);
    return dist(rnd);
}
int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "usage: " << argv[0] << " <seed> <n> <q> <m>\n"; return 1;
    }
    rnd = mt19937(atoi(argv[1]));

    int n = atoi(argv[2]); int q = atoi(argv[3]); int m = atoi(argv[4]);
    cout << n << " " << q << "\n";
    for (int i = 0; i < n; i++) {
        cout << gen(1, m) << " ";
    }
    cout << "\n";
    while (q--) {
        int a = gen(1, n);
        cout << a << " " << gen(a, n) << "\n";
    }
}