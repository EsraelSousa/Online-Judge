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
    int T, D, M;
    int maior = 0, anterior = 0;
    cin >> T >> D >> M;
    while(M--){
        int t;
        cin >> t;
        maior = max(maior, t - anterior);
        anterior = t;
    }
    maior = max(maior, D - anterior);
    cout << ((maior >= T)? "Y\n" : "N\n");
    return 0;
}