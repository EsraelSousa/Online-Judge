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

int main(){
    fast
    ll a, b;
    cin >> a >> b;
    ll xorAB = a ^ b;
    if(a % 2 == 1 && b % 2 == 1){
        cout << "S\n";
        cout << "A B\n";
    }
    else if(a % 2 == 1 || b % 2 == 1){
        cout << "S\n";
        cout << ((a % 2 == 1)? "A\n" : "B\n");
    }
    else{
        cout << "N\n";
    }
    return 0;
}
