#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 2*1e5+5;
int n;
ll values[MAXN];

ll kadane(){
    ll maxSum = values[0], sum = 0;
    for(int i=0; i<n; i++){
        sum += values[i];
        maxSum = max(maxSum, sum);
        sum = (sum < 0)? 0 : sum;
    }
    return maxSum;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;
    for(int i=0; i<n; i++) cin >> values[i];
    cout << kadane() << '\n';
    return 0;
}