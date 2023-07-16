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
    set<pair<string, string>> relacoes;
    string a, b;
    int n, q;
    cin >> n >> q;
    while(n--){
    	cin >> a >> b;
    	relacoes.insert({a, b});
    }
    while(q--){
    	cin >> a >> b;
    	cout << ((relacoes.find({a, b}) != relacoes.end())? "" : "nao e o ") << "Nao e a mamae\n";
    }
    return 0;
}
