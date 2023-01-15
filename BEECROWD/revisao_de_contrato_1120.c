<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    char carac[3], num[110], aux[110], aux1[110], corre=0;
    int tam, i, j=0;
    do{
        scanf("%s %s", carac, num);
        if(strcmp(carac, "0")!=0 && strcmp(num, "0")!=0){
            tam=strlen(num), j=0;
            for(i=0;i<tam;i++){
                if(num[i]!=carac[0]){
                    aux[j]=num[i];
                    j++;
                }
            }
            aux[j]='\0';
            memset(aux1, (char)'0', sizeof(aux1));
            aux1[j]='\0';
            if(strcmp(aux, aux1)==0)
                printf("%d\n", 0);
            else{
                memset(aux1, (char)carac[0], j);
                aux1[j]='\0';
                if(strcmp(aux, aux1)==0)
                    printf("%d\n", 0);
                else{
                    tam=j;
                    if(aux[0]!='0')
                        printf("%s\n", aux);
                    else{
                        for(j=0;aux[j]=='0';j++){
                            continue;
                        }
                        for(; j<tam;j++)
                            printf("%c", aux[j]);
                        printf("\n");
                    }
                }
            }
        }
    }while(strcmp(carac, "0")!=0 && strcmp(num, "0")!=0);
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    char carac[3], num[110], aux[110], aux1[110], corre=0;
    int tam, i, j=0;
    do{
        scanf("%s %s", carac, num);
        if(strcmp(carac, "0")!=0 && strcmp(num, "0")!=0){
            tam=strlen(num), j=0;
            for(i=0;i<tam;i++){
                if(num[i]!=carac[0]){
                    aux[j]=num[i];
                    j++;
                }
            }
            aux[j]='\0';
            memset(aux1, (char)'0', sizeof(aux1));
            aux1[j]='\0';
            if(strcmp(aux, aux1)==0)
                printf("%d\n", 0);
            else{
                memset(aux1, (char)carac[0], j);
                aux1[j]='\0';
                if(strcmp(aux, aux1)==0)
                    printf("%d\n", 0);
                else{
                    tam=j;
                    if(aux[0]!='0')
                        printf("%s\n", aux);
                    else{
                        for(j=0;aux[j]=='0';j++){
                            continue;
                        }
                        for(; j<tam;j++)
                            printf("%c", aux[j]);
                        printf("\n");
                    }
                }
            }
        }
    }while(strcmp(carac, "0")!=0 && strcmp(num, "0")!=0);
    return 0;
}
>>>>>>> refs/remotes/origin/master
