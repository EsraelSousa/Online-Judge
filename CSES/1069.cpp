#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string DNA;
    cin >> DNA;
    int ans = 0, cont = 1;
    for(int i=0; i<DNA.size(); ){
        int j = i+1;
        while(j < DNA.size() && DNA[i] == DNA[j]) j++, cont++;
        ans = max(ans, cont);
        cont = 1;
        i = j;
    }
    cout << ans << '\n';
    return 0;
}