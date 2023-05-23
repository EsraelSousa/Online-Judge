#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
struct Data {
  int c7 = 0, c13 = 0;
  int sum = 0;
 
  Data() {};
  explicit Data(int x) : sum(x), c7(x==7), c13(x==13) {}
  Data operator+(Data const& o) {
    Data ans;
    ans.c7 = c7 + o.c7;
    ans.c13 = c13 + o.c13;
    ans.sum = sum + o.sum;
    return ans;
  }
};
 
struct Lazy {
  int new7 = 7, new13 = 13;
 
  Lazy(){}
  Lazy(int new7, int new13) : new7(new7), new13(new13) {}
  void operator+=(Lazy const& o) {
    if (new7 == 7) new7 = o.new7;
    else if (new7 == 13) new7 = o.new13;
 
    if (new13 == 7) new13 = o.new7;
    else if (new13 == 13) new13 = o.new13;
  }
};
 
Data apply_lazy(Data const& d, Lazy const& l) {
  Data new_d = d;
 
  new_d.sum += d.c7 * (l.new7 - 7);
  if (l.new7 != 7) new_d.c7 -= d.c7;
  if (l.new7 == 13) new_d.c13 += d.c7;
 
  new_d.sum += d.c13 * (l.new13 - 13);
  if (l.new13 != 13) new_d.c13 -= d.c13;
  if (l.new13 == 7) new_d.c7 += d.c13;
 
  return new_d;
}
 
const int MAXN = 2e5 + 8;
 
int N;
Data T[4 * MAXN];
Lazy L[4 * MAXN];
 
void push(int id, int il, int ir) {
  if (L[id].new7 == 7 && L[id].new13 == 13) return;
 
  T[id] = apply_lazy(T[id], L[id]);
 
  if (ir-il+1 > 1) {
    L[2*id] += L[id];
    L[2*id+1] += L[id];
  }
 
  L[id] = Lazy();
}
 
Data update_one(int idx, int x, int id=1, int il=0, int ir=N-1) {
  push(id, il, ir);
 
  if (idx < il || ir < idx) return T[id];
  if (il == ir) return T[id] = Data(x);
 
  int im = (il + ir)/2;
  return T[id] = update_one(idx, x, 2*id, il, im)
               + update_one(idx, x, 2*id+1, im+1, ir);
}
 
Data update_range(int l, int r, int z, int x, int id=1, int il=0, int ir=N-1) {
  push(id, il, ir);
 
  if (r < il || ir < l) return T[id];
  if (l <= il && ir <= r) {
    if (z == 7) L[id] += Lazy(x, 13);
    else L[id] += Lazy(7, x);
    push(id, il, ir);
    return T[id];
  }
 
  int im = (il + ir)/2;
  return T[id] = update_range(l, r, z, x, 2*id, il, im)
               + update_range(l, r, z, x, 2*id+1, im+1, ir);
}
 
int query(int l, int r, int id=1, int il=0, int ir=N-1) {
  push(id, il, ir);
 
  if (r < il || ir < l) return 0;
  if (l <= il && ir <= r) return T[id].sum;
 
  int im = (il + ir)/2;
  return query(l, r, 2*id, il, im)
       + query(l, r, 2*id+1, im+1, ir);
}
 
signed main() {
  ios::sync_with_stdio(false); cin.tie(nullptr);
  int n; 
  while(cin >> n){ N = n;
 
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    update_one(i, x);
  }
 
  int q; cin >> q; while (q--) {
    int op; cin >> op;
    if (op == 1) {
      int idx, x; cin >> idx >> x; idx--;
      update_one(idx, x);
    } else if (op == 2) {
      int l, r, z, x; cin >> l >> r >> z >> x; l--, r--;
      update_range(l, r, z, x);
    } else {
      int l, r; cin >> l >> r; l--, r--;
      cout << query(l, r) << '\n';
    }
  }
  }
}