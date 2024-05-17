#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <set>
#include <string.h>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <cmath>
#include <numeric>
#include <string>
#include <ctype.h>
#include <tuple>

// feito em celular

//   #include <bits/stdc++.h>
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

const int MAXN = 1e3+5;
const int INF = 1e9;


void task(){
	int n;
	int sum = 0;
	cin >> n;
	vi palitos(n);
	for(auto &x: palitos){
		cin >> x;
		sum += x;
	}
	sort(all(palitos));
	int ans = n;
	n--;
	while(n>=2 && 2*palitos[n] >= sum){
		sum -= palitos[n];
		n--;
		ans--;
	}
	cout << (ans >2? ans : 0) << '\n';
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
