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

int main(){
    fast
    ll C, Va, Vb, T, I;
    cin >> C >> Va >> Vb >> T >> I;
    C *= 100;
    I *= 100;
    T *= 60;
    ll posicao = (T * Va + (C - I)) % C;
    ll Ana = C - (posicao? posicao : C);
    posicao = (T * Vb + (C - I)) % C;
    ll Bia = C - (posicao? posicao : C);
    cout << (((ull)(1'000'000'000'000 * ((1.0 * Ana ) / Va)) <= (ull)(1'000'000'000'000 * ((1.0 * Bia ) / Vb)))? "Ana\n" : "Bia\n");
    return 0;
}
