#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

bool comp(ii &a, ii &b){
    if(a.ff == b.ff)
        return a.ss < b.ss;
    return a.ff > b.ff;
}

int main(){
    fast
    int n, m = 0;
    ll id;
    int artigo;
    string s;
    map<ll, map<int, int>> crimes;
    map<ll, vector<ii>> indicieCrime;
    cin >> n;
    while(n--){
        cin >> id >> artigo;
        if(crimes[id].find(artigo) == crimes[id].end())
            crimes[id][artigo] = 0;
        crimes[id][artigo]++;
    }
    for(auto &idIdividuo: crimes){
        vector<ii> listaArtigos;
        for(auto &x: idIdividuo.ss){
            listaArtigos.push_back(make_pair(x.ss, x.ff));
        }
        sort(all(listaArtigos), comp);
        indicieCrime[idIdividuo.ff] = listaArtigos;
    }
    //for(auto &x: crimes) cout << x.ff << ' ' << x.ss << '\n';
    cin.ignore();
    getline(cin, s);
    for(auto &x: s)
        if(x >= '0' && x <= '9')
            m = 10*m + x - '0';
    getline(cin, s);
    while(m--){
        cin >> id;
        if(indicieCrime.find(id) == indicieCrime.end())
            cout << "Grato, cidadao " << id << ".\n";
        else{
            cout << "Teje preso, " << id << "!\n";
            for(auto &x: indicieCrime[id])
            cout << "- Art. " << x.ss << ": " << x.ff << " ocorrencia(s).\n";
        }
    }
    return 0;
}