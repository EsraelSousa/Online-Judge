<<<<<<< HEAD
#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct suspeito Tsuspeito;

struct suspeito{
    int valor;
    int indice;
};

int ordena(Tsuspeito *a, Tsuspeito *b){
    return a->valor, b->valor;
}

int main(){
    int qtd_suspeito;
    Tsuspeito supe[1005];
    while(qtd_suspeito !=0){
        cin >> qtd_suspeito;
        if(qtd_suspeito != 0){
            for(int i=0; i<qtd_suspeito; i++)
                cin >> supe[i].valor, supe[i].indice=i+1;
        }
        qsort(supe, qtd_suspeito, sizeof(supe[0]), ordena);
        cout << supe[1].indice << endl;
    }
    return 0;
}
=======
#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct suspeito Tsuspeito;

struct suspeito{
    int valor;
    int indice;
};

int ordena(Tsuspeito *a, Tsuspeito *b){
    return a->valor, b->valor;
}

int main(){
    int qtd_suspeito;
    Tsuspeito supe[1005];
    while(qtd_suspeito !=0){
        cin >> qtd_suspeito;
        if(qtd_suspeito != 0){
            for(int i=0; i<qtd_suspeito; i++)
                cin >> supe[i].valor, supe[i].indice=i+1;
        }
        qsort(supe, qtd_suspeito, sizeof(supe[0]), ordena);
        cout << supe[1].indice << endl;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
