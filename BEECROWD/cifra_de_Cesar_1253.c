<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int busca_1_letra(char letra);

int main(){
    int qtd_caso, chave_codigo, num_letra, num, i, j;
    char codigo[51], ALFABETO[26];
    printf("\n");
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%s %d", codigo, &chave_codigo);
        for(j=0;j<strlen(codigo);j++){
            num_letra=busca_1_letra(codigo[j]);
            if(num_letra-chave_codigo<65){
                num=91-(chave_codigo-(num_letra-65));
            }else{
                num=num_letra-chave_codigo;
            }
            //printf(" NUM: %d ", num);
            printf("%c", num);
        }
        printf("\n");
    }
    return 0;
}

int busca_1_letra(char letra){
    int i;
    for(i=65;i<91;i++){
        if(letra==i)
            break;
    }
    return i;
}
=======
#include <stdio.h>
#include <string.h>

int busca_1_letra(char letra);

int main(){
    int qtd_caso, chave_codigo, num_letra, num, i, j;
    char codigo[51], ALFABETO[26];
    printf("\n");
    scanf("%d", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%s %d", codigo, &chave_codigo);
        for(j=0;j<strlen(codigo);j++){
            num_letra=busca_1_letra(codigo[j]);
            if(num_letra-chave_codigo<65){
                num=91-(chave_codigo-(num_letra-65));
            }else{
                num=num_letra-chave_codigo;
            }
            //printf(" NUM: %d ", num);
            printf("%c", num);
        }
        printf("\n");
    }
    return 0;
}

int busca_1_letra(char letra){
    int i;
    for(i=65;i<91;i++){
        if(letra==i)
            break;
    }
    return i;
}
>>>>>>> refs/remotes/origin/master
