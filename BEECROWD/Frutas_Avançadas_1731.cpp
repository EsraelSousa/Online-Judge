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

string minimoStringWithS1eS2Substring(string &s1, string &s2){
    string ans = s1;
    int j = 0;
    for(int i=0; i<sz(s1); i++)
        if(j < sz(s2) && s1[i] == s2[j])
            j++;
    if(j < sz(s2))
        ans += s2.substr(j);
    return ans;
}

int main(){
    fast
    string s1, s2;
    while(cin >> s1 >> s2){
        auto ans = minimoStringWithS1eS2Substring(s1, s2);
        auto op2 = minimoStringWithS1eS2Substring(s2, s1);
        if(sz(op2) < sz(ans))
            ans = op2;
        cout << ans << '\n';
    }
    return 0;
}