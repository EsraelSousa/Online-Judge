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

    int n = 6;
    while(n--){
        set<int> numbers;
        while(numbers.size() < 6)
            numbers.insert(gen(1, 60));
        cout << n << " -> ";
        for(auto x: numbers) cout << x << ' ';
        cout << '\n';
    }
    
}
