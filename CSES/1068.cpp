#include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main(){
    ll n;
    scanf("%lld", &n);
    while(n>1){
        printf("%lld ", n);
        n = (n&1)? 3*n+1 : n/2;
    }
    printf("%lld ", n);
    return 0;
}