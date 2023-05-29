#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define fs first
#define sd second;
#define all(x) x.begin(), x.end()
#define left(x) (2*x)
#define right(x) (2*x + 1)

const int MAXN = 1e5+5;
int ar[MAXN];
ll tree[4*MAXN];
ll lazy[4*MAXN];

void push(int no, int l, int r){
    tree[no] = (r-l+1) * lazy[no];
    if(l != r){
        lazy[left(no)] = lazy[no];
        lazy[right(no)] = lazy[no];
    }
    lazy[no] = -1;
}

void build(int no, int l, int r){
    if(l == r){
        tree[no] = ar[l];
        lazy[no] = -1;
        return;
    }
    int m = l + (r-l)/2;
    build(left(no), l, m);
    build(right(no), m+1, r);
    lazy[no] = -1;
    tree[no] = tree[left(no)] + tree[right(no)];
}

void update(int no, int l, int r, int a, int b, int val){
    if(lazy[no] != -1) push(no, l, r);
    if(r < a || l > b) return;
    if(a <= l && r <= b){
        tree[no] = (r-l+1) * val;
        if(l != r){
            lazy[left(no)] = val;
            lazy[right(no)] = val;
        }
        return;        
    }
    int m = l + (r-l)/2;
    update(left(no), l, m, a, b, val);
    update(right(no), m+1, r, a, b, val);
    tree[no] = tree[left(no)] + tree[right(no)];
}

ll query(int no, int l, int r, int a, int b){
    if(lazy[no] != -1) push(no, l, r);
    if(r < a || l > b) return 0LL;
    if(a <= l && r <= b)
        return tree[no];
    int m  = l + (r-l)/2;
    return query(left(no), l, m, a, b) +
           query(right(no), m+1, r, a, b);
}

int main(){
    fast
    int n, q;
    int l, r, op, k;
    cin >> n >> q;
    for(int i=1; i<=n; i++) cin >> ar[i];
    build(1, 1, n);
    while(q--){
        cin >> op >> l >> r;
        if(op == 1){
            cin >> k;
            update(1, 1, n, l, r, k);
        }
        else   
            cout << query(1, 1, n, l, r) << '\n';
    }
    return 0;
}