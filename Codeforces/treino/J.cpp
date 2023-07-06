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

int main(){
    fast
    int n;
    cin >> n;
    vi ordem(3);
    for(int i=0; i<3; i++){
        int x;
        cin >> x;
        ordem[i] = x;
    }
    //for(auto &x: ordem) cout << x << ' ';
    //cout << "\n";
    int tes = 6;
    vi ans, aux;
    int p = 0;
    ans.push_back(ordem[p]);
    aux.push_back(p);
    while(tes--){
        p = ordem[p];
        aux.push_back(p);
        ans.push_back(ordem[p]);
    }
    /*for(auto &x: ans) cout << x << ' ';
    cout << '\n';
    for(auto &x: aux) cout << x << ' ';
    cout << '\n';*/
    set<int> used;
    p = 0;
    for(auto &x: aux){
        if(used.find(x) != used.end()){
            cout << p << '\n';
            break;
        }
        p++;
        used.insert(x);
    }
    cout << aux[n % 6] << '\n';
    return 0;
}