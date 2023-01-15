<<<<<<< HEAD
#include <cstdio>
#include <cstring>
#include <cstdlib>

typedef struct aluno Taluno;

struct aluno{
    char nome[55];
    char frequencia[100];
};

int main(){
    int qtd_teste, qtd_aluno, flag_sai, cont_falta, cont_presen, i, j, k;
    Taluno alunos[103];
    scanf("%d", &qtd_teste);
    for(i=0; i<qtd_teste; i++){
        flag_sai=0;
        scanf("%d", &qtd_aluno);
        for(j=0; j<qtd_aluno; j++)
            scanf("%s", alunos[j].nome);
        for(j=0; j<qtd_aluno; j++)
            scanf("%s", alunos[j].frequencia);
        for(j=0; j<qtd_aluno; j++){
            cont_falta=0, cont_presen=0;
            for(k=0; k<strlen(alunos[j].frequencia); k++){
                if(alunos[j].frequencia[k]=='A')
                    cont_falta++;
                if(alunos[j].frequencia[k]=='P')
                    cont_presen++;
            }
            if(cont_falta > (cont_presen+cont_falta)*0.25 && flag_sai==0){
                printf("%s", alunos[j].nome);
                flag_sai=1;
            }
            else if(cont_falta > (cont_presen+cont_falta)*0.25 && flag_sai==1){
                printf(" %s", alunos[j].nome);
            }
        }
        printf("\n");
    }
    return 0;
}
=======
#include <cstdio>
#include <cstring>
#include <cstdlib>

typedef struct aluno Taluno;

struct aluno{
    char nome[55];
    char frequencia[100];
};

int main(){
    int qtd_teste, qtd_aluno, flag_sai, cont_falta, cont_presen, i, j, k;
    Taluno alunos[103];
    scanf("%d", &qtd_teste);
    for(i=0; i<qtd_teste; i++){
        flag_sai=0;
        scanf("%d", &qtd_aluno);
        for(j=0; j<qtd_aluno; j++)
            scanf("%s", alunos[j].nome);
        for(j=0; j<qtd_aluno; j++)
            scanf("%s", alunos[j].frequencia);
        for(j=0; j<qtd_aluno; j++){
            cont_falta=0, cont_presen=0;
            for(k=0; k<strlen(alunos[j].frequencia); k++){
                if(alunos[j].frequencia[k]=='A')
                    cont_falta++;
                if(alunos[j].frequencia[k]=='P')
                    cont_presen++;
            }
            if(cont_falta > (cont_presen+cont_falta)*0.25 && flag_sai==0){
                printf("%s", alunos[j].nome);
                flag_sai=1;
            }
            else if(cont_falta > (cont_presen+cont_falta)*0.25 && flag_sai==1){
                printf(" %s", alunos[j].nome);
            }
        }
        printf("\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
