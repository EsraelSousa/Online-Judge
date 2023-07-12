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

int n, k;
vi val[40];
ll num[40];

vi operadorAND(vi &a, vi &b){
	vi ans;
	for(auto &x: a)
		for(auto &y: b)
			if(x == y)
				ans.push_back(x);
	return ans;
}

void solve(){
	int i = 29;
	ll res = (1LL << 30) - 1;
	vi ans;
	while(i >= 0 && sz(val[i]) < k) i--;
	if(i < 0){ // não tem nenhum bit 2^x que tenha pelo menos k elementos
		cout << "0\n"; 
		return ;
	}
	res = (1LL << i);
	ans = val[i];

    for(i--; i>= 0; i--){
		vi aux = operadorAND(ans, val[i]);
		if(sz(aux) >= k){
			ans = operadorAND(ans, val[i]);
			res += (1LL << i);
		}
	}

	cout << res << '\n';
}

void task(){
	cin >> n >> k;
	ll x;
	for(int i=0; i<40; i++)
        val[i].clear();

	for(int j=0; j<n; j++){
		cin >> x;
		num[j+1] = x;
		int i = 0;
		while(x > 0){ // tranforma em binario
			if(x % 2)
				val[i].push_back(j+1); // o elemento está em 2^i
			i++;
			x /= 2;
		}
	}

	solve();
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--)
    	task();
    return 0;
}
