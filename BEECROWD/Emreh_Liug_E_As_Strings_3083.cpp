#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
const ll p = 131; // p and M are
const ll M = 1e9+7; // relatively prime

ll mod(ll a, ll m) { // returns a (mod m)
    return ((a%m) + m) % m; // ensure positive answer
}

ll extEuclid(ll a, ll b, ll &x, ll &y) { // pass x and y by ref
    ll xx = y = 0;
    ll yy = x = 1;
    while (b) { // repeats until b == 0
        ll q = a/b;
        ll t = b; b = a%b; a = t;
        t = xx; xx = x-q*xx; x = t;
        t = yy; yy = y-q*yy; y = t;
    }
    return a; // returns gcd(a, b)
}

ll powMod(ll a, ll b){
    ll ans = 1LL;
    while(b){
        if(b & 1) ans = (ans * a) % M;
        a = (a*a) % M;
        b >>=1;
    }
    return ans;
}

ll modInverse(ll b, ll m) { // returns b^(-1) (mod m)
    ll x, y;
    ll d = extEuclid(b, m, x, y); // to get b*x + m*y == d
    if (d != 1) return -1; // to indicate failure
                            // b*x + m*y == 1, now apply (mod m) to get b*x == 1 (mod m)
    return mod(x, m);
}

vi P; // to store p^i % M
vi h;

vi prepareP(int n) { // compute p^i % M
    P.assign(n, 0);
    P[0] = 1;
    for (int i = 1; i < n; ++i) // O(n)
        P[i] = ((ll)P[i-1]*p) % M;
    return P;
}

void computeRollingHash(string T) { // Overall: O(n)
    vi P = prepareP((int)T.length()); // O(n)
    h.assign(T.size(), 0);
    for (int i = 0; i < (int)T.length(); ++i) { // O(n)
        if (i != 0) h[i] = h[i-1]; // rolling hash
        h[i] = (h[i] + ((ll)T[i]*P[i]) % M) % M;
    }
}

ll hash_fast(int L, int R) { // O(1) hash of any substr
    if (L == 0) return h[R]; // h is the prefix hashes
    ll ans = 0;
    ans = ((h[R] - h[L-1]) % M + M) % M; // compute differences
    ans = ((ll)ans * modInverse(P[L], M)) % M; // remove P[L]^-1 (mod M)
    return ans;
}

ll computeRash(string& T){
    ll ans = 0;
    for(int i=0; i<T.size(); i++)
        ans = (ans + T[i]*powMod(p, i)) % M;
    return ans;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string s1, s2;
    int query, idx;
    char letra;
    cin >> s1 >> s2;
    computeRollingHash(s2);
    ll hashS2 = hash_fast(1, s2.size());
    computeRollingHash(s1);
    ll ans = 0;
    for(int i=1; i<=s1.size()-s2.size(); i++)
        cout << i << ' ' << hash_fast(i, i+s2.size()) << '\n';
    cout << ans << ' ' << hashS2 << " init\n";
    cin >> query;
    while(query--){
        cin >> idx >> letra;
        idx--;
    }
    return 0;
}