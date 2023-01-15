#include <bits/stdc++.h>

using namespace std;

bool used[1005];

bool isPossibleColocar(int ponta1, int ponta2, int x1, int x2, int i){
    if(x1 == ponta1 || x1 == ponta2 || x2 == ponta1 || x2 == ponta2 || used[i]) return true;
    return false;
}

void colocaPeca(int& cont, int& ponta1, int& ponta2, pair<int, int>& x){
    cont++;
    if(ponta1 == x.first) ponta1 = x.second;
    else if(ponta1 == x.second) ponta1 = x.first;
    else if(ponta2 == x.first) ponta2 = x.second;
    else ponta2 = x.first;
    //x.first = -1, x.second = -1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, tes=1;
    while(cin >> n && n){
        int ponta1, ponta2, x1, x2;
        vector<pair<int, int>> pecas(n);
        int cont = 0;
        for(int i=0; i<n; i++){
            cin >> x1 >> x2;
            pecas[i].first = min(x1, x2), pecas[i].second = max(x1, x2);
        }
        sort(pecas.begin(), pecas.end());
        //for(pair<int, int> x: pecas) cout << x.first <<' ' << x.second << "\n";
        for(int i=0; i<n; i++){
            ponta1 = pecas[i].first, ponta2 = pecas[i].second;
            memset(used, 0, sizeof(used));
            used[i] = true;
            bool flag = true;
            cont = 1;
            while(flag){
                flag = false;
                for(int j=1; j<n; j++){
                    if(isPossibleColocar(ponta1, ponta2, pecas[j].first, pecas[j].second, j)){
                        colocaPeca(cont, ponta1, ponta2, pecas[j]);
                        flag = true;
                        used[j] = true;
                    }
                }
                cout << " ifb\n";
            }
            
            if(cont == n) break;
        }
        cout << "Teste " << tes++ << '\n';
        cout << ((cont == n)? "sim\n\n" : "nao\n\n");
    }
    return 0;
}