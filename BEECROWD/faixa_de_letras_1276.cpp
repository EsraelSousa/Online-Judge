<<<<<<< HEAD
#include <cstdio>
#include <cstring>

int main(){
    char frase[10000];
    int frequencia[28], i, flag, cont;
    while(fgets(frase, 1000, stdin)){
        //printf("$$$ %s\n", frase);
        for(i=0; i<28;i++)
            frequencia[i]=0;
        flag=0, cont=0;
        if(strlen(frase) == 0)
            printf("\n");
        else{
            for(i=0; i<strlen(frase) && cont<25; i++){
                frequencia[frase[i]-'a']++;
                if(frequencia[frase[i]-'a'] == 1)
                    cont++;
            }
            if(cont==25)
                printf("a:z\n");
            else{
                for(i=0; i<26; i++){
                if(frequencia[i] != 0 && flag==0){
                    printf("%c:", i+'a');
                   flag=1;
                }
                else if(frequencia[i] != 0 && flag == 1 && frequencia[i-1]==0)
                   printf(", %c:", i+'a');
                if(frequencia[i]!=0 && frequencia[i+1] == 0  && i< 25)
                    printf("%c", i+97);
                }
                if(frequencia[25]!=0)
                    printf("z");
                printf("\n");
            }
        }
    }
    return 0;
}
=======
#include <cstdio>
#include <cstring>

int main(){
    char frase[10000];
    int frequencia[28], i, flag, cont;
    while(fgets(frase, 1000, stdin)){
        //printf("$$$ %s\n", frase);
        for(i=0; i<28;i++)
            frequencia[i]=0;
        flag=0, cont=0;
        if(strlen(frase) == 0)
            printf("\n");
        else{
            for(i=0; i<strlen(frase) && cont<25; i++){
                frequencia[frase[i]-'a']++;
                if(frequencia[frase[i]-'a'] == 1)
                    cont++;
            }
            if(cont==25)
                printf("a:z\n");
            else{
                for(i=0; i<26; i++){
                if(frequencia[i] != 0 && flag==0){
                    printf("%c:", i+'a');
                   flag=1;
                }
                else if(frequencia[i] != 0 && flag == 1 && frequencia[i-1]==0)
                   printf(", %c:", i+'a');
                if(frequencia[i]!=0 && frequencia[i+1] == 0  && i< 25)
                    printf("%c", i+97);
                }
                if(frequencia[25]!=0)
                    printf("z");
                printf("\n");
            }
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
