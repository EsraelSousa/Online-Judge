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

char mat[3][5];

bool find(char c){
    int cont = 0;
    //  find nas linhas
    for(int i=0; i<3; i++){
        cont = 0;
        for(int j=0; j<3; j++)
            cont += (mat[i][j] == c);
        if(cont == 3) return 1;
    }
    // find nas colunas
    for(int j=0; j<3; j++){
        cont = 0;
        for(int i=0; i<3; i++)
            cont += (mat[i][j] == c);
        if(cont == 3) return 1;
    }
    // find na diagonal principal
    cont  = 0;
    for(int i=0; i<3; i++)
        cont += (mat[i][i] == c);
    if(cont == 3) return 3;
    // find na diagonal secundaria
    cont  = 0;
    for(int i=2; i>=0; i--)
        cont += (mat[i][2-i] == c);
    if(cont == 3) return 1;
    // não encontrou 
    return 0;
}

void task(){
    string s = "XO+";
    for(int i=0; i<3; i++) cin >> mat[i];
    for(auto &c: s){
        if(find(c)){
            cout << c <<"\n";
            return;
        }
    }
    cout << "DRAW\n";
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--) task();
    return 0;
}