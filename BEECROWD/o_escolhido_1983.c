<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_aluno,matricula_aluno, matricula_do_escolhido=-1, i;
    float nota_aluno, nota_max=8.00;
    scanf("%d", &qtd_aluno);
    for(i=0;i<qtd_aluno;i++){
        scanf("%d %f", &matricula_aluno, &nota_aluno);
        if(nota_aluno >= nota_max){
            nota_max=nota_aluno;
            matricula_do_escolhido=matricula_aluno;
        }
    }
    if(matricula_do_escolhido==-1)
        printf("Minimum note not reached");
    else
        printf("%d", matricula_do_escolhido);
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_aluno,matricula_aluno, matricula_do_escolhido=-1, i;
    float nota_aluno, nota_max=8.00;
    scanf("%d", &qtd_aluno);
    for(i=0;i<qtd_aluno;i++){
        scanf("%d %f", &matricula_aluno, &nota_aluno);
        if(nota_aluno >= nota_max){
            nota_max=nota_aluno;
            matricula_do_escolhido=matricula_aluno;
        }
    }
    if(matricula_do_escolhido==-1)
        printf("Minimum note not reached");
    else
        printf("%d", matricula_do_escolhido);
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
