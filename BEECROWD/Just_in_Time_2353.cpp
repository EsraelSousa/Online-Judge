// link de ajuda: https://algorithmmarch.wordpress.com/2016/11/15/final-brasileira-da-maratona-2016/

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    for(int i=2; i*i<=n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    while(!isPrime(n)) n--;
    cout << n << '\n';
    return 0;
}