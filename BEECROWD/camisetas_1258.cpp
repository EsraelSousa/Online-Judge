<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

struct aluno{
    string nome;
    string cor;
    string tamanho;
};

bool compara_ordenacao(aluno a, aluno b){
    if(a.cor == b.cor){
        if(a.tamanho == b.tamanho)
            return a.nome < b.nome;
        else
            return a.tamanho > b.tamanho;
    }
    else
        return a.cor < b.cor;
}

int main(){
    aluno alunos[65];
    int qtd_aluno=1, flag_saida=0;
    while(qtd_aluno != 0){
        cin >> qtd_aluno;
        getchar();
        if(qtd_aluno != 0){
            for(int i=0; i<qtd_aluno; i++){
                getline(cin, alunos[i].nome);
                cin >> alunos[i].cor >> alunos[i].tamanho;
                getchar();
            }
            // ordenar
            sort(alunos, alunos+qtd_aluno, compara_ordenacao);
            if(flag_saida==1)
                printf("\n");
            for(int i=0; i<qtd_aluno; i++){
                cout << alunos[i].cor << " " << alunos[i].tamanho << " " << alunos[i].nome << endl;
            }
            flag_saida=1;
        }
    }
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

struct aluno{
    string nome;
    string cor;
    string tamanho;
};

bool compara_ordenacao(aluno a, aluno b){
    if(a.cor == b.cor){
        if(a.tamanho == b.tamanho)
            return a.nome < b.nome;
        else
            return a.tamanho > b.tamanho;
    }
    else
        return a.cor < b.cor;
}

int main(){
    aluno alunos[65];
    int qtd_aluno=1, flag_saida=0;
    while(qtd_aluno != 0){
        cin >> qtd_aluno;
        getchar();
        if(qtd_aluno != 0){
            for(int i=0; i<qtd_aluno; i++){
                getline(cin, alunos[i].nome);
                cin >> alunos[i].cor >> alunos[i].tamanho;
                getchar();
            }
            // ordenar
            sort(alunos, alunos+qtd_aluno, compara_ordenacao);
            if(flag_saida==1)
                printf("\n");
            for(int i=0; i<qtd_aluno; i++){
                cout << alunos[i].cor << " " << alunos[i].tamanho << " " << alunos[i].nome << endl;
            }
            flag_saida=1;
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
