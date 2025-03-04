#pragma GCC "unrol-loops"

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

const int MAXN = 50, MAXK = 10;

ll combinations[MAXN+5][MAXK+5];
bool isPrime[MAXN*MAXN];

void crivo(){
    memset(isPrime, 1, sizeof(isPrime));
    isPrime[0] = isPrime[1] = 0;
    for(int i=2; i<MAXN*MAXN; i++)
        if(isPrime[i]){
            for(int j=i+i; j<MAXN*MAXN; j+=i)
                isPrime[j] = 0;
        }
}

void calculeCombinations(){
    combinations[0][0] = 1;
    for(int i=1; i<=MAXN; i++){
        combinations[i][0] = 1;
        for(int k=1; k<=MAXK; k++)
            combinations[i][k] = combinations[i-1][k-1] + combinations[i-1][k];
    }
}

int main(){
    fast
    int n, m, k;
    crivo();
    calculeCombinations();
    while(cin >> n >> m >> k && n){
        ll ans = 0;
        ll countValids = m;
        vector<int> coluns(m, n);
        for(int i=0; i<n*m; i++){
            countValids -= isPrime[i];
            coluns[i % m] -= isPrime[i];
            if(i % m == m-1){
                if(countValids >= k && k > 1)
                    ans += combinations[countValids][k];
                else if(countValids >= k)
                    ans += countValids;
                countValids = m;
            }
        }
        for(int val: coluns){
            if(val >= k && n > 1 && k > 1)
                ans += combinations[val][k];
        }
        cout << ans << '\n';
    }
    return 0;
}

/*
2 3 2
0 1 2
3 4 5
*/