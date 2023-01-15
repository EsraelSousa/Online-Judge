<<<<<<< HEAD
#include <iostream>
#include <string>

using namespace std;

int main(){
    int qtd_teste, qtd_string;
    long ans;
    string entradas[105];
    cin >> qtd_teste;
    for(int i=0; i<qtd_teste; i++){
        cin >> qtd_string;
        for(int j=0; j<qtd_string; j++)
            cin >>entradas[j];
        ans=0;
        for(int j=0; j<qtd_string; j++){
            for(int k=0; k<entradas[j].size(); k++)
                ans+=(entradas[j][k]-'A')+j+k;
        }
        cout << ans << endl;
    }
    return 0;
}
=======
#include <iostream>
#include <string>

using namespace std;

int main(){
    int qtd_teste, qtd_string;
    long ans;
    string entradas[105];
    cin >> qtd_teste;
    for(int i=0; i<qtd_teste; i++){
        cin >> qtd_string;
        for(int j=0; j<qtd_string; j++)
            cin >>entradas[j];
        ans=0;
        for(int j=0; j<qtd_string; j++){
            for(int k=0; k<entradas[j].size(); k++)
                ans+=(entradas[j][k]-'A')+j+k;
        }
        cout << ans << endl;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
