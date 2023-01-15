<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_linha, atual=1, i;
    int cont_toque=0;
    do{
        scanf("%d", &qtd_linha);
        if(qtd_linha!=0){
            int caminho[qtd_linha][3];
            for(i=0;i<qtd_linha;i++){
                scanf("%d %d %d", &caminho[i][0], &caminho[i][1], &caminho[i][2]);
                if((atual==0 && caminho[i][0]==0) || (atual==1 && caminho[i][1]==0) || (atual==2 && caminho[i][2]==0))
                	continue;
                else if(atual==0 && caminho[i][0]==1){
                    if(caminho[i][1]==1){
                        cont_toque+=2;
                        atual=2;
                    }else{
                        cont_toque++;
                        atual=1;
                    }
                }
                else if(atual==1 && caminho[i][1]==1){
                    if(caminho[i][0]==1){
                        cont_toque++;
                        atual=2;
                    }else{
                        cont_toque++;
                        atual=0;
                    }
                }
                else if(atual==2 && caminho[i][2]==1){
                    if(caminho[i][1]==1){
                        cont_toque+=2;
                        atual=0;
                    }else{
                        cont_toque++;
                        atual=1;
                    }
                }
            }
            printf("%d\n", cont_toque);
            cont_toque=0;
            atual=1;
        }
    }while(qtd_linha!=0);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_linha, atual=1, i;
    int cont_toque=0;
    do{
        scanf("%d", &qtd_linha);
        if(qtd_linha!=0){
            int caminho[qtd_linha][3];
            for(i=0;i<qtd_linha;i++){
                scanf("%d %d %d", &caminho[i][0], &caminho[i][1], &caminho[i][2]);
                if((atual==0 && caminho[i][0]==0) || (atual==1 && caminho[i][1]==0) || (atual==2 && caminho[i][2]==0))
                	continue;
                else if(atual==0 && caminho[i][0]==1){
                    if(caminho[i][1]==1){
                        cont_toque+=2;
                        atual=2;
                    }else{
                        cont_toque++;
                        atual=1;
                    }
                }
                else if(atual==1 && caminho[i][1]==1){
                    if(caminho[i][0]==1){
                        cont_toque++;
                        atual=2;
                    }else{
                        cont_toque++;
                        atual=0;
                    }
                }
                else if(atual==2 && caminho[i][2]==1){
                    if(caminho[i][1]==1){
                        cont_toque+=2;
                        atual=0;
                    }else{
                        cont_toque++;
                        atual=1;
                    }
                }
            }
            printf("%d\n", cont_toque);
            cont_toque=0;
            atual=1;
        }
    }while(qtd_linha!=0);
    return 0;
}
>>>>>>> refs/remotes/origin/master
