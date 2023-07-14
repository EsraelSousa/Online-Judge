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
    vvi freq(6, vi(12, 0));
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<6; j++){
            cin >> s;
            for(auto &x: s)
                freq[j][x-'A']++;
        }
    }
    for(int i=0; i<6; i++){
        s = "";
        for(int j=0; j<12; j++){
            if(freq[i][j] == n)
                s.push_back((char)('A'+j));
        }
        cout << s << (i == 5? '\n' : ' ');
    }
    return 0;
}