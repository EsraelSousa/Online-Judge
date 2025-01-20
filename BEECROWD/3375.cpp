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

int has[MAXN];

void preCal(){
	vi perf;
	for(int i=1; i<1001; i++)
		perf.push_back(i*i);
	for(int i=0; i<10; i++)
		cout << perf[i] << ' ';
	cout << '\n';
	cout << perf.size() << '\n';
	for(int i=0; i<sz(perf)-1; i++)
		for(int j=i+1; j<sz(perf); j++){
			int r = sqrt(perf[j] - perf[i]);
			if(r * r == perf[j] - perf[i] && ((r * r) % 2) == 0 && perf[i] & 1 && perf[j]  & 1){
				has[ perf[j] ] = perf[i];
				cout << perf[j] << ' ' << perf[i] << '\n';
			}
		}
}

void task(){
	int n;
	cin >> n;
	if(n & 1 && !has[n]){
		cout << "-1\n";
		return ;
	}

	vi ans(n, -1);
	int id = 1;
	for(int i=0; i<n; i+=2)
		ans[i] = ans[i+1] = id++;
		
	if(n & 1){
		id = 2;
		ans[n-1] = ans[ has[n]-1 ] = 1;
		for(int i=0; i<has[n]-1; i+=2)
			ans[i] = ans[i+1] = id++;
		for(int i=has[n]; i<n; i+=2)
			ans[i] = ans[i+1] = id++;
	}

	bool flag = 0;
	for(auto x: ans){
		cout << (flag? " " : "") << x;
		flag = 1;
	}
	cout << '\n';
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