#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    ll n;
    cin >> n;
    if(n * (n+1)/ 2 & 1) cout << "NO\n";
    else{
        vector<int> p1, p2;
        ll s1 = (n * (n+1)/2)/2, s2 = 0;
        int i = n;
        while(s2 + i < s1){
            s2 += i;
            p2.push_back(i);
            i--;
        }
        if(s1 != s2){
            while(i > s1 - s2){
                p1.push_back(i);
                i--;
            }
            p2.push_back(i);
            s2 += i;
            i--;
            while(i > 0){
                p1.push_back(i);
                i--;
            }
        }
        cout << "YES\n";
        cout << p1.size() << '\n';
        for(auto x: p1) cout << x <<  ' ';
        cout << '\n' << p2.size() << '\n';
        for(auto x: p2) cout  << x << ' ';
        cout << '\n';
    }
    return 0;
}