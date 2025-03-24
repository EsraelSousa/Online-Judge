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
    vector<string> nextBlock = {"0", "45", "", "45", "32", "8", "23", "8", "67"};

    for(int t = 1; ; t++){
        cin >> s;
        if(s == "0")
            break;
        cout << t << ". ";
        if(s[0] != '1' or s.back() != '2'){
            cout << "NOT\n";
            continue;;
        }
        bool isOk = 1;
        for(int i=0; i<sz(s)-1; i++){
            int num = s[i] - '0';
            if(i>0 && num == 1 || num == 2){
                isOk = 0;
                break;
            }
            if(nextBlock[num].find(s[i+1]) == string::npos){
                isOk = 0;
                break;
            }
        }
        cout << (isOk? "VALID\n" : "NOT\n");
    }
    return 0;
}