#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, ans = 1, x;
    cin >> n;
    vector<int> position(n+1);
    for(int i=1; i<=n; i++){
        cin >> x;
        position[x] = i;
    }
    for(int i=2; i<=n; i++){
        if(position[i] < position[i-1])
            ans++;
    }
    cout << ans << '\n';
    return 0;
}