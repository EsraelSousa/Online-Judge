<<<<<<< HEAD
#include <iostream>

using namespace std;

int main(){
    int qtd_conjunto, comprimento, quantidade, cont_retangulos, aux;
    long long soma;
    do{
        cin >> qtd_conjunto;
        if(qtd_conjunto!=0){
            cont_retangulos=0;
            soma=0;
            for(int i=0; i<qtd_conjunto; i++){
                cin >> comprimento >> quantidade;
                soma+=quantidade/2;
            }
            cout << soma/2 << endl;
        }
    }while(qtd_conjunto!=0);
    return 0;
}
=======
#include <iostream>

using namespace std;

int main(){
    int qtd_conjunto, comprimento, quantidade, cont_retangulos, aux;
    long long soma;
    do{
        cin >> qtd_conjunto;
        if(qtd_conjunto!=0){
            cont_retangulos=0;
            soma=0;
            for(int i=0; i<qtd_conjunto; i++){
                cin >> comprimento >> quantidade;
                soma+=quantidade/2;
            }
            cout << soma/2 << endl;
        }
    }while(qtd_conjunto!=0);
    return 0;
}
>>>>>>> refs/remotes/origin/master
