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

int n, m;
vi last;

bool solve(vi &current){
	queue<vi> queueVectors;
	set<vi> used;
	queueVectors.push(current);
	used.insert(current);
	while(sz(queueVectors)){
		current = queueVectors.front();
		queueVectors.pop();
        // Found the final vector
		if(sz(current) == sz(last) && equal(all(current), all(last)))
			return true;
		
		// considers folds to the left and right
		for(int i=0; i<sz(current)/2+1; i++){
			vi ans;
			int j;
			for(j=sz(current)-1; j>=i; j--)
				ans.pb(current[j]);
			
			for(int k=sz(ans)-1, j=i-1; j>=0; k--, j--)
				ans[ k] += current[j];
			
			if(used.find(ans) == used.end()){
				queueVectors.push(ans);
				used.insert(ans);
			}
		}

	}

	return false;
}

void task(){
	while(cin >> n){
		vi init(n);
		for(auto &x: init) cin >> x;
		cin >> m;
		last.resize(m);
		for(auto &x: last) cin >> x;
		
		cout << (solve(init)? "S\n" : "N\n");
	}
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
