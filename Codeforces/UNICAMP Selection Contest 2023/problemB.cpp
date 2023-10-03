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
    ll X1, Y1, X2, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;
    ll C = Y1 - Y2;
    if(C <= 0) // Y1 cresce menos que Y2
        cout << ((X1 > X2)? 0 : -1) << '\n';
    else{
        int ans = 0;
        while(X1 <= X2){
            X1 += Y1;
            X2 += Y2;
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}