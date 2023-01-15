<<<<<<< HEAD
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct aluno{
    string nome;
    int qtd_resol;
};

bool ordena(aluno a, aluno b){
    if(a.qtd_resol == b.qtd_resol)
        return a.nome < b.nome;
    else
        return a.qtd_resol > b.qtd_resol;
}

int main(){
    aluno alunos[102];
    int qtd_aluno, instancia=1, flag=0;
    while(cin >> qtd_aluno){
        for(int i=0; i<qtd_aluno; i++)
            cin >> alunos[i].nome >> alunos[i].qtd_resol;
        sort(alunos, alunos+qtd_aluno, ordena);
        cout << "Instancia " << instancia << "\n" << alunos[qtd_aluno-1].nome << endl << endl;
        instancia++;
    }
    return 0;
}
=======
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct aluno{
    string nome;
    int qtd_resol;
};

bool ordena(aluno a, aluno b){
    if(a.qtd_resol == b.qtd_resol)
        return a.nome < b.nome;
    else
        return a.qtd_resol > b.qtd_resol;
}

int main(){
    aluno alunos[102];
    int qtd_aluno, instancia=1, flag=0;
    while(cin >> qtd_aluno){
        for(int i=0; i<qtd_aluno; i++)
            cin >> alunos[i].nome >> alunos[i].qtd_resol;
        sort(alunos, alunos+qtd_aluno, ordena);
        cout << "Instancia " << instancia << "\n" << alunos[qtd_aluno-1].nome << endl << endl;
        instancia++;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
