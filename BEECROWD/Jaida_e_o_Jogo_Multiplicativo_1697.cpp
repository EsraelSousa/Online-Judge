#include <bits/stdc++.h>
using namespace std;

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

const int LIMIT = 15485865;  // Aproximadamente até o 10^6 primo
vector<int> primes = {2};            // Lista de primos
bitset<LIMIT + 1> is_prime;    // Crivo

void sieve() {
    is_prime.set();   // Assume que todos são primos inicialmente
    is_prime[0] = is_prime[1] = 0;  // 0 e 1 não são primos

    for (int i = 3; i <= LIMIT; i+=2) {
        if (is_prime[i]) {
            primes.emplace_back(i);  // Armazena o primo
            for (long long j = 1LL * i * i; j <= LIMIT; j += i)
                is_prime[j] = 0;  // Marca múltiplos como não primos
        }
        //if (primes.size() == 1'000'000) break;  // Para quando tivermos 10^6 primos
    }
}

void task(){
    int n;
    cin >> n;
    bool hasOne = 0;
    vector<int> a(n);
    int ans = 0;
    for(auto &x: a)
        cin >> x;
    sort(all(a));
    if(a[0] != 1){
        cout << "0\n";
        return ;
    }
    for(auto &ans: primes)
        if(!binary_search(all(a), ans)){
            cout << ans-1 << '\n';
            return ;
        }
}

int main(){
    fast
    int tes;
    sieve();
    primes.push_back(15485867); // 10^6+1º primo
    cin >> tes;
    while(tes--)
        task();
    return 0;
}