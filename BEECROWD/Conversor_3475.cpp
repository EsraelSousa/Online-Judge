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
    map<string, string> id = {{"0", "zero"}, {"1", "um"}, {"2", "dois"}, {"3", "tres"}, {"4", "quatro"}, {"5", "cinco"},
                            {"6", "seis"}, {"7", "sete"}, {"8", "oito"}, {"9", "nove"}, {"um", "1"},
                            {"dois", "2"}, {"tres", "3"}, {"quatro", "4"}, {"cinco", "5"}, {"seis", "6"},
                            {"sete", "7"}, {"oito", "8"}, {"nove", "9"}, {"zero", "0"}};
    string s;
    cin >> s;
    cout << id[s] << '\n';
    return 0;
}