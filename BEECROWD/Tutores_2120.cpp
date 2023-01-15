#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

const int MAXN = 1e5;
int x[MAXN+5];

int main(int argc, char* argv[]) {

  ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

  int N;
  cin >> N;

  map<int, int> pai;
  map<int, int> tree;

  cin >> x[0];
  tree[x[0]] = 3;

  for (int i = 1; i < N; ++i) {
    cin >> x[i];
    auto bgr = tree.upper_bound(x[i]);
    if (bgr != tree.begin()) {
      auto sml = bgr; sml--;
      if (sml->second & 2) {
        pai[x[i]] = sml->first;
        sml->second ^= 2;
      } else {
        pai[x[i]] = bgr->first;
        bgr->second ^= 1;
      }
    } else {
      pai[x[i]] = bgr->first;
      bgr->second ^= 1;
    }
    tree[x[i]] = 3;
  }

  int Q;
  cin >> Q;
  while (Q--) {
    int qq; cin >> qq;
    cout << pai[x[qq-1]] << (Q ? " " : "\n");
  }

  return 0;
}
