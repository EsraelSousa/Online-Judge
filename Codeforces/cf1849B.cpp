#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string.h>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <cmath>
#include <numeric>

//   #include <bits/stdc++.h>
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


void task(){
    int n, k, a, b;
    bool flag = 0;
    cin >> n >> k;
    priority_queue<ii> fila;
    for(int i=1; i<=n; i++){
    	cin >> a;
        if(a % k == 0){
            if(flag) cout << ' ';
            cout << i;
            flag = 1;
            continue;
        }
    	fila.push(ii(a%k, -i));
    }
    while(sz(fila)){
    	if(flag) cout << ' ';
        cout << -fila.top().ss;
        fila.pop();
        flag = 1;
    }
    cout << '\n';
}

int main(){
    fast
    int tes = 1;
    cin >> tes;
    while(tes--)
        task();
    return 0;
}