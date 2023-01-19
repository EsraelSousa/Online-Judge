#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;
const int IFN = 1e5+2;
int v[MAXN], answers[MAXN];
int id[MAXN];
int ans=0;

int brute(int l, int r){
	map<int, int> conts;
	map<int, int>:: iterator it;
	int ans = 0;
	for(int i=l; i<=r; i++){
		if(conts.find(v[i]) == conts.end())
			conts[v[i]] = 0;
		conts[v[i]]++;
	}
	it = conts.begin();
	for(; it != conts.end(); it++)
		ans += (it->first == it->second);
	return ans;
}


int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, q, l, r;
	cin >> n >> q;
    for(int i=1; i<=n; i++){
 		cin >> v[i];
 		if(v[i] > n) v[i] = IFN;
 	}
    while(q--){
        cin >> l >> r;
        cout << brute(min(l, r), max(l, r)) << '\n';
    }
    return 0;
}