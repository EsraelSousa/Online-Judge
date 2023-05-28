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
    int n;
    string s, aux;
    set<string> diferentes;
    cin >> n >> s;
    for(int i=0; i<n-1; i++){
        aux = "";
        aux.push_back(s[i]);
        aux.push_back(s[i+1]);
        diferentes.insert(aux);
    }
    cout << diferentes.size() << '\n';
}

int main(){
    fast
    int testes;
    cin >> testes;
    while(testes--) solve();
    return 0;
}