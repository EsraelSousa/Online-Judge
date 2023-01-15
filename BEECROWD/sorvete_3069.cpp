<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int dim_praia=1, qtd_ven=1, ini, fim, it, atua, teste=1;
    vector<pair<int, int>> sorve(5005);
    while(dim_praia!=0 && qtd_ven!=0){
        cin >> dim_praia >> qtd_ven;
        if(dim_praia==0 && qtd_ven==0) break;
        for(int i=1; i<=qtd_ven;i++){
            cin >> sorve[i].first >> sorve[i].second;
        }
        sort(sorve.begin(), sorve.begin()+qtd_ven);
        atua = it = 1;
        ini = sorve[it].first;
        if(teste >1)
        cout << "\n";
        cout << "Teste " << teste << "\n";
        while(it <= qtd_ven){
            if(sorve[it].first <= sorve[atua].second && sorve[it].second >= sorve[atua].second && it != atua)
                atua = it;
            if(sorve[it].first > sorve[atua].second ){
                cout << ini << " " << sorve[atua].second << endl;
                atua = it;
                ini = sorve[it].first;
            }
            it++;
        }
        cout << ini << " " << sorve[atua].second << endl;
        teste++;
    }
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int dim_praia=1, qtd_ven=1, ini, fim, it, atua, teste=1;
    vector<pair<int, int>> sorve(5005);
    while(dim_praia!=0 && qtd_ven!=0){
        cin >> dim_praia >> qtd_ven;
        if(dim_praia==0 && qtd_ven==0) break;
        for(int i=1; i<=qtd_ven;i++){
            cin >> sorve[i].first >> sorve[i].second;
        }
        sort(sorve.begin(), sorve.begin()+qtd_ven);
        atua = it = 1;
        ini = sorve[it].first;
        if(teste >1)
        cout << "\n";
        cout << "Teste " << teste << "\n";
        while(it <= qtd_ven){
            if(sorve[it].first <= sorve[atua].second && sorve[it].second >= sorve[atua].second && it != atua)
                atua = it;
            if(sorve[it].first > sorve[atua].second ){
                cout << ini << " " << sorve[atua].second << endl;
                atua = it;
                ini = sorve[it].first;
            }
            it++;
        }
        cout << ini << " " << sorve[atua].second << endl;
        teste++;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
