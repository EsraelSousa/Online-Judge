#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int testes, stack1, stack2;
    cin >> testes;
    while(testes--){
        cin >> stack1 >> stack2;
        if((2*stack1 - stack2) >= 0 && (2*stack1 - stack2) % 3 == 0 &&
           (2*stack2 - stack1) >= 0 && (2*stack2 - stack1) % 3 == 0) 
           cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}