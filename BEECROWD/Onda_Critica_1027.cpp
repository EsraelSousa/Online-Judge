#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, x, y;
    while(cin >> n){
        map<int, vector<int>> cod;
        map<int, vector<int>>:: iterator it, it1;
        vector<int>:: iterator it2, it3;
        for(int i=0; i<n; i++){
            cin >> x >> y;
            cod[y].push_back(x);
        }
        it = cod.begin();
        int ans = 1;
        for( ; it != cod.end(); it++){
            sort(it->second.begin(), it->second.end());
            it1 = it;
            it1++;
            if(it1 != cod.end() && it1->first != it->first+2)
             it1++;
            if(it1 != cod.end() && it1->first == it->first+2){
                sort(it1->second.begin(), it1->second.end());
                int cont  = 1;
                int num;
                bool flag;
                // concidero pegar primeiramente do primeiro
                flag = true;
                num = it->second[0];
        
                while(1){
                    if(flag){
                        it2 = upper_bound(it1->second.begin(), it1->second.end(), num);
                        if(it2 == it1->second.end())
                            break;
                        cont++;
                        num = *it2;
                    }
                    else{
                        it2 = upper_bound(it->second.begin(), it->second.end(), num);
                        if(it2 == it->second.end())
                            break;
                        cont++;
                        num = *it2;
                    }
                    flag = !flag;
                }
                ans = max(ans, cont);
                
                // concidero pegar primeiramento do segundo
                flag = false;
                num = it1->second[0];
                cont = 1;
        
                while(1){
                    //cout << num << ' ';
                    if(flag){
                        it2 = upper_bound(it1->second.begin(), it1->second.end(), num);
                        if(it2 == it1->second.end())
                            break;
                        cont++;
                        num = *it2;
                    }
                    else{
                        it2 = upper_bound(it->second.begin(), it->second.end(), num);
                        if(it2 == it->second.end())
                            break;
                        cont++;
                        num = *it2;
                    }
                    flag = !flag;
                }
                ans = max(ans, cont);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}