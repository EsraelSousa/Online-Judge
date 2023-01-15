<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordena(const void *a, const void *b){
    return strcmp(a, b);
}

int main(){
    int qtd_aluno, num_sorteado, i;
    scanf("%d %d", &qtd_aluno, &num_sorteado);
    char alunos[qtd_aluno][23];
    for(i=0;i<qtd_aluno;i++)
        scanf("%s", alunos[i]);
    qsort(alunos, qtd_aluno, sizeof(alunos[0]), ordena);
    printf("%s\n", alunos[num_sorteado-1]);
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordena(const void *a, const void *b){
    return strcmp(a, b);
}

int main(){
    int qtd_aluno, num_sorteado, i;
    scanf("%d %d", &qtd_aluno, &num_sorteado);
    char alunos[qtd_aluno][23];
    for(i=0;i<qtd_aluno;i++)
        scanf("%s", alunos[i]);
    qsort(alunos, qtd_aluno, sizeof(alunos[0]), ordena);
    printf("%s\n", alunos[num_sorteado-1]);
    return 0;
}
>>>>>>> refs/remotes/origin/master
