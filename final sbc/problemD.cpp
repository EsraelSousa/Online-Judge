#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, h, w;
    char ida, volta;
    cin >> n >> h >> w;
    while(n--){
        cin >> ida >> volta;
        if(ida == 'Y' || w == 0){
            cout << "Y ";
            w++;
            h--;
        }
        else
            cout << "N ";
        if(volta == 'Y' || h == 0){
            cout << "Y\n";
            h++;
            w--;
        }
        else
            cout << "N\n";
    }
    return 0;
}