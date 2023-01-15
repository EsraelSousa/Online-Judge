<<<<<<< HEAD
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main(){
    int qtd_palavra, qtd_consulta, cont_palavra, tam_max, j;
    cin >> qtd_palavra;
    string palavras[qtd_palavra], consulta;
    for(int i=0; i<qtd_palavra; i++){
        cin >> palavras[i];
    }
    cin >> qtd_consulta;
    for(int i=0; i<qtd_consulta; i++){
        cin >> consulta;
        cont_palavra=0, tam_max=0;
        for(int k=0; k<qtd_palavra; k++){
            for(j=0; j<consulta.size(); j++){
                if(palavras[k][j] != consulta[j])
                    break;
            }
            if(j==consulta.size()){
                cont_palavra++;
                if(palavras[k]. size() > tam_max)
                    tam_max=palavras[k].size();
            }
        }
        if(cont_palavra != 0)
            cout << cont_palavra << " " << tam_max << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
=======
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main(){
    int qtd_palavra, qtd_consulta, cont_palavra, tam_max, j;
    cin >> qtd_palavra;
    string palavras[qtd_palavra], consulta;
    for(int i=0; i<qtd_palavra; i++){
        cin >> palavras[i];
    }
    cin >> qtd_consulta;
    for(int i=0; i<qtd_consulta; i++){
        cin >> consulta;
        cont_palavra=0, tam_max=0;
        for(int k=0; k<qtd_palavra; k++){
            for(j=0; j<consulta.size(); j++){
                if(palavras[k][j] != consulta[j])
                    break;
            }
            if(j==consulta.size()){
                cont_palavra++;
                if(palavras[k]. size() > tam_max)
                    tam_max=palavras[k].size();
            }
        }
        if(cont_palavra != 0)
            cout << cont_palavra << " " << tam_max << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
