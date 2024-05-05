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
    int n, c;
    cin >> n >> c;
    vi values(n);
    for(auto &c: values) cin >> c;
    sort(all(values));
    int ans = n;
    int i = 0, j = n-1;
    while(i < j){
        if(values[i] + values[j] <= c){
            i++, j--;
            ans--;
        }
        else{
            j--;
        }
    }
    cout << ans << '\n';
    return 0;
}