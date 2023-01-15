<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[1010], atual;
    int cont_aliteracao=0, i, tam, con=0;
    while(scanf("%[^\n]%*c", frase) != EOF){
        if(strcmp(frase, "*")==0)
            break;
        tam=strlen(frase);
        atual=frase[0];
        for(i=2;i<tam;i++){
            if(frase[i-1]==' '){
                con++;
                if(atual>90 && frase[i]<91){
                    if(atual==frase[i]+32)
                        cont_aliteracao++;
                    else{
                        break;
                    }
                }
                else if(atual<91 && frase[i]>91){
                    if(atual==frase[i]-32)
                        cont_aliteracao++;
                    else{
                        break;
                    }
                }
                else{
                    if(atual==frase[i])
                        cont_aliteracao++;
                    else{
                        break;
                    }
                }
            }
        }
        //printf("%d %d\n", con, cont_aliteracao);
        if(con==cont_aliteracao)
            printf("Y\n");
        else
            printf("N\n");
        cont_aliteracao=0, con=0;
    }
    return 0;
}

=======
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[1010], atual;
    int cont_aliteracao=0, i, tam, con=0;
    while(scanf("%[^\n]%*c", frase) != EOF){
        if(strcmp(frase, "*")==0)
            break;
        tam=strlen(frase);
        atual=frase[0];
        for(i=2;i<tam;i++){
            if(frase[i-1]==' '){
                con++;
                if(atual>90 && frase[i]<91){
                    if(atual==frase[i]+32)
                        cont_aliteracao++;
                    else{
                        break;
                    }
                }
                else if(atual<91 && frase[i]>91){
                    if(atual==frase[i]-32)
                        cont_aliteracao++;
                    else{
                        break;
                    }
                }
                else{
                    if(atual==frase[i])
                        cont_aliteracao++;
                    else{
                        break;
                    }
                }
            }
        }
        //printf("%d %d\n", con, cont_aliteracao);
        if(con==cont_aliteracao)
            printf("Y\n");
        else
            printf("N\n");
        cont_aliteracao=0, con=0;
    }
    return 0;
}

>>>>>>> refs/remotes/origin/master
