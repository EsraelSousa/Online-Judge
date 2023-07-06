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
    int y, x, z;
    cin >> x >> y >> z;
    if((z < x && x < y && y < 0) || (y < x && x < z && y > 0) || (x < z && z < y && y < 0) || (y < z && z < x && y > 0))
        cout << "-1\n";
    else if((y > x && x > 0) || (y < x && x < 0) || (y<0 && x > 0) || (y > 0 && x < 0)) 
        cout << abs(x) << "\n";
    else
        cout << abs(z) + abs(y-z) + abs(x-y) << '\n';
    return 0;
}