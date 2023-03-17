#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAXN = 2*1e5+5;
int a[MAXN];
ll tree[4*MAXN];
int lazy[4*MAXN];
int frenq[4*MAXN][2];

void push(int no, int l, int r){
    
}

void build(int no, int l, int r){
    if(l == r){
        tree[no] = a[l];
        lazy[no] = frenq[no][0] = frenq[no][1] = 0;
        frenq[no][0] = (a[l] == 7);
        frenq[no][1] = (a[l] == 13);
        return;
    }
    int m = l + (r-l)/2;
    build(2*no, l, m);
    build(2*no+1, m+1, r);
    tree[no] = tree[2*no] + tree[2*no+1];
    lazy[no] = 0;
    for(int i=0; i<2; i++)
        frenq[no][i] = frenq[2*no][i] + frenq[2*no+1][i];
}

void updatePoint(int no, int l, int r, int p, int v){
    if(lazy[no]) push(no, l, r);
    if(l == r){
        tree[no] = v;
        lazy[no] = frenq[no][0] = frenq[no][1] = 0;
        frenq[no][0] = (v == 7);
        frenq[no][1] = (v == 13);
        return;
    }
    int m = l + (r-l)/2;
    if(p <= m) updatePoint(2*no, l, m, p, v);
    else updatePoint(2*no+1, m+1, r, p, v);
    tree[no] = tree[2*no] + tree[2*no+1];
    for(int i=0; i<2; i++)
        frenq[no][i] = frenq[2*no][i] + frenq[2*no+1][i];
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, query, op, l, r, v, z;
    for(int i=1; i<=n; i++) cin >> a[i];
    cin >> query;
    while(query--){
        cin >> op;
        if(op == 1){
            cin >> l >> v;
        }
        else if(op == 2){
            cin >> l >> r >> z >> v;
        }
        else{
            cin >> l >> r;
        }
    }
    return 0;
}