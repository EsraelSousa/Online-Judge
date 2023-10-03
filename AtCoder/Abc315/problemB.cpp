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
    int n;
    int sum = 0;
    cin >> n;
    vi days(n);
    for(auto &x: days){
        cin >> x;
        sum += x;
    }
    int meio = (sum + 1)/2;
    int mes = 0;
    sum = 0;
    while(sum + days[mes] < meio){
        sum += days[mes];
        mes++;
    }
    cout << mes+1 << ' ' << meio - sum << '\n';
    return 0;
}