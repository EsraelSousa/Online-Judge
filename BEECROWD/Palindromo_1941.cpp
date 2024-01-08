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

const int MAXT = 2e3+5;

vector<vector<ii>> memo(MAXT, vector<ii>(MAXT, {-1, -1}));
int especial[MAXT];
string s;

ii operator+(const ii a, const ii b){
	return ii(a.ff + b.ff, a.ss + b.ss);
}

ii operator>(const ii a, const ii b){
	if(a.ff == b.ff)
		return (a.ss > b.ss? a : b);
	return (a.ff > b.ff? a : b);
}

ii solve(int l, int r){
	if(l == r) return ii(especial[l], 1);
	if(l + 1 == r) return ((s[l] == s[r])? ii(especial[l] + especial[r], 2) : ii(especial[l] || especial[r], 1));
	ii &ans = memo[l][r];
	if(ans != ii(-1, -1)) return ans;
	if(s[l] == s[r])
		return ans = max(ii(especial[l] + especial[r], 2) + solve(l+1, r-1), max(solve(l+1, r), solve(l, r-1)));
	return ans = max(solve(l+1, r), solve(l, r-1));
}

void task(){
	int n;
	cin >> s >> n;
	while(n--){
		int x;
		cin >> x;
		especial[--x] = 1;
	}
	cout << solve(0, sz(s)-1).ss << '\n';
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
