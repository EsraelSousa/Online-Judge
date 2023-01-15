#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dp[550];
bool vis[550];

int op(int x, int p){
	return (x & (1<<p))? x - (1<<p) : x | (1<<p);
}

int muda(int x, int p){
	if(p == 0){
		x = op(x, 0);
		x = op(x, 3);
		x = op(x, 1);
	}
	else if(p == 1){
		x = op(x, 1);
		x = op(x, 2);
		x = op(x, 0);
		x = op(x, 4);
	}
	else if(p == 2){
		x = op(x, 2);
		x = op(x, 1);
		x = op(x, 5);
	}
	else if(p == 3){
		x = op(x, 3);
		x = op(x, 0);
		x = op(x, 6);
		x = op(x, 4);
	}
	else if(p == 4){
		x = op(x, 4);
		x = op(x, 1);
		x = op(x, 5);
		x = op(x, 7);
		x = op(x, 3);
	}
	else if(p == 5){
		x = op(x, 5);
		x = op(x, 2);
		x = op(x, 4);
		x = op(x, 8);
	}
	else if(p == 6){
		x = op(x, 6);
		x = op(x, 3);
		x = op(x, 7);
	}
	else if(p == 7){
		x = op(x, 7);
		x = op(x, 4);
		x = op(x, 6);
		x = op(x, 8);
	}
	else if(p == 8){
		x = op(x, 8);
		x = op(x, 5);
		x = op(x, 7);
	}
	return x;
}

void cont(int est, int p){
	priority_queue<pair<int, int>> f;
	dp[est] = 0;
	int x;
	f.push({p, est});
	while(f.size()){
		p = -f.top().first;
		est = f.top().second;
		f.pop();
		if(vis[est]) continue;
		vis[est] = 1;
		for(int i=0; i<9; i++){
			x = muda(est, i);
			if(dp[est] + 1 < dp[x]){
				dp[x] = dp[est]+1;
				f.push({-dp[x], x});
			}
		}
	}
}

void pre(){
	for(int i=0; i<512; i++) dp[i] = 1e9;
	memset(vis, 0, sizeof(vis));
	cont(0, 0);
	memset(vis, 0, sizeof(vis));
	cont(511, 0);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int tes;
    pre();
    while(cin >> tes){
        int F = 0, J = 0;
        char c;
        while(tes--){
            int j = 0, f = 0;
            for(int i=0; i<9; i++){
                cin >> c;
                if(c == '*') f |= (1<<i);
            }
            for(int i=0; i<9; i++){
                cin >> c;
                if(c == '*') j |= (1<<i);
            }
            F += (dp[f] < dp[j]);
            J += (dp[f] > dp[j]);
        }
        cout << ((F == J)? "Its a draw!\n" : ((F > J)? "Fred wins!\n" : "Jason wins!\n"));
    }
   	return 0;
}