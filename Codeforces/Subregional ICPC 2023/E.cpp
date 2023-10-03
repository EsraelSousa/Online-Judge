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

const int MAXN = 1e6+5;

int cont[MAXN];

int main(){
    fast
    int n, k, atual = 0;
    cin >> n >> k;
    while(n--){
    	int x;
    	cin >> x;
    	atual = max(atual, x);
    	cont[x]++;
    }
    for(; atual > 0; atual--){
    	int x = atual;
    	int sum = 0;
    	while(x){
    		sum += x%10;
    		x /= 10;
    	}
    	if(cont[atual] >= k){
    		cout << sum << '\n';
    		return 0;
    	}
    	cont[atual - sum] += cont[atual];
    	k -= cont[atual];
    }
    cout << "0\n";
    return 0;
}
