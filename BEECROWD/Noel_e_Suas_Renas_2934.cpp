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

const int MAXV = 1e6+5;

vector<ii> l2r[MAXV], r2l[MAXV];

int low(vector<ii> &vetor, int x){
	int ans = vetor.size();
	if(ans == 0) return ans;
	int l = 0, r = ans-1, meio;
	while(l <= r){
		meio = l + (r-l)/2;
		if(vetor[meio].ff >= x){
			ans = meio;
			l = meio+1;
		}
		else
			r = meio-1;
	}
	return ans < vetor.size()? vetor[ans].ss : 0;
}

int upp(vector<ii> &vetor, int x){
	if(vetor.size() == 0) return 0;
	if(vetor[0].ff > x) return 0;
	int r = vetor.size()-1, l=0, ans = 0, m;
	while(ans + 1 <= r && vetor[ans+1].ff <= x) ans++;
	/*while(l <= r){
		m = l + (r-l)/2;
		if(vetor[m].ff >= x){
			r = m-1;
		}
		else{
			l = m+1;
			ans = m;
		}
	}*/
	return vetor[ans].ss;
}

int getLast(vector<ii> &vetor){
	return (vetor.size() == 0)? 0 : vetor[ vetor.size() - 1 ].ss;
}

int main(){
    fast
    int n, ans = 0;
    ii pii;
    cin >> n;
    vi values(n);
    for(auto &x: values) cin >> x;
    for(int i=0; i<n; i++){
    	int x = values[i];
    	int qtd = 1 + getLast(l2r[x-1]);
    	ans = max(ans, qtd + 1);
    	pii = make_pair(i, qtd);
    	l2r[x].push_back(pii);
    }
    for(int i=n-1; i>=0; i--){
    	int x = values[i];
    	int qtd = 1 + getLast(r2l[x+1]);
    	int xi = (x-2 >= 1)? upp(l2r[x-2], i) : 0;
    	ans = max(ans, qtd + xi + 1);
    	pii = make_pair(i, qtd);
    	r2l[x].push_back(pii);
    }
    
    cout << ans << '\n';
    return 0;
}
