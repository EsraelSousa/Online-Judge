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

int main(){
    fast
    int n;
    string s;
    while(cin >> n && n){
        while(n--){
            cin >> s;
            int ans = 0;
            int ones = 0, zeros = 0;
            for(int i=0; i<sz(s); i++)
                (i & 1)? ones += s[i]-'0' : zeros += s[i]-'0';
            while(zeros){
                ans += zeros%10;
                zeros /= 10;
            }
            while(ones){
                ans += ones%10;
                ones /= 10;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}