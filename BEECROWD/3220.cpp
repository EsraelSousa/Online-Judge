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


random_device rd; // fonte de entropia
mt19937 gen(rd()); // gerador Mersenne Twister
uniform_int_distribution<> dist(1, 100); // de 1 a 100

int gera(){
    int sinal = dist(gen)>=50? 1 : -1;
    return sinal * dist(gen);
}

int main(){
    fast
    int n = 10, q = 10;
    cout << INT_MAX << '\n';
    cout << n << '\n';
    for(int i=1; i<=n; i++)
        cout << gera() << " \n"[i == n];
    cout << q << '\n';
    while(q--)
        cout << gera() << '\n';
    return 0;
}