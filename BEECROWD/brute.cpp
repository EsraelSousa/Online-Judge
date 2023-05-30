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

const int MAXN = 2*1e5+5;

struct Tno{
    ll sum = 0;
    int qtd7 = 0, qtd13 = 0;
};

struct Tlazy{
    int new7 = 7, new13 = 13;
};


int ar[MAXN];

int main(){
    fast
    int n, q, l, r, op, z, v;
    while(cin >> n){
        for(int i=1; i<=n; i++)
            cin >> ar[i];
        cin >> q;
        while(q--){
            cin >> op >> l >> r;
            if(op == 1)
                ar[l] = r;
            else if(op == 2){
                cin >> z >> v;
                for(int i=0; l+i <= r; i++)
                    if(ar[l+i] == z)
                        ar[l+i] = v;
            }
            else{
                int ans = 0;
                for(int i=0; i+l <= r; i++)
                    ans += ar[i+l];
                cout << ans << '\n';
            }
        }
    }
    return 0;
}