<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd_linha, qtd_coluna, cont;
    short matriz[100][100];
    while(cin >> qtd_linha >> qtd_coluna){
        for(short i=0; i<qtd_linha; i++){
            for(short j=0; j<qtd_coluna; j++)
                cin >> matriz[i][j];
        }
        cont=0;
        for(short i=0; i<qtd_linha; i++){
            for(short j=0; j<qtd_coluna; j++){
                if(matriz[i][j]==1)
                    cout << 9;
                else{
                    if(matriz[i-1][j]==1 && i>0)
                        cont++;
                    if(matriz[i][j+1]==1 && j<qtd_coluna-1)
                        cont++;
                    if(matriz[i+1][j]==1 && i<qtd_linha-1)
                        cont++;
                    if(matriz[i][j-1]==1 && j>0)
                        cont++;
                    cout << cont;
                    cont=0;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd_linha, qtd_coluna, cont;
    short matriz[100][100];
    while(cin >> qtd_linha >> qtd_coluna){
        for(short i=0; i<qtd_linha; i++){
            for(short j=0; j<qtd_coluna; j++)
                cin >> matriz[i][j];
        }
        cont=0;
        for(short i=0; i<qtd_linha; i++){
            for(short j=0; j<qtd_coluna; j++){
                if(matriz[i][j]==1)
                    cout << 9;
                else{
                    if(matriz[i-1][j]==1 && i>0)
                        cont++;
                    if(matriz[i][j+1]==1 && j<qtd_coluna-1)
                        cont++;
                    if(matriz[i+1][j]==1 && i<qtd_linha-1)
                        cont++;
                    if(matriz[i][j-1]==1 && j>0)
                        cont++;
                    cout << cont;
                    cont=0;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
