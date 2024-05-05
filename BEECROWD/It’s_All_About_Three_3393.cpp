#include <bits/stdc++.h>

using namespace std;

bool isgood[1000005];
vector<int> series;

bool isprime(int n){
	for(int i=2; i*i <= n; i++)
		if(n % i == 0) return 0;
	return 1;
}

int getAns(int n){
	if(isgood[n]) return 1;
	int i = series.size() - 1;
	while(n > 1 && i >= 0){
		while(n % series[i] == 0)
			n /= series[i];
		i--;
	}
	return (n == 1);
}

int main(){
	int n;
	for(int i=3; i<1e6; i++)
		if(isprime(i) && i%10 == 3){
			series.push_back(i);
			isgood[i] = 1;
		}
	while(cin >> n && n != -1){
		cout << n << (getAns(n)? " YES" : " NO") << '\n';
	}
	return 0;
}