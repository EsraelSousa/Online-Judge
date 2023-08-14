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
#define precision(x) fixed << setprecision(x)

const int MAXN = 5e4+5;

int n;
ii points[MAXN];

double hypot(double x1, double y1, double x2, double y2){
	double x = x1 - x2;
	double y = y1 - y2;
	return sqrt(x * x + y * y);
}

double maxDist(double x){
	double ans = 0;
	for(int i=0; i<n; i++)
		ans = max(ans, hypot(x, 0, points[i].ff, points[i].ss));
	return ans;
}

int main(){
    fast
    int X;
    cin >> n >> X;
    for(int i=0; i<n; i++)
    	cin >> points[i].ff >> points[i].ss;
    double l = 0, r = X;
    while(r - l > 1e-4){
    	double p1 = l + (r-l)/3;
    	double p2 = l + 2*(r-l)/3;
    	if(maxDist(p1) > maxDist(p2))
    		l = p1;
    	else
    		r = p2;
    }
    cout << precision(2) << l << ' ' << maxDist(l) << '\n';
    return 0;
}
