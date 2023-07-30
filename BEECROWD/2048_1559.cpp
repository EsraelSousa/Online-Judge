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
    vvi mat(4, vi(4));
    bool flag = 0;
    for(int i=0; i<4; i++)
        for(auto &x: mat[i]){
            cin >> x;
            if(x == 2048)
                flag = 1;
        }
    // has 2048
    if(flag){
        cout << "NONE\n";
        return ;
    }
    
    // DOWN
    for(int i=0, p = 1; i<3 && p; i++)
        for(int j=0; j<4 && p; j++)
            if(mat[i][j] != 0 && (mat[i+1][j] == 0 || mat[i+1][j] == mat[i][j])){
                cout << "DOWN";
                p = 0;
                flag = 1;
            }
    // LEFT
    for(int i=0, p = 1; i<4 && p; i++)
        for(int j=3; j>0 && p; j--)
            if(mat[i][j] != 0 && (mat[i][j-1] == 0 || mat[i][j-1] == mat[i][j])){
                if(flag) cout << ' ';
                cout << "LEFT";
                p = 0;
                flag = 1;
            }
    // RIGTH
    for(int i=0, p = 1; i<4 && p; i++)
        for(int j=0; j<3 && p; j++)
            if(mat[i][j] != 0 && (mat[i][j+1] == 0 || mat[i][j+1] == mat[i][j])){
                if(flag) cout << ' ';
                cout << "RIGHT";
                p = 0;
                flag = 1;
            }
    // UP
    for(int i=3, p = 1; i>0 && p; i--)
        for(int j=0; j<4 && p; j++)
            if(mat[i][j] != 0 && (mat[i-1][j] == 0 || mat[i-1][j] == mat[i][j])){
                if(flag) cout << ' ';
                cout << "UP";
                p = 0;
                flag = 1;
            }
    // not find moviment
    cout << (flag? "" : "NONE") << '\n';
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--)
        task();
    return 0;
}