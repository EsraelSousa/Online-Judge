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

const int MAXN = 2e5+5;

int prefix[MAXN];
int memo[MAXN];

int getSum(int n){
    int sum = 0;
    if(memo[n] != -1) return memo[n];
    int x = n;
    while(x){
        sum += x % 10;
        x /= 10;
    }
    return memo[n] = sum;
}

void preCal(){
    memset(memo, -1, sizeof(memo));
    for(int i=1; i<MAXN; i++){
        prefix[i] = prefix[i-1] + getSum(getSum(i));
    }
}

void task(){
    int n;
    cin >> n;
    cout << prefix[n] << '\n';
}

int main(){
    fast
    int tes;
    preCal();
    cin >> tes;
    while(tes--)
        task();
    return 0;
}