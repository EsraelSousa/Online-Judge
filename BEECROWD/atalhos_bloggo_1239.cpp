<<<<<<< HEAD
#include <cstdio>
#include <cstring>

int main(){
    char frase[60];
    int nivel_anderline, nivel_asterisco, i;
    while(scanf("%[^\n]%*c", frase) != EOF){
        nivel_anderline=0, nivel_asterisco=0;
        for(i=0; i<strlen(frase); i++){
            if(frase[i]=='_' && nivel_anderline==0){
                printf("<i>");
                nivel_anderline=1;
            }else if(frase[i]=='_' && nivel_anderline==1){
                printf("</i>");
                nivel_anderline=0;
            }else if(frase[i]=='*' && nivel_asterisco==0){
                printf("<b>");
                nivel_asterisco=1;
            }else if(frase[i]=='*' && nivel_asterisco==1){
                printf("</b>");
                nivel_asterisco=0;
            }else
                printf("%c", frase[i]);
        }
        printf("\n");
    }
    return 0;
}
=======
#include <cstdio>
#include <cstring>

int main(){
    char frase[60];
    int nivel_anderline, nivel_asterisco, i;
    while(scanf("%[^\n]%*c", frase) != EOF){
        nivel_anderline=0, nivel_asterisco=0;
        for(i=0; i<strlen(frase); i++){
            if(frase[i]=='_' && nivel_anderline==0){
                printf("<i>");
                nivel_anderline=1;
            }else if(frase[i]=='_' && nivel_anderline==1){
                printf("</i>");
                nivel_anderline=0;
            }else if(frase[i]=='*' && nivel_asterisco==0){
                printf("<b>");
                nivel_asterisco=1;
            }else if(frase[i]=='*' && nivel_asterisco==1){
                printf("</b>");
                nivel_asterisco=0;
            }else
                printf("%c", frase[i]);
        }
        printf("\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
