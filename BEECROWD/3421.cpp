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

vector<ll> prefix;

void preCalcule(){
    ll base = 1;
    for(int i=1; i<18; i++){
        prefix.push_back(9*i*base);
        base *= 10;
    }

    ll sum = 0;
    for(auto x: prefix){
        sum += x;
        cout << x << ' ';
        if(sum > 1e18)
            break;
    }
    cout << '\n' << sum << '\n';
}

int main(){
    fast
    preCalcule();
    return 0;
}