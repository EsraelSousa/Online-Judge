#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    set<int> distinct;
    int n, value;
    cin >> n;
    while(n--){
        cin >> value;
        distinct.insert(value);
    }
    cout << distinct.size() << '\n';
    return 0;
}