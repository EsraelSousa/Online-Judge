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
    double X, Y, Z;
    cin >> X >> Y >> Z;
    if(X * X == Y * Y + Z * Z)
    	cout << "AREA = " << (ll)(Y * Z / 2 + 3 * (Z/2) * (Z/2) / 2) << '\n';
    else
    	cout << "Nao eh retangulo!\n";
    return 0;
}
