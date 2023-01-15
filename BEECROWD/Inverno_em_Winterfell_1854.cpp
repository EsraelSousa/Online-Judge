#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAXN = 1e3+5;
const int MAXF = 1e7+5;
const int MOD = 1e9+7;
ll bit[MAXN][MAXN];
ll Fat[MAXF];
int N, M;

void add(int x, int y, int val){
	for(; x<=N; x += x & -x)
		for(int y1 = y; y1 <=M; y1 += y1 & -y1)
			bit[x][y1] += val;
}

ll getSum(int x, int y){
	ll sum = 0;
	for(; x > 0; x -= x & -x)
		for(int y1 = y; y1 > 0; y1 -= y1 & -y1)
			sum += bit[x][y1];
	return sum;
}

void preCall(){
	Fat[0] = 1;
	for(int i=1; i<=1e7; i++)
		Fat[i] = (Fat[i-1] * i) % MOD;
}

ll fastPow(ll base, ll expoe){
	ll ans = 1LL;
	while(expoe){
		if(expoe & 1) ans = (base * ans) % MOD;
		base = (base * base) % MOD;
		expoe >>=1;
	}
	return ans%MOD;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    preCall();
    int day = 1;
    cin >> N >> M;
    cin.ignore();
    string query;
    while(getline(cin, query)){
    	stringstream t(query);
    	vector<string> qtd;
    	
    	while(t >> query)
    		//cout << query << '\n';
    		qtd.push_back(query);
    	if(qtd.size() == 2){
            int x, y;
            x = stoi(qtd[0]);
            y = stoi(qtd[1]);
    		ll v = getSum(x, y) - getSum(x-1, y) - getSum(x, y-1) + getSum(x-1, y-1);
    		add(x, y, -v);
    		//cout << x << ' ' << y << ' ' << -v << " ret\n";
    	}
    	else if(qtd.size() == 3){
            int x, y, v;
            x = stoi(qtd[0]);
            y = stoi(qtd[1]);
            v = stoi(qtd[2]);
    		add(x, y, v);
    	}
    	else{
            int x1, x2, y1, y2, cenoura;
            x1 = stoi(qtd[0]);
            y1 = stoi(qtd[1]);
            x2 = stoi(qtd[2]);
            y2 = stoi(qtd[3]);
            cenoura = stoi(qtd[4]);
    		ll v = getSum(x2, y2) - getSum(x1-1, y2) - getSum(x2, y1-1) + getSum(x1-1, y1-1);
    		ll n = cenoura - 1 + v;
    		ll k = v - 1;
    		//cout << n << ' ' << k <<  ' ' << v-1 << '\n';
    		cout << "Day #" << day << ": " << (Fat[n] * fastPow((Fat[k] * Fat[n-k]) % MOD, MOD-2)) % MOD << '\n';
    		day++;
    	}
    }
    return 0;
}