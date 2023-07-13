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

const int MAXN = 1e3+5;

int N, C, T1, T2;
int memo[MAXN];
int position[MAXN];

int solve(int p){
    if(p == N) 
        return 0;
    int &ans = memo[p];
    if(ans != -1) return ans;
    //cout << p << '\n';
    int p_aux = p;
    while(p_aux + 1 < N && position[p_aux+1] <= position[p] + T1)
        p_aux++;
    ans = T1 + solve(p_aux+1);
    p_aux = p;
    while(p_aux + 1 < N && position[p_aux+1] <= position[p] + T2)
        p_aux++;
    ans = min(ans, T2 + solve(p_aux+1));
    return ans;
}

int main(){
    fast
    while(cin >> N >> C >> T1 >> T2){
        memset(memo, -1, sizeof(memo));
        for(int i=0; i<N; i++)
            cin >> position[i];
        cout << solve(0) << '\n';
    }
    return 0;
}