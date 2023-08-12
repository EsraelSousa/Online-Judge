#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

const int MAXN = 3e5+5;
vi tree[4*MAXN];
int vagas[MAXN];

void build(int no, int l, int r){
    if(l == r){
        tree[no].push_back(vagas[l]);
        return;
    }
    int m = l + (r-l)/2;
    build(left(no), l, m);
    build(right(no), m+1, r);
    for(auto &x: tree[left(no)])
        tree[no].push_back(x);
    for(auto &x: tree[right(no)])
        tree[no].push_back(x);
    sort(all(tree[no]));
}

int query(int no, int l, int r, int a, int b, int v){
    if(l > b || r < a) return 0;
    if(a <= l && r <= b)
        return (int)(tree[no].end() - lower_bound(all(tree[no]), v));
    int m = l + (r-l)/2;
    return query(left(no), l, m, a, b, v) + 
           query(right(no), m+1, r, a, b, v);
}

int main(){
    fast
    int n, q;
    cin >> n >> q;
    for(int i=1; i<=n; i++)
        cin >> vagas[i];
    build(1, 1, n);
    while(q--){
        int ai, pi, fi;
        cin >> ai >> pi >> fi;
        if(vagas[ai] >= pi){
            cout << "0\n";
            continue;
        }
        cout << query(1, 1, n, ai, ai+fi, pi) << '\n';
    }
    return 0;
}