// WA

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

int main(){
    fast
    int n;
    cin >> n;
    vector<ii> stacks;
    while(n--){
        int a, b;
        cin >> a >> b;
        if(b < a) continue;
        stacks.push_back({b-a, a});
    }
    if(sz(stacks) == 0){
        cout << 0 << '\n';
        return 0;
    }
    sort(all(stacks));
    int ans = 1;
    n = sz(stacks);
    
    int peso = stacks[n-1].ff;
    for(int i=n-2; i>=0; i--){
        if(stacks[i].ss <= peso){
            ans++;
            peso -= stacks[i].ss;
        }
    }
    cout << ans << '\n';
    return 0;
}