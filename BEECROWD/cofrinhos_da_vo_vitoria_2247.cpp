<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main(){
    int teste=1, qtd_deposito;
    long long diferenca=0, valor1, valor2, cofre_joao, cofre_zezin;
    do{
        cin >>qtd_deposito;
        if(qtd_deposito != 0){
            cofre_joao=0, cofre_zezin=0;
            cout << "Teste " << teste << endl;
            teste++;
            while(qtd_deposito--){
                cin >> valor1 >> valor2;
                diferenca+=valor1-valor2;
                if(cofre_joao == cofre_zezin)
                    cofre_joao+=valor1, cofre_zezin+=valor2;
                else if(cofre_joao > cofre_zezin){
                    if(valor1 > valor2)
                        cofre_joao+=valor2, cofre_zezin+=valor1;
                    else
                        cofre_joao+=valor1, cofre_zezin+=valor2;
                }else{
                    if(valor1 > valor2)
                        cofre_joao+=valor1, cofre_zezin+=valor2;
                    else
                        cofre_joao+=valor2, cofre_zezin+=valor1;
                }
                //if(cofre_joao < cofre_zezin)
                    //cout << cofre_zezin-cofre_joao << endl;
                //else
                    cout << diferenca << endl;
            }
            cout << endl;
        }
    }while(qtd_deposito != 0);
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int main(){
    int teste=1, qtd_deposito;
    long long diferenca=0, valor1, valor2, cofre_joao, cofre_zezin;
    do{
        cin >>qtd_deposito;
        if(qtd_deposito != 0){
            cofre_joao=0, cofre_zezin=0;
            cout << "Teste " << teste << endl;
            teste++;
            while(qtd_deposito--){
                cin >> valor1 >> valor2;
                diferenca+=valor1-valor2;
                if(cofre_joao == cofre_zezin)
                    cofre_joao+=valor1, cofre_zezin+=valor2;
                else if(cofre_joao > cofre_zezin){
                    if(valor1 > valor2)
                        cofre_joao+=valor2, cofre_zezin+=valor1;
                    else
                        cofre_joao+=valor1, cofre_zezin+=valor2;
                }else{
                    if(valor1 > valor2)
                        cofre_joao+=valor1, cofre_zezin+=valor2;
                    else
                        cofre_joao+=valor2, cofre_zezin+=valor1;
                }
                //if(cofre_joao < cofre_zezin)
                    //cout << cofre_zezin-cofre_joao << endl;
                //else
                    cout << diferenca << endl;
            }
            cout << endl;
        }
    }while(qtd_deposito != 0);
    return 0;
}
>>>>>>> refs/remotes/origin/master
