#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;
int ar[MAXN];
vector<int> tree[4*MAXN];

void build(int no, int l, int r){
    if(l == r){
        tree[no].push_back(ar[l]);
        return;
    }
    int m = l + (r-l)/2;
    build(2*no, l, m);
    build(2*no+1, m+1, r);
    for(auto x: tree[2*no])
        tree[no].push_back(x);
    for(auto x: tree[2*no+1])
        tree[no].push_back(x);
    sort(tree[no].begin(), tree[no].end());
}

int query(int no, int l, int r, int a, int b, int val){
    if(l > b or r < a) return 0;
    if(a <= l && r <= b){
        return (int)(lower_bound(tree[no].begin(), tree[no].end(), val) - tree[no].begin());
    }
    int m = l + (r-l)/2;
    return query(2*no, l, m, a, b, val) + 
           query(2*no+1, m+1, r, a, b, val);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, ans = 0;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> ar[i];
    build(1, 1, n);
    for(int i=1; i<=n; i++){
        int qtd = 0;
        qtd += query(1, 1, n, i+1, n, ar[i]);
        ans += qtd;
    }
    cout << ans << '\n';
    return 0;
}
