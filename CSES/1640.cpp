#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> values(n);
    for(int i=0; i<n; i++){
        cin >> values[i].first;
        values[i].second = i+1;
    }
    sort(values.begin(), values.end());
    int i=0, j = n-1;
    while(values[i].first + values[j].first != x and i<j){
        if(values[i].first + values[j].first < x) i++;
        else j--;
    }
    if(i<j){
        if(values[i].second > values[i].second) swap(values[i], values[j]);
        cout << values[i].second << ' ' << values[j].second << '\n';
    }
    else cout << "IMPOSSIBLE\n";
    return 0;
}