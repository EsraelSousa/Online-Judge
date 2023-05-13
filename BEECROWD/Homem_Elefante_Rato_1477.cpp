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
#define left(x) (x<<1)
#define right(x) ((x<<1)|1)

const int MAXN = 1e5+5;
int tree[3][4*MAXN], lazy[4*MAXN];

void push(int no, int l, int r){
    int x = lazy[no] % 3;
    while(x--){
        int aux = tree[0][no];
        tree[0][no] = tree[2][no];
        tree[2][no] = tree[1][no];
        tree[1][no] = aux;
    }
    if(l != r){
        lazy[left(no)] += lazy[no];
        lazy[right(no)] += lazy[no];
    }
    lazy[no] = 0;
}

void build(int no, int l, int r){
    if(l == r){
        tree[0][no] = 1;
        tree[1][no] = tree[2][no] = 0;
        lazy[no] = 0;
        return; 
    }
    int m = l + (r-l)/2;
    build(left(no), l, m);
    build(right(no), m+1, r);
    lazy[no] = 0;
    for(int i=0; i<3; i++)
        tree[i][no] = tree[i][left(no)] + tree[i][right(no)];
}

void update(int no, int l, int r, int a, int b){
    if(lazy[no]) push(no, l, r);
    if(r < a || l > b) return;
    if(a <= l && r <= b){
        int aux = tree[0][no];
        tree[0][no] = tree[2][no];
        tree[2][no] = tree[1][no];
        tree[1][no] = aux;
        if(l != r)
            lazy[left(no)]++, lazy[right(no)]++;
        return;
    }
    int m = l + (r-l)/2;
    update(left(no), l, m, a, b);
    update(right(no), m+1, r, a, b);
    for(int i=0; i<3; i++)
        tree[i][no] = tree[i][left(no)] + tree[i][right(no)];
}

int query(int tipo, int no, int l, int r, int a, int b){
    if(lazy[no]) push(no, l, r);
    if(r < a || l > b) return 0;
    //if(lazy[no]) push(no, l, r);
    if(a <= l && r <= b) return tree[tipo][no];
    int m = l + (r-l)/2;
    return query(tipo, left(no), l, m, a, b) +
           query(tipo, right(no), m+1, r, a, b);
}

int main(){
    fast
    int n, m, l, r;
    char opr;
    while(cin >> n >> m){
        build(1, 1, n);
        while(m--){
            cin >> opr >> l >> r;
            if(opr == 'C')
                for(int i=0; i<3; i++)
                    cout << query(i, 1, 1, n, l, r) << ((i == 2)? '\n' : ' ');
            else
                update(1, 1, n, l, r);
        }
        cout << '\n';
    }

    return 0;
}