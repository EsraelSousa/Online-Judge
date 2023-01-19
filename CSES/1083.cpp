#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int n, x;
    ll sum;
    scanf(" %d", &n);
    sum = 1LL*n*(n+1)/2;
    n--;
    while(n--){
        scanf(" %d", &x);
        sum-=x;
    }
    printf("%lld\n", sum);
    return 0;
}