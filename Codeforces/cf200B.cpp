#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define fs first
#define sd second;
#define all(x) x.begin(), x.end()
#define left(x) (2*x)
#define right(x) (2*x + 1)



int main(){
    fast
    int n, porcento;
    double sum  = 0.0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> porcento;
        sum += porcento / 100.0;
    }
    cout << fixed << setprecision(12) << 100 * sum / n << '\n';
    return 0;
}