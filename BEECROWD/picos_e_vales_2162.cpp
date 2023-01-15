<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main(){
    short tamanho_paisagem, anter, atual, estado, corretude=0;
    cin >> tamanho_paisagem;
    for(short i=0; i<tamanho_paisagem; i++){
        if(i==0)
            cin >> anter;
        else{
            cin >> atual;
            if(i==1){
                if(atual > anter)
                    estado=1;
                else if(atual < anter)
                    estado=0;
                else corretude=1;
                anter=atual;
            }else{
                if(atual > anter && estado==0 && corretude==0)
                    estado=1;
                else if(atual < anter && estado==1 && corretude==0)
                    estado=0;
                else corretude=1;
                anter=atual;
            }
        }

    }
    if(corretude==0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int main(){
    short tamanho_paisagem, anter, atual, estado, corretude=0;
    cin >> tamanho_paisagem;
    for(short i=0; i<tamanho_paisagem; i++){
        if(i==0)
            cin >> anter;
        else{
            cin >> atual;
            if(i==1){
                if(atual > anter)
                    estado=1;
                else if(atual < anter)
                    estado=0;
                else corretude=1;
                anter=atual;
            }else{
                if(atual > anter && estado==0 && corretude==0)
                    estado=1;
                else if(atual < anter && estado==1 && corretude==0)
                    estado=0;
                else corretude=1;
                anter=atual;
            }
        }

    }
    if(corretude==0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
>>>>>>> refs/remotes/origin/master
