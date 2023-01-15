#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAXN = 505, n = 500, m = 500;
ll B[MAXN][MAXN], A[MAXN][MAXN];

void upd(int x, int y, int v) {
  for(int i = x ; i <= n ; i += (i & (-i))) {
    for(int j = y ; j <= m ; j += (j & (-j))) {
      B[i][j] += v;
    }
  }
}
ll sum(int x, int y) {
  ll ans = 0;
  for(int i = x ; i > 0 ; i -= (i & (-i))) {
    for(int j = y ; j > 0 ; j -= (j & (-j))) {
      ans += B[i][j];
    }
  }
  return ans;
}

void update(int x1, int y1, int x2, int y2, int v) {
  upd(x2 + 1, y2 + 1, v);
  upd(x1, y1, v);
  upd(x1, y2 + 1, -v);
  upd(x2+1, y1, -v);
}

void init() {
  memset(B, 0, sizeof(B));
  for(int i = 1 ; i <= n ; ++i) {
    for(int j = 1 ; j <= m ; ++j) {
      upd(i, j, A[i][j]);
    }   
  }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    char opercacao;
    int x1, x2, y1, y2, valor;
    int query;
    cin >> query;
    //init();
    while(query--){
        cin >> opercacao;
        if(opercacao == 'U'){
            cin >> x1 >> y1 >> x2 >> y2 >> valor;
            update(x1, y1, x2, y2, valor);
        }
        else{
            cin >> x1 >> y1;
            cout << sum(x1, y1)/* + sum(x1-1, y1-1) - sum(x1-1, y1) - sum(x1, y1-1) */<< '\n';
        }
    }
    return 0;
}