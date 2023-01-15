<<<<<<< HEAD
#include <cstdio>
#include <cstring>

int main(){
    char letras[52][50];
    int qtd_letra, cont_espaco, cont_ponto, flag;
    while(scanf("%d%*c", &qtd_letra) == 1){
        for(int i=0; i<qtd_letra; i++)
            scanf("%[^\n]%*c", letras[i]);
        for(int i=0; i<qtd_letra; i++){
            cont_espaco=0, cont_ponto=0, flag=0;
            for(int j=0; j<strlen(letras[i]); j++){
                if(letras[i][j]==' ')
                    cont_espaco++, flag=1;
                if(letras[i][j]!=' ' && flag==0)
                    cont_ponto++;
            }
            if(cont_ponto==1)
                printf("%c\n", (strlen(letras[i])-cont_espaco)*3+94);
            else if(cont_ponto==2)
                printf("%c\n", (strlen(letras[i])-cont_espaco)/2*3+95);
            else
                printf("%c\n", (strlen(letras[i])-cont_espaco)/3*3+96);
        }
    }
    return 0;
}
=======
#include <cstdio>
#include <cstring>

int main(){
    char letras[52][50];
    int qtd_letra, cont_espaco, cont_ponto, flag;
    while(scanf("%d%*c", &qtd_letra) == 1){
        for(int i=0; i<qtd_letra; i++)
            scanf("%[^\n]%*c", letras[i]);
        for(int i=0; i<qtd_letra; i++){
            cont_espaco=0, cont_ponto=0, flag=0;
            for(int j=0; j<strlen(letras[i]); j++){
                if(letras[i][j]==' ')
                    cont_espaco++, flag=1;
                if(letras[i][j]!=' ' && flag==0)
                    cont_ponto++;
            }
            if(cont_ponto==1)
                printf("%c\n", (strlen(letras[i])-cont_espaco)*3+94);
            else if(cont_ponto==2)
                printf("%c\n", (strlen(letras[i])-cont_espaco)/2*3+95);
            else
                printf("%c\n", (strlen(letras[i])-cont_espaco)/3*3+96);
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
