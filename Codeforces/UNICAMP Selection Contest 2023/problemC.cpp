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
    int n, k;
    ll sumMax = 0, sumMin = 1e9, sum = 0;
    int ans1 = 0, ans2 = 0;
    cin >> n >> k;
    vi values(n);
    for(auto &x: values)
        cin >> x;
    for(int i=0; i<k-1; i++)
        sum += values[i];
    for(int i=k-1; i<n; i++){
        sum += values[i];
        if(sum < sumMin){
            ans1 = i-k+1;
            sumMin = sum;
        }
        if(sum > sumMax){
            ans2 = i-k+1;
            sumMax = sum;
        }
        //cout << sum << ' ' << i-k+1 << '\n';
        sum -= values[i-k+1];
    }
    cout << ans1+1 << ' ' << ans2+1 << '\n';
    return 0;
}