#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int testes, stack1, stack2;
    cin >> testes;
    while(testes--){
        cin >> stack1 >> stack2;
        if(stack2 < stack1) swap(stack1, stack2);
        if(!stack1 && !stack2) cout << "YES\n";
        else{
            cout << (((stack1 & 1 && stack2 & 1 && min(stack1, stack2) != 1) || (
            2*stack1 == stack2))? "YES\n" : "NO\n");
        }
    }
    return 0;
}