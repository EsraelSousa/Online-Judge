#include <bits/stdc++.h>

// problema paradox birthday

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(nullptr);
	int n, d;
	double ans = 1;
	cin >> d >> n;
	for(int i=1; i<n; i++){
		ans *= (1.0 - (1.0 * i / d));
	}
	cout << fixed << setprecision(2) << 100 * (1-ans) << '\n';
    return 0;
}
