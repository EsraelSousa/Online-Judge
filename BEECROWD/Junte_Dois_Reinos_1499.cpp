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

const int MAX = 4e4+5;

vi adj[MAX];
ull maxDist[2][MAX];
bool vis[MAX];
ull dist, maxA, maxB;
int no;
int distancia[MAX];

using cd = complex<long double>;
const double PI = acos(-1);

void fft(vector<cd> & a, bool invert) {
    ll n = a.size();
    if (n == 1)
        return;

    vector<cd> a0(n / 2), a1(n / 2);
    for (int i = 0; 2 * i < n; i++) {
        a0[i] = a[2*i];
        a1[i] = a[2*i+1];
    }
    fft(a0, invert);
    fft(a1, invert);

    long double ang = 2 * PI / n * (invert ? -1 : 1);
    cd w(1), wn(cos(ang), sin(ang));
    for (int i = 0; 2 * i < n; i++) {
        a[i] = a0[i] + w * a1[i];
        a[i + n/2] = a0[i] - w * a1[i];
        if (invert) {
            a[i] /= 2;
            a[i + n/2] /= 2;
        }
        w *= wn;
    }
}

vector<ull> multiply(vector<ull> const& a, vector<ull> const& b) {
    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    ll n = 1;
    while (n < a.size() + b.size()) 
        n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++)
        fa[i] *= fb[i];
    fft(fa, true);

    vector<ull> result(n);
    for (int i = 0; i < n; i++)
        result[i] = round(fa[i].real());
    return result;
}

void bfs(int tree, int v, int distRoot){
    vis[v] = 1;
    queue<int> q;
    q.push(v);
    dist = distancia[v] = 0;
    memset(vis, 0, sizeof(vis));
    while(q.size()){
        v = q.front();
        q.pop();
        
        vis[v] = 1;
        
        for(auto &x: adj[v]){
            if(vis[x] == 0){
                distancia[x] = distancia[v] + 1;
                if(distancia[x] > dist){
                    dist = distancia[x];
                    no = x;
                }
                maxDist[tree][x] = max(maxDist[tree][x], (ull)(distancia[x]));
                if(!tree) maxA = max(maxA, maxDist[0][v]);
                else maxB = max(maxB, maxDist[1][v]);
                q.push(x);
            }
        }
    }
}

int main(){
    fast
    ll n, m;
    int u, v;
    while(cin >> n >> m){
        // limpa memoria
        maxA = maxB = 0;
        for(int i=1; i<=n; i++){
        	adj[i].clear();
        	maxDist[0][i] = 0;
        	vis[i] = 0;
        }
        for(int i=1; i<n; i++){
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bfs(0, 1, 0);
        bfs(0, no, 0);
        bfs(0, no, 0);
        for(int i=1; i<=m; i++){
        	adj[i].clear();
        	maxDist[1][i] = 0;
        	vis[i] = 0;
        }
        for(int i=1; i<m; i++){
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bfs(1, 1, 0);
        bfs(1, no, 0);
        bfs(1, no, 0);
        ull sum = 0;
		ull D = max(maxA, maxB);
        vector<ull> d1(D+2, 0), d2(D+2, 0);

        for(int i=1; i<=n; i++)
            d1[ maxDist[0][i]+1 ]++;
        for(int i=1; i<=m; i++)
            d2[ maxDist[1][i] ]++;
		
        vector<ull> ans = multiply(d1, d2);
        ull i=0;
        
        for(auto &x: ans){
            if(i <= D){
                sum += x * D;
                
            }
            else
                sum += x * i;
            i++;
        }
        cout << fixed << setprecision(3) << sum / (1.0*n*m) << '\n';
    }
    return 0;
}