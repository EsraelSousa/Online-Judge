#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
  string s;
  cin >> s;
  bool flag = true;
  cout << s << '\n';
  for(int i=1; i<(int)s.size() and flag; i++){
    cout << i << '\n';
    flag &= islower(s[i]) != 0;
  }
    cout << flag << '\n';
  cout << ((isupper(s[0]) and flag)? "Yes\n" : "No\n");
  return 0;
}