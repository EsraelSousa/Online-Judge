#include <bits/stdc++.h>

using namespace std;

string number;

#define ll long long

ll memo[30][230];

ll solve(int pos, int prev, int len){
    if(pos == len) return 1;
    ll &ans = memo[pos][prev];
    if(ans != -1) return ans;
    ans = 0;
    int value = 0;
    for(int i = pos; i < len; i++){
      value += number[i] - '0';
      if(value >= prev) ans += solve(i+1, value, len);
    }
    return ans;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
	int test = 1;
	while(cin >> number && number != "bye"){
	  memset(memo, -1, sizeof(memo));
	  cout << test++ << ". " << solve(0, 0, number.size()) << '\n';
}
	return 0;
}
