#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <stdlib.h>

using namespace std;

typedef pair<int, int> pii;
#define F first
#define S second

map<int, int > di;
int n;
vector<pii> querys;
int ans[100005];

int coloca(int v, int p){
	int res=0;
	if(di[v] == v) res = -1;
	if(di[v] == v-1) res = 1;
	di[v]++;
	return res;
}

int retira(int v, int p){
	int res=0;
	if(di[v] == v) res = -1;
	if(di[v] == v+1) res = 1;
	di[v]--;
	return res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int q, l, r, x;
    cin >> n >> q;
    vector<int> vals(n+5), id(q);
    for(int i=1; i<=n; i++){
    	cin >> vals[i];
    	di[ vals[i] ]=0;
    }
    for(int i=0; i<q; i++){
    	id[i] = i;
    	cin >> l >> r;
    	querys.push_back({min(l,r), max(l, r)});
    }
    sort(id.begin(), id.end());
    //for(int i: id) cout << i << '\n';
    int res=0;
    l = querys[ id[0] ].F, r = querys[ id[0] ].S;
    for(int p=l; p<=r; p++){
    	res += coloca(vals[p], p);
    }
    ans[ id[0] ] = res;
    for(int i=1; i<q; i++){
    	// retira os eleme
    	while(l < querys[ id[i] ].F && l <= r){
    		res += retira(vals[l], l);
    		l++;
    	}
    	
    	if(r < querys[ id[i] ].F){
    		l = querys[ id[i] ].F, r = querys[ id[i] ].S;
    		for(int p=l; p<=r; p++){
    			res += coloca(vals[p], p);
    		}
    	}
    	else if(r > querys[ id[i] ].S){
    		while(r > querys[ id[i] ].S){
    			res += retira(vals[r], r);
    			r--;
    		}
    	}
    	else{
    		for(int p=r+1; p<=querys[ id[i] ].S; p++)
    			res += coloca(vals[p], p);
    		r = querys[ id[i] ].S;
    	}
    	ans[ id[i] ] = res;
    }
    // respostas das querys
    for(int i=0; i<q; i++) cout << ans[i] << '\n';
    return 0;
}
