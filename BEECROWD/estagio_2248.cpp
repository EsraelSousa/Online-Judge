<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd_nota, cont_aluno, id, nota_max, turma=1;
    int ids_e_notas[1000][2];
    do{
        cin >> qtd_nota;
        if(qtd_nota != 0){
            cont_aluno=0, nota_max=0;
            for(int i=0; i<qtd_nota; i++){
                cin >> ids_e_notas[i][0] >> ids_e_notas[i][1];
                if(ids_e_notas[i][1] > nota_max){
                    nota_max=ids_e_notas[i][1];
                    id=ids_e_notas[i][0];
                    cont_aluno=1;
                }
                else if(ids_e_notas[i][1] == nota_max)
                    cont_aluno++;
            }
            cout << "Turma " << turma << endl;
            turma++;
            if(cont_aluno==1)
                cout << id << " " << endl << endl;
            else{
                for(int i=0; i<qtd_nota; i++){
                    if(ids_e_notas[i][1] == nota_max){
                        cout << ids_e_notas[i][0] << " ";
                    }
                }
                cout << endl << endl;
            }
        }
    }while(qtd_nota != 0);
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd_nota, cont_aluno, id, nota_max, turma=1;
    int ids_e_notas[1000][2];
    do{
        cin >> qtd_nota;
        if(qtd_nota != 0){
            cont_aluno=0, nota_max=0;
            for(int i=0; i<qtd_nota; i++){
                cin >> ids_e_notas[i][0] >> ids_e_notas[i][1];
                if(ids_e_notas[i][1] > nota_max){
                    nota_max=ids_e_notas[i][1];
                    id=ids_e_notas[i][0];
                    cont_aluno=1;
                }
                else if(ids_e_notas[i][1] == nota_max)
                    cont_aluno++;
            }
            cout << "Turma " << turma << endl;
            turma++;
            if(cont_aluno==1)
                cout << id << " " << endl << endl;
            else{
                for(int i=0; i<qtd_nota; i++){
                    if(ids_e_notas[i][1] == nota_max){
                        cout << ids_e_notas[i][0] << " ";
                    }
                }
                cout << endl << endl;
            }
        }
    }while(qtd_nota != 0);
    return 0;
}
>>>>>>> refs/remotes/origin/master
