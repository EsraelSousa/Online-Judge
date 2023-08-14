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

const int MAXN = 1e5+5;
const int MAX = 9;

struct Data{
    int notas[MAX] = {0};
};

Data Tree[4*MAXN];
int lazy[4*MAXN];
Data aux;

Data combine(Data &L, Data &R){
    Data ans;
    for(int i=0; i<MAX; i++)
        ans.notas[i] = L.notas[i] + R.notas[i];
    return ans;
}

void somaNo(int no, int v){
    int ans[MAX];
    // faz as somas
    for(int i=0; i<MAX; i++){
        int p = (i + v) % MAX;
        ans[p] = Tree[no].notas[i];
    }
    // coloca as somas na arvore
    for(int i=0; i<MAX; i++)
        Tree[no].notas[i] = ans[i];
}

void push(int no, int l, int r){
    if(!lazy[no]) return ;
    somaNo(no, lazy[no]);
    if(l != r){
        lazy[left(no)] += lazy[no];
        lazy[right(no)] += lazy[no];
    }
    lazy[no] = 0;
}

void build(int no, int l, int r){
    if(l == r){
        Tree[no].notas[1] = 1;
        return ;
    }
    int m = l + (r-l)/2;
    build(left(no), l, m);
    build(right(no), m+1, r);
    Tree[no] = combine(Tree[left(no)], Tree[right(no)]);
}

void update(int no, int l, int r, int a, int b, int v){
    push(no, l, r);
    if(r < a || l > b) return ;
    if(a <= l && r <= b){
        somaNo(no, v);
        if(l != r){
            lazy[left(no)] += v;
            lazy[right(no)] += v;
        }
        return ;
    }
    int m = l + (r-l) / 2;
    update(left(no), l, m, a, b, v);
    update(right(no), m+1, r, a, b, v);
    Tree[no] = combine(Tree[left(no)], Tree[right(no)]);
}

Data query(int no, int l, int r, int a, int b){
    push(no, l, r);
    if(r < a || l > b) return aux;
    if(a <= l && r <= b) return Tree[no];
    int m = l + (r-l)/2;
    Data L = query(left(no), l, m, a, b);
    Data R = query(right(no), m+1, r, a, b);
    return combine(L, R);
}

int getMaxFrequente(Data &ans){
    int freq = 0;
    for(int i=1; i<MAX; i++){
        if(ans.notas[i] >= ans.notas[freq])
            freq = i;
    }
    return freq;
}

int main(){
    fast
    int n, q;
    int l, r;
    Data ans;
    cin >> n >> q;
    build(1, 1, n);
    // processa as querys
    while(q--){
        cin >> l >> r;
        l++, r++;
        ans = query(1, 1, n, l, r);
        int freq = getMaxFrequente(ans);
        update(1, 1, n, l, r, freq);
    }
    // mostra o array final
    for(int i=1; i<=n; i++){
        ans = query(1, 1, n, i, i);
        cout << getMaxFrequente(ans) << '\n';
    }
    return 0;
}