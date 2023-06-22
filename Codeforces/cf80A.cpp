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

bool isPrime(int x){
    if(x < 2) return false;
    for(int i=2; i*i <= x; i++)
        if(x % i == 0) return false;
    return true;
}

int main(){
    fast
    int n, m;
    cin >> n >> m;
    for(int i=n+1; i<m; i++){
        if(isPrime(i)){
            cout << "NO\n";
            return 0;
        }
    }
    cout << ((isPrime(m))? "YES\n" : "NO\n");
    return 0;
}