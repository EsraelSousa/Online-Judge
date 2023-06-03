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
    int n, x;
    int sumUsado = 0;
    cin >> n;
    for(int i=0; i<n-1; i++){
        cin >> x;
        sumUsado += x;
    }
    sumUsado = (sumUsado) % n;
    //cout << sumUsado << '\n';
    for(int i=0; i<n; i++){
        int ans = 0;
        for(int j = 0; j<21; j++, ans++){
            if((sumUsado + ans) % n == i)
                break;
        }
        cout << ((ans < 21)? ans : -1) << '\n';
    }
    return 0;
}