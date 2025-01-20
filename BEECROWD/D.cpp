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

void task(){
    int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        unordered_map<long long, int> prefix_map;
        long long prefix_sum = 0;
        int last_end = -1;
        int ans = 0;
        
        prefix_map[0] = -1;
        for (int i = 0; i < n; ++i) {
            prefix_sum += a[i];
            if (prefix_map.find(prefix_sum) != prefix_map.end() && prefix_map[prefix_sum] >= last_end) {
                ans++;
                last_end = i;
            }
            prefix_map[prefix_sum] = i;
        }
        
        cout << ans << endl;
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--)
        task();
    return 0;
}