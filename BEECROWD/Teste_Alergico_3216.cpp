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

const int INF = 1e9;

int k, durantion[20];
int memo[1 << 20][8];

int solve(int mask, int day){
    if(mask == 0) return day;
    int last = -1;
    int &best = memo[mask][day];
    if(best != -1) return best;
    best = INF;
    for(int i=0; i<k; i++){
        if(!((1<<i) & mask)) continue;
        if(durantion[i] == last) continue;
        last = durantion[i];
        int b = max(0, day - durantion[i] + 1);
        int br = b + durantion[i];
        int w = day + 1 + solve(mask - (1 << i), br - (day+1));
        best = min(best, w);
    }
    return best;
}

int main(){
    fast
    cin >> k;
    for(int i=0; i<k; i++)
        cin >> durantion[i];
    sort(durantion, durantion+k);
    memset(memo, -1, sizeof(memo));
    cout << solve((1 << k) - 1, 0) << '\n';
    return 0;
}