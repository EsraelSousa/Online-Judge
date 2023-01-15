<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_caso, i;
    char mov[1002], face;
    do{
        scanf("%d%*c", &qtd_caso);
        if(qtd_caso !=0){
            scanf("%s", mov);
            face='N';
            for(i=0;i<qtd_caso;i++){
                if(face=='N'){
                    if(mov[i]=='D')
                        face='L';
                    else
                        face='O';
                }
                else if(face=='L'){
                    if(mov[i]=='D')
                        face='S';
                    else
                        face='N';
                }
                else if(face=='S'){
                    if(mov[i]=='D')
                        face='O';
                    else
                        face='L';
                }
                else if(face=='O'){
                    if(mov[i]=='D')
                        face='N';
                    else
                        face='S';
                }
                else
                    printf("ERRO\n");
            }
            printf("%c\n", face);
        }

    }while(qtd_caso != 0);
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_caso, i;
    char mov[1002], face;
    do{
        scanf("%d%*c", &qtd_caso);
        if(qtd_caso !=0){
            scanf("%s", mov);
            face='N';
            for(i=0;i<qtd_caso;i++){
                if(face=='N'){
                    if(mov[i]=='D')
                        face='L';
                    else
                        face='O';
                }
                else if(face=='L'){
                    if(mov[i]=='D')
                        face='S';
                    else
                        face='N';
                }
                else if(face=='S'){
                    if(mov[i]=='D')
                        face='O';
                    else
                        face='L';
                }
                else if(face=='O'){
                    if(mov[i]=='D')
                        face='N';
                    else
                        face='S';
                }
                else
                    printf("ERRO\n");
            }
            printf("%c\n", face);
        }

    }while(qtd_caso != 0);
    return 0;
}
>>>>>>> refs/remotes/origin/master
