#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

#define tupla tuple<int, int, int>

int myupper_bound(vector<tupla> &v, int i){
    int ans = sz(v);
    int l = 0, r = ans-1, m;
    while(l <= r){
        m = l + (r-l)/2;
        if(get<0>(v[m]) > get<1>(v[i])){
            ans = m;
            r = m-1;
        }
        else    
            l = m+1;
    }
    return ans;
}

int mylower_bound(vector<tupla> &v, int i){
    int ans = i;
    int l = 0, r = i-1, m;
    while(l <= r){
        m = l + (r-l)/2;
        if(get<1>(v[m]) >= get<0>(v[i])){
            ans = m;
            r = m-1;
        }
        else    
            l = m+1;
    }
    return ans;
}

int main(){
    fast
    int n;
    cin >> n;
    vector<tupla> segments(n);
    for(int i=0; i<n; i++){
        int ai, bi;
        cin >> ai >> bi;
        segments[i] = {ai, bi, i+1};
    }
    sort(all(segments));
    int ansp = 0, tam = 1;
    for(int i=0; i<n; i++){
        int t = max(i - mylower_bound(segments, i) - 1, 0);
        t += myupper_bound(segments, i) - i; // -1 para tirar a repetição do intervalo i
        if(t > tam){
            tam = t;
            ansp = i;
        }
    }
    cout << tam << '\n';
    for(int i=0; i<tam; i++)
        cout << get<2>(segments[ansp+i]) << ((i == tam-1)? '\n' : ' ');
    return 0;
}