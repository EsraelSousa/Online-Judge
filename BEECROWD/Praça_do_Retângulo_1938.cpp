/*
Ideia:
O problema pede para contar quantos retangulos é possivel forma sem que tenha outros pontos 
dentro deste restangulo.

A ideia da solução é fixar uma ponta do retangulo e ir andando nos pontos ordenado para pe-
gar os retangulos que não tem nenhum ponto dentro, como os os pontos estão ordenados dá para 
ir limitando os extremos do retangulo maximo possivel.

*/

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

const int INF = 1e9;

int main(){
    fast
    int n, ans = 0;
    cin >> n;
    vector<ii> points(n);
    for(auto &x: points)
        cin >> x.ff >> x.ss;
    
    sort(all(points));
    
    for(int i=0; i<n; i++){
        int l = -INF, r = INF;
        for(int j=i+1; j<n; j++){
            if(points[j].ss > points[i].ss && points[j].ss < r){
                r = points[j].ss;
                ans++;
            }
            if(points[j].ss < points[i].ss && points[j].ss > l){
                l = points[j].ss;
                ans++;
            }
        }
    }

    cout << ans << '\n';
    return 0;
}