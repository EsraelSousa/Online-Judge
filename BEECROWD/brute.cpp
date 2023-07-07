#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

int fin(vi &valor, int p, int x, bool used){
    int ans = 0;
    int i=p; 
    while(i<valor.size() && valor[i] != x) i++;
    if(i < valor.size())
        ans = 1 + fin(valor, i, x+1, used);
    else if(!used)
        ans = 1 + fin(valor, p, x+1, 1);
    return ans;    
}

int main(){
    fast
    int n;
    cin >> n;
    vi valor(n);
    for(auto &x: valor) cin >> x;
    int ans = 2;
    for(int i=0; i<n; i++)
        ans = max(ans, 1 + fin(valor, i+1, valor[i]+1, 0));
    cout << ans << '\n';
    return 0;
}
