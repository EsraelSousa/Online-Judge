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
    int n, a, b;
    vi copos(5);
    for(int i=0; i<5; i++) copos[i] = i;
    cin >> n;
    while(n--){
        cin >> a >> b;
        swap(copos[a], copos[b]);
    }
    int ans = 0;
    while(copos[ans] != 2) ans++;
    cout << ans << '\n';
    return 0;
}