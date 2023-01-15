#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int tes, n, d;
    cin >> tes;
    for(int t=1; t<=tes; t++){
        cin >> n >> d;
        char letra, c;
        int posicao, anterior, p;
        int ans = 0;
        vector<pair<int, char>> pedras(n+2);
        pedras[0] = make_pair(0, 'B');
        for(int i=1; i<=n; i++) {
            cin >> letra >> c >> posicao;
            pedras[i] = make_pair(posicao, letra);
        }
        n++;
        pedras[n] = make_pair(d, 'B');
        for(int i=0; i<=n; i){
            int j = i+1;
            while(j <= n && pedras[j].second == 'S') j++;
            if(j>n) j--;
            int k = i+2;
            if(j == i+1) ans = max(ans, pedras[j].first - pedras[i].first);
            for(; k<=j; k+=2) ans = max(ans, pedras[k].first - pedras[k-2].first);
            //if(k-j == 1) ans = max(ans, pedras[j].first - pedras[j-1].first);
            //cout << ans << " em ps1\n";
            k = i+3;
            ans = max(ans, pedras[i+1].first - pedras[i].first);
            for(; k<=j; k+=2) ans = max(ans, pedras[k].first - pedras[k-2].first);
            //if(k-j == 1) ans = max(ans, pedras[j].first - pedras[j-1].first);
            //cout << i <<' ' << j <<' ' << ans << '\n';
            i = j;
            if(i == n) break;
        }
        cout << "Case " << t << ": " << ans << '\n';
    }
    return 0;
}
/*
1
15 1614
B-375 S-376 S-384 S-496 S-530 B-567 S-691 B-848 S-888 S-906 B-986 B-1036 B-1368 S-1387 S-1448

out: 375
*/