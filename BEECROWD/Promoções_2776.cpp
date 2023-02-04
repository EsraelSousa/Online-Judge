#include <bits/stdc++.h>

using namespace std;

int val[105];
const int MAXV = 2005;
int first[MAXV];
int value[MAXV];
bool ready[MAXV];
vector<int> coins;

int solve(int w){
	value[0] = 0;
	memset(ready, 0, sizeof(ready));
	ready[0] = true;
    for (int x = 1; x <= w; x++) {
        value[x] = 0;
        for (auto c : coins) {
            if (x-c >= 0 && ready[x-c] && value[x-c]+val[c] > value[x]) {
                value[x] = value[x-c]+val[c];
                first[x] = c;
                ready[x] = true;
            }
        }
    }
    int ans = 0;
    while (w > 0) {
        ans += val[first[w]];
        w -= first[w];
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int N, W;
    while(cin >> N >> W){
        coins.clear();
        memset(val, 0, sizeof(val));
        int a, b;
    	for(int i=0; i<N; i++){
    	    cin >> a >> b;
    	    val[a] = max(val[a], b);
    	}
    	for(int i=0; i<= 100; i++) 
    	    if(val[i])
    	        coins.push_back(i);
    	cout << solve(W) << '\n';
    }
    return 0;
}
