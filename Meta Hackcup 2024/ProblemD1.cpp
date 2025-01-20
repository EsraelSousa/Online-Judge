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

const int MAXV = 1e6+1;

vi brute(vi &v){
    int n = size(v);
    vi ans;
    vi aux(MAXV, -1);
    for(int i=0; i<n; i++){
        int curr = v[i];
        for(int j=1; j<=v[i]; j++)
            if(aux[j] != -1)
                swap(curr, aux[j]);
        aux[ v[i] ] = curr;
    }
    for(int i=1; i<MAXV; i++)
        if(aux[i] != -1) ans.push_back(aux[i]);
    return ans;
}

void task(){
    int n, G;
    cin >> n >> G;
    vector<ii> elements;
    vi energies(n);
    ii curr;
    for(int i=0; i<n; i++){
        cin >> energies[i];
        curr = {energies[i], i+1};
        elements.push_back(curr);
    }
    reverse(all(elements));
    sort(all(energies));
    /*for(auto it: elements)
        cout << it.ff << ' ';
    cout << '\n';*/
    // in left
    if(G < energies[0]){
        cout << elements[0].ss << ' ' << abs(energies[0] - G) << '\n';
    }
    // in right
    else if(G > energies[n-1]){
        cout << elements[n-1].ss << ' ' << abs(energies[n-1] - G) << '\n';
    }
    // in midle
    else{
        int p = (int)(lower_bound(all(energies), G) - energies.begin());
        if(abs(G - energies[p]) <= abs(G - energies[p-1]))
            cout << elements[p].ss << ' ' << abs(G - energies[p]) << '\n';
        else
            cout << elements[p-1].ss << ' ' << abs(G - energies[p-1]) << '\n';
    }
}

int main(){
    fast
    int tes;
    cin >> tes;
    for(int i=1; i<=tes; i++){
        cout << "Case #" << i << ": ";
        task();
    }
    return 0;
}