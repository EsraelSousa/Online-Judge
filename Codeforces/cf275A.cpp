#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
int ans[3][3];

bool isValido(int x, int y){
    return x >= 0 && x < 3 && y >= 0 && y < 3;
}

int main(){
    fast
    // inicia
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)  
            ans[i][j] = 1;
    //processa
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++){
            int x; cin >> x;
            ans[i][j] += x;
            for(int d=0; d<4; d++)
                if(isValido(i+dx[d], j+dy[d]))
                    ans[ i+dx[d] ][ j+dy[d] ] += x;
        }
    // printa
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)  
            cout << ans[i][j]%2;
        cout << '\n';
    }
    return 0;
}