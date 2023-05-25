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

void solve(){
    string lampadas;
    ll C;
    cin >> lampadas >> C;
    for(int i=0; i<(int)lampadas.size() && C; i++){
        if(C & 1){
            if(lampadas[i] == 'O') C += 2;
            lampadas[i] = (lampadas[i] == 'X')? 'O' : 'X';
        }
        C >>= 1;
    }
    cout << lampadas << '\n';
}

int main(){
    fast
    int tes; cin >> tes;
    while (tes--)
        solve();
    return 0;
}