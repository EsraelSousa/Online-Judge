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

const int MAXN = 1e6+2;

vi divisores[MAXN];

void preCalculaDivisores(int i){
		for(int j=1; j*j <= i; ++j)
            if(i % j == 0){
			    divisores[i].push_back(j);
                if(i/j != j)
                    divisores[i].push_back(i/j);
            }
        sort(all(divisores[i]));
    
}

int gcd(int a, int b){
	return !b? a : gcd(b, a%b);
}

int main(){
    fast
    int n, a, b;
    while(cin >> n >> a >> b && n){
    	int mmc = lcm(a, b);
    	bool flag = 0;
        if(!sz(divisores[n]))
            preCalculaDivisores(n);
    	for(auto &x: divisores[n]){
    		if(lcm(mmc, x) == n){
    			if(flag) cout << ' ';
    			cout << x;
    			flag = 1;
    		}
    	}
    	cout << '\n';
    }
    return 0;
}
