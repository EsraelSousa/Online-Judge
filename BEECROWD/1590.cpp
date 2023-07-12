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

int n, k;
ll cont[40];
vi val[40];
ll num[40];

int liga(ll x){
	int ans = 0;
	for(int i=0; i<36; i++)
		ans += (((1LL << i) & x) != 0);
	return ans;
}

void printa(ll x){
	for(int i=0; i<36; i++)
		if((1LL < i) & x)
		cout << i+1 << ' ';
	cout << "conj\n";
}

void eleme(int p){
	for(auto &x: val[p])
		cout << x << ' ';
	cout << " elem " << p << '\n';
}

vi ope(vi &a, vi &b){
	vi ans;
	for(auto &x: a)
		for(auto &y: b)
			if(x == y)
				ans.push_back(x);
	return ans;
}

ll solve(){
	printa(cont[28] & cont[27] & cont[20] & cont[19]);
	cout << " gddhf\n";
	ll ans = 0;
	ll num = 0;
	int i = 29;
	while(i >= 0 && liga(cont[i]) < k) i--;
	if(i>=0){
		ans |= (1 << i);
		num = cont[i];
	}
	printa(num);
	cout << i << " initial\n";
	//cout << liga(cont[i]) << ' ';
	for(i--; i>=0; i--){
		ll aux = num & cont[i];
		if(liga(aux) >= k){
			printa(aux);
			cout << i << " nxt\n";
			ans |= (1LL << i);
			num = aux;
		}
	}
	cout << ans << " ans\n";
	ll con;
	for(int c = 29; c>=0; c--){
		if(liga(cont[c] < k))
			continue;
		num = cont[c];
		ll x = (1LL << c);
		for(i = c-1; i>=0; i--){
			ll aux = num & cont[i];
			if(liga(aux) >= k){
				num = aux;
				x |= (1LL < i);
			}
			if(x == 404226048)
				cout << " pasasa\n";
			ans = max(ans, x);
		}
	}
	//cout << num << " conh\n";
	return ans;
}

int t = 1;

void brute(){
	int i = 29;
	ll res = (1LL << 30) - 1;
	vi ans;
	while(i >= 0 && sz(val[i]) < k) i--;
	if(i < 0){
		cout << "0\n";
		return ;
	}
	res = (1LL << i);
	ans = val[i];
    //cout << "2^" << i << "+ " << (1LL << i) <<  ' ' << res << '\n';
    for(i--; i>= 0; i--){
		vi aux = ope(ans, val[i]);
		if(sz(aux) >= k){
			ans = ope(ans, val[i]);
			res += (1LL << i);
			//cout << "2^" << i << "+ " << (1LL << i) <<  ' ' << res << '\n';
		}
	}
	//cout << "\n";
	cout << res << '\n';
}

void task(){
	cin >> n >> k;
	ll x;
	for(int i=0; i<40; i++)
        val[i].clear();
	memset(cont, 0, sizeof(cont));
	for(int j=0; j<n; j++){
		cin >> x;
		num[j+1] = x;
		//cout << x << " " << j << " xj\n";
		/*for(int i=0; i<30; i++)
			if((1LL << i) & x){
				cont[i] |= (1LL << j);
				//cout << 2 << '^' << i << '\n';
			}*/
		
		int i = 0;
		while(x > 0){
			if(x % 2)
				val[i].push_back(j+1);
			i++;
			x /= 2;
		}
	}
	//eleme(28); eleme(27); eleme(20); eleme(19);
	/*vi ans = ope(val[28], val[27]);
	ans = ope(ans, val[20]);
	ans = ope(ans, val[19]);*/
	/*for(auto &e: ans)
		cout << e << ' ';
	cout << " fim\n";*/
	brute();
	//cout << solve() << "\n";
	t++;
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--)
    	task();
    return 0;
}
