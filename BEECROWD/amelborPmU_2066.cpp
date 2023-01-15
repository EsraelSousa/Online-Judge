#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll qtd_palindrome(int x){
    x /= 2LL;
    ll ans = 9;
    for(int i=1; i<x; i++) ans *= 10LL;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int k;
    ll ans[20];
    ans[1] = 0LL;
    ans[2] = 36LL;
    for(int i=3; i<=18; i++){
        if(i & 1){
            ans[i] = ans[i-1] * 10LL;
        }
        else{
            ans[i] = ans[i-2] * 100LL;
            ans[i] += 45LL * qtd_palindrome(i - 2);
        }
    }
    cin >> k;
    cout << ans[k] << '\n';
    return 0;
}