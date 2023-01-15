<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main(){
    string processos;
    short qtd_max_processo, cont_processos=0, cont_aux;
    while(cin >> processos >> qtd_max_processo){
        cont_aux=0, cont_processos=0;
        for(int i=0; i<processos.size(); i++){
            if(processos.size()-i==1 && processos[i]=='R' && cont_aux==qtd_max_processo)
                cont_processos+=2, cont_aux=0;
            else if(cont_aux==qtd_max_processo && processos[i]=='R')
                cont_processos++, cont_aux=1;
            else if(processos[i]=='W'){
                if(cont_aux != 0)
                    cont_processos+=2;
                else
                    cont_processos++;
                cont_aux=0;
            }
            else
                cont_aux++;
        }
        if(cont_aux != 0)
            cont_processos++;
        cout << cont_processos << endl;
    }
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int main(){
    string processos;
    short qtd_max_processo, cont_processos=0, cont_aux;
    while(cin >> processos >> qtd_max_processo){
        cont_aux=0, cont_processos=0;
        for(int i=0; i<processos.size(); i++){
            if(processos.size()-i==1 && processos[i]=='R' && cont_aux==qtd_max_processo)
                cont_processos+=2, cont_aux=0;
            else if(cont_aux==qtd_max_processo && processos[i]=='R')
                cont_processos++, cont_aux=1;
            else if(processos[i]=='W'){
                if(cont_aux != 0)
                    cont_processos+=2;
                else
                    cont_processos++;
                cont_aux=0;
            }
            else
                cont_aux++;
        }
        if(cont_aux != 0)
            cont_processos++;
        cout << cont_processos << endl;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
