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

int main(){
    fast
    int n, q;
    int ans = 0;
    cin >> n;
    vvi fazenda(n, vi(n, 0));
    for(int i=0; i<n; i++)
        for(auto &x: fazenda[i])
            cin >> x;
    cin >> q;
    while(q--){
        int l1, l2, c1, c2;
        cin >> l1 >> c1 >> l2 >> c2;
        l1--, l2--, c1--, c2--;
        for(; l1 <= l2; l1++)
            for(int j=c1; j<=c2; j++){
                ans += fazenda[l1][j];
                fazenda[l1][j] = 0;
            }
    }
    cout << ans << '\n';
    return 0;
}