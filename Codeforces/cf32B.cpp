#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define fs first
#define sd second;
#define all(x) x.begin(), x.end()
#define left(x) (2*x)
#define right(x) (2*x + 1)

int main(){
    fast
    char c, next;
    while(cin >> c){
        if(c == '.') cout << '0';
        else{
            cin >> next;
            cout << ((next == '.')? '1' : '2');
        }
    }
    cout << '\n';
    return 0;
}