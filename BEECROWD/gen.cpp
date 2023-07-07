#include <bits/stdc++.h>
using namespace std;
using ll = long long;

mt19937 rnd;
ll gen(ll a, ll b) {
    uniform_int_distribution<ll> dist (a, b);
    return dist(rnd);
}

void genTree(int n){
    vector<pair<int,int>> edges;
    for(int i = 2; i <= n; ++i) {
        edges.emplace_back(gen(1, i - 1), i);
    }
    
    vector<int> perm(n + 1); // re-naming vertices
    for(int i = 1; i <= n; ++i) {
        perm[i] = i;
    }
    random_shuffle(perm.begin() + 1, perm.end());
    
    random_shuffle(edges.begin(), edges.end()); // random order of edges
    
    for(pair<int, int> edge : edges) {
        int a = edge.first, b = edge.second;
        if(rand() % 2) {
            swap(a, b); // random order of two vertices
        }
        cout << perm[a] <<' ' <<  perm[b] << '\n';
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "usage: " << argv[0] << " <seed> <n> <q> <m>\n"; return 1;
    }
    rnd = mt19937(atoi(argv[1]));
    int n = atoi(argv[2]); int q = atoi(argv[3]); int m = atoi(argv[4]);
    cout << n << '\n';
    while(n--){
        cout << gen(1, 16) << ' ';
    }
    cout << '\n';
}