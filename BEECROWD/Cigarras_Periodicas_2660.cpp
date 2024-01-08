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
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)
#define ld long double

const int INF = 1e9;
const int MAX = 2e5+5;

void task(){
	int n;
	ll mmc = 1, l, x, maior = 1, ans = 1;
	cin >> n >> l;
	while(n--){
		cin >> x;
		mmc = lcm(mmc, x);
	}
	
	for(ll i=1; i<=l; i++){
		x = lcm(mmc, i);
		if(x <= l && x > maior){
			maior = x;
			ans = i;
		}
	}
	cout << ans << '\n';
}

int main(){
    fast
    int tes = 1;
    cout << fixed << setprecision(1);
    //cin >> tes;
    while(tes--){
    	task();
    }
    return 0;
}
