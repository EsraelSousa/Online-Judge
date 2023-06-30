#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int fun(int *v, int n, int x){
	int l=0, r=n, m, ans=-1;
	//cout << x << '\n';
	while(l<=r){
		m = l + (r-l)/2;
		//cout << v[m] <<"*\n";
		if(v[m] >= x){
			ans=m;
			r=m-1;
		}else
			l = m+1;
	}
	//cout << ans << '\n';
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n, x, g, p, m, k, j=0;
	int v[300005];
	char s[300005];
	cin >> n >> x;
	cin >> s;
	cin >> p >> m >> g;
	for(int i=0; i<=n; i++) v[i]=x;
	for(int i=0; i<n; i++){
		//cout << s[i] << ' ';
		if(s[i]=='P') k=p;//v[ fun(v, n-1, p) ]-=p;
		else if(s[i]=='M') k=m;//v[ fun(v, n-1, m) ]-=m;
		else k=g;//v[ fun(v, n-1, g) ]-=g;
		int l=j;
		while(v[l] < k)
			l++;
		v[l]-=k;
		while(v[j] < p) j++;
	}
	while(v[j] < x) j++;
	cout << j << '\n';
	return 0;
}
