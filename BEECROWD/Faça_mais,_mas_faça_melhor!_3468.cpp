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
    string s;
    cin >> s;
    for(int i=0; i<sz(s); i++)
    	s[i] = tolower(s[i]);
    cout << ((s == "oposicao" || s == "contrariedade")? "mas\n" : "mais\n");
    return 0;
}
