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
#define pb push_back

void task(){
	int n;
	cin >> n;
	int m = n / 2;
	int p = n;
	int ans = 1;
	vi par, impar;
	par.pb(0);
	impar.pb(0);
	for(int i=1; i<=n; i++){
		if(i & 1)
			impar.pb(i);
		else
			par.pb(i);
	}
	while(p != m){
		if(p < m)
			p = par[p];
		else{
			int k = p-m;
			p = impar[k];
		}
		ans++;
	}
	cout << ans << '\n';
}

int main(){
    fast
    int tes = 1;
    //cin >> tes;
    while(tes--){
    	task();
    }
    
    return 0;
}
