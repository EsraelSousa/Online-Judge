#pragma GCC optimize("Ofast,unroll-loops")  

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef vector<int> vi;
typedef array<int, 4> Quadrupla;
#define all(x) x.begin(), x.end()

unordered_map<ll, vector<pair<int, int>>> twoSum;
unordered_map<ll, int> pot4ToIndex;
vector<ll> pot4(217, 1);
vector<vi> solutions(100, vi(4, -1));

void precompute(ll maxN) {
    ll limit = 216;

    for (int i = 0; i <= limit; i++) {
        for (int j = 0; j < 4; j++)
            pot4[i] *= i;
        pot4ToIndex[pot4[i]] = i;
    }
    ll maxSum = 0;
    for (int a = 0; a <= limit; a++) {
        ll a4 = pot4[a];
        for (int b = a; b <= limit && a4 + pot4[b] <= maxN; b++) {
            ll sum = a4 + pot4[b];
            twoSum[sum].push_back({a, b});
        }
    }
}

void solve(ll n) {
    if (n == 0) {
        cout << "1\n0 0 0 0\n";
        return;
    }

    int ans = 0;

    for (int i = 0; i < pot4.size() && pot4[i] <= n; i++) {
        for(int j=i; j<pot4.size() && pot4[i] + pot4[j] <= n; j++){
            ll remaining = n - pot4[i] - pot4[j];
            if(remaining < 0)
                break;
            if(twoSum.count(remaining)){
                auto it = lower_bound(all(twoSum[remaining]), make_pair(j, j));
                while(it != twoSum[remaining].end()){
                    solutions[ans][0] = i;
                    solutions[ans][1] = j;
                    solutions[ans][2] = it->first;
                    solutions[ans++][3] = it->second;
                    it++;
                }

            }
        }
    }

    cout << ans << '\n';
    for (int i=0; i<ans; ++i) {
        for(int j=0; j<4; j++)
            cout << solutions[i][j] << " \n"[j == 3];
    }
}

int main() {
    fast;
    ll maxN = (1LL << 31) - 1;
    precompute(maxN);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}
