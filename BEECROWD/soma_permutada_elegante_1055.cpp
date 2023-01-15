#include <bits/stdc++.h>

using namespace std;

int getAns(int n, int v[]){
    int a[n+5];
    int t;
    int sum = 0;
    if(n & 1){
        a[n/2] = v[n-1];
        t=n/2-1;
        for(int i=0; i<=n/2; i+=2, t-=2)
            a[t] = v[i];
        t=n/2+1;
        for(int i=1; i<=n/2; i+=2, t+=2)
            a[t] = v[i];
        t=n/2-2;
        for(int i=n-2; i>=n/2; i-=2, t-=2)
            a[t] = v[i];
        t=n/2+2;
        for(int i=n-3; i>=n/2; i-=2, t+=2)
            a[t] = v[i];
    }
    else {
        a[n/2] = v[n-1];
        t=n/2-1;
        for(int i=0; i<=n/2; i+=2, t-=2)
            a[t] = v[i];
        t=n/2+1;
        for(int i=1; i<=n/2; i+=2, t+=2)
            a[t] = v[i];
        t=n/2-2;
        for(int i=n-2; i>=n/2; i-=2, t-=2)
            a[t] = v[i];
        t=n/2+2;
        for(int i=n-3; i>=n/2; i-=2, t+=2)
            a[t] = v[i];
    }
    //for(int i=0; i<n; i++) cout << a[i] << ' ';
    //cout << '\n';
    for(int i=0; i<n-1; i++) sum += abs(a[i] - a[i+1]);
    return sum;
}

int main(void){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int tes, n, v[55];
    cin >> tes;
    for(int t=1; t<=tes;- t++){
        cin >> n;
        for(int i=0; i<n; i++) cin >> v[i];
        sort(v, v+n);
        //for(int i=0; i<n; i++) cout << v[i] << ' ';
        //cout << '\n';
        int sum=getAns(n, v);
        for(int i=0; i<n/2; i++) swap(v[i], v[n-i-1]);
        cout << "Case " << t << ": " << max(sum, getAns(n, v)) << '\n';
    }
    return 0;
}