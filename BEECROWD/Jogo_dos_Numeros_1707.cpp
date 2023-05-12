#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
typedef long long ll;

ll memo[15][2][200];
vector<ll> digits;

void num2vector(ll n){
	digits.clear();
	while(n){
		digits.push_back(n%10);
		n /= 10;
	}
	reverse(all(digits));
}

ll solve(int p, bool tigth, int sum, bool last){
	if(p == (int)digits.size()) return last? sum : 0;
	ll &ans = memo[p][tigth][sum];
	if(ans != -1) return ans;
	ans = 0LL;
    for(int i=0; i<10; i++){
	    if(tigth && i > digits[p]) break;
		ans += solve(p+1, tigth && digits[p] == i, sum+i, i%2);
	}
	return ans;
}

ll func(ll n){
	memset(memo, -1, sizeof(memo));
	num2vector(n);
	return solve(0, 1, 0, 0);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    ll n, m;
    while(cin >> n >> m){
    	if(n > m) swap(n, m);
      	cout << func(m) - func(n-1) << '\n';
    }
    return 0;
}