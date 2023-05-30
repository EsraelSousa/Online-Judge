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

int main(){
    fast
    int n;
    set<string> disponiveis;
    cin >> n;
    vector<string> names(n);
    vector<vector<string>> lobos(n, vector<string> (n, ""));
    for(int i=0; i<n; i++){
        cin >> names[i];
        for(int j=0; j<n; j++){
            cin >> lobos[i][j];
            disponiveis.insert(lobos[i][j]);
        }
    }
    vector<string> ans(n, "");
    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            if(disponiveis.find(lobos[i][j]) != disponiveis.end()){
                ans[i] =  lobos[i][j];
                disponiveis.erase(lobos[i][j]);
                
            }
        }
    }
    for(int i=0; i<n; i++)
        cout << names[i] << ' ' << ans[i] << '\n';
    return 0;
}