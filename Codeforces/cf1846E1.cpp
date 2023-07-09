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

const int MAXN = 1e6+5;
bool isPossible[MAXN];

void preProcess(){
    for(ll k=2; k<=1000; k++){
        ll initial = 1+k;
        ll lastBorda = k * k;
        while(initial + lastBorda <= (ll)1e6){
            initial += lastBorda;
            isPossible[initial] = 1;
            lastBorda *= k; // adicionar mais k vertices a cada vertice da borda
        }
    }
}

void task(){
    ll n;
    cin >> n;
    cout << (isPossible[n]? "YES\n" : "NO\n");
}

int main(){
    fast
    int tes;
    preProcess();
    cin >> tes;
    while(tes--)
        task();
    return 0;
}