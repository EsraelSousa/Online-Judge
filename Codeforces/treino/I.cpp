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
    int n, ans = 0;
    cin >> n;
    vi ordem(n+1), posi(n+1);

    for(int i=1; i<=n; i++){
        int x; cin >> x;
        assert(x <= n);
        ordem[x] = i;
        posi[i] = x;
    }
    //for(int i=1; i<=n; i++) cout << ordem[i] <<' ';
    //cout << '\n';
    for(int i=1; i<=n; i++){
        if(ordem[i] != i){
            ans++;
            int position = ordem[i]; // 2
            int aux = 0;
            for(int j=1; j<=n; j++)
                if(ordem[j] == i)
                    aux = j;
            ordem[aux] = position;
            ordem[i] = i;
            //for(int i=1; i<=n; i++) cout << ordem[i] <<' ';
            //cout << '\n';
        }
    }
    cout << ans << '\n';
    return 0;
}

/*
Caso que dá errado:
5
5 1 4 2 3

ans = 4
*/