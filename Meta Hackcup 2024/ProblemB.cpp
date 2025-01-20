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
#define lf long double

void task(){
    lf P, n;
    cin >> n >> P;
    P /= 100.0;
    //cout << n << ' ' << P << ' ' << pow(0.5, 0.5) - 0.5 << '\n';
    //cout << ((ll)(1)) * (n-1) / (1.0*n) << ' ' << pow(P, ((ll)(1)) * (n-1) / n) <<'\n';
    cout << fixed << setprecision(15) << ((lf)100.0) * (pow(P, ((ll)(1)) * (n-1) / n) - P) << '\n';
}

int main(){
    fast
    int tes;
    cin >> tes;
    for(int i=1; i<=tes; i++){
        cout << "Case #" << i << ": ";
        task();
    }
    return 0;
}