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
    cout << n << ' ' << q << "\n";
    for (int i = 0; i < n; i++) {
        cout << gen(1, m) << " ";
    }
    cout << '\n';
    while (q--) {
        int op = gen(1, 2);
        int l = gen(1, n);
        int r = gen(1, n);
        int v = gen(0, 10000);
        if(op == 1){
            cout << op << ' ' << l << ' ' << r << ' ' << v << '\n';
        }
        else if(op == 2){
            cout << op << ' ' << min(l, r) << ' ' << max(l, r) << '\n';
        }
    }
}