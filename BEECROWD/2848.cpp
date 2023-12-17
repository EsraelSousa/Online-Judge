#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

const int tamVet = 1e5 + 10;
const ll MAX = 4294967295;
ll vet[tamVet];

struct wavelet_tree {
  ll lo, hi;
  wavelet_tree *l, *r;
  vector<ll> b;

  wavelet_tree(ll *from, ll *to, ll x, ll y) {
    lo = x, hi = y;
    if (lo == hi or from >= to)
      return;
    ll mid = (lo + hi) / 2;
    auto f = [mid](ll x) { return x <= mid; };
    b.reserve(to - from + 1);
    b.pb(0);
    for (auto it = from; it != to; it++)
      b.pb(b.back() + f(*it));

    auto pivot = stable_partition(from, to, f);
    l = new wavelet_tree(from, pivot, lo, mid);
    r = new wavelet_tree(pivot, to, mid + 1, hi);
  }

  ll kth(int l, int r, ll k) {
    if (l > r)
      return 0;
    if (lo == hi)
      return lo;
    ll inLeft = b[r] - b[l - 1];
    ll lb = b[l - 1]; 
    ll rb = b[r];    
    if (k <= inLeft)
      return this->l->kth(lb + 1, rb, k);
    return this->r->kth(l - lb, r - rb, k - inLeft);
  }

  ll count(int l, int r, ll k) {
    if (l > r or k < lo or k > hi)
      return 0;
    if (lo == hi)
      return r - l + 1;
    ll lb = b[l - 1], rb = b[r], mid = (lo + hi) / 2;
    if (k <= mid)
      return this->l->count(lb + 1, rb, k);
    return this->r->count(l - lb, r - rb, k);
  }

  /*~wavelet_tree() {
    delete l;
    delete r;
  }*/
};

int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  srand(time(NULL));
  
  int i, N, Q, esq, dir;
  ll k, g, d;
  
  cin >> N >> Q;
  for (i = 0; i < N; i++) 
  {
    cin >> vet[i + 1];
  }

  wavelet_tree T(vet + 1, vet + N + 1, 1, MAX);

  while (Q--) 
  {
    cin >> esq >> dir >> k >> g >> d;

    ll kMenor = T.kth(esq, dir, k);
    ll contaRepetidos = T.count(esq, dir, kMenor);

    cout << kMenor << " " << contaRepetidos;

    int valorG = abs(g - contaRepetidos);
    int valorD = abs(d - contaRepetidos);

    if (valorG == valorD) 
    {
      cout << " E\n";
    } 
    else 
    {
      if (valorG < valorD) 
      {
        cout << " G\n";
      } 
      else 
      {
        cout << " D\n";
      }
    }
  }
  return 0;
}