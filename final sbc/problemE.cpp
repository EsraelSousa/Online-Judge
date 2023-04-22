#include <bits/stdc++.h>

using namespace std;

bool isPossible(vector<int>& v, int val){
    if(v[val]) return true;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, k, e;
    cin >> n >> k >> e;
    int left = e;
    int rigth = n - e-k;
    cout << left << ' ' << rigth << '\n';
    if(e == 0) cout << 0 << '\n';
    else{
        if(left != k && rigth != k) cout << 0 << '\n';
        else{
            vector<int> valores(n+1, 1);
            valores[k] = 0;

        }
    }
    return 0;
}