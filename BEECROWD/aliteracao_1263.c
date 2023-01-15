<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[600], atual;
    int cont_aliteracao=1, i, tam, con=0;
    while(scanf("%[^\n]%*c", frase) != EOF){
        tam=strlen(frase);
        atual=frase[0];
        for(i=2;i<tam;i++){
            if(frase[i-1]==' '){
                if(atual>90 && frase[i]<91){
                    if(atual==frase[i]+32)
                        cont_aliteracao++;
                    else{
                        if(cont_aliteracao>1)
                            con++;
                        atual=frase[i], cont_aliteracao=1;
                    }
                }
                else if(atual<91 && frase[i]>91){
                    if(atual==frase[i]-32)
                        cont_aliteracao++;
                    else{
                        if(cont_aliteracao>1)
                            con++;
                        atual=frase[i], cont_aliteracao=1;
                    }
                }
                else{
                    if(atual==frase[i])
                        cont_aliteracao++;
                    else{
                        if(cont_aliteracao>1)
                            con++;
                        atual=frase[i], cont_aliteracao=1;
                    }
                }
            }
        }
        if(cont_aliteracao>1)
            con++;
        printf("%d\n", con);
        cont_aliteracao=1, con=0;
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[600], atual;
    int cont_aliteracao=1, i, tam, con=0;
    while(scanf("%[^\n]%*c", frase) != EOF){
        tam=strlen(frase);
        atual=frase[0];
        for(i=2;i<tam;i++){
            if(frase[i-1]==' '){
                if(atual>90 && frase[i]<91){
                    if(atual==frase[i]+32)
                        cont_aliteracao++;
                    else{
                        if(cont_aliteracao>1)
                            con++;
                        atual=frase[i], cont_aliteracao=1;
                    }
                }
                else if(atual<91 && frase[i]>91){
                    if(atual==frase[i]-32)
                        cont_aliteracao++;
                    else{
                        if(cont_aliteracao>1)
                            con++;
                        atual=frase[i], cont_aliteracao=1;
                    }
                }
                else{
                    if(atual==frase[i])
                        cont_aliteracao++;
                    else{
                        if(cont_aliteracao>1)
                            con++;
                        atual=frase[i], cont_aliteracao=1;
                    }
                }
            }
        }
        if(cont_aliteracao>1)
            con++;
        printf("%d\n", con);
        cont_aliteracao=1, con=0;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
