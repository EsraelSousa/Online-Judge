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

void task(){
    int n;
    bool flag = 1;
    cin >> n;
    vector<ll> ar(n-1);
    for(auto &x: ar){
        cin >> x;
        if(x > n * (n+1) / 2)
            flag = 0;
    }
    if(!flag) cout << "NO\n";
    else{
        ll sum = n * (n+1) / 2;
        vi used(n+5, 0);
        for(int i=1; i<n-1; i++){
            int x = ar[i] - ar[i-1];
            cout << x << ' ';
            if(x <= n){
                if(!used[x])
                    sum -= x;
                used[x] = 1;
            }
        }
        for(int i=1; i<=n; i++)
            if(!used[i])
                sum -= i;
        cout << ((sum == 0)? "YES\n" : "NO\n");
    }
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--)
        task();
    return 0;
}