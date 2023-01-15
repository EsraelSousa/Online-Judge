<<<<<<< HEAD
#include <stdio.h>

int main(){
    int n, cont_comida=0, cont_max=0, i,j;  // n é a domensão da matriz
    char caminho[100][102];
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%s", caminho[i]);
    for(i=0;i<n;i++){
        if(i%2==0){
            for(j=0;j<n;j++){
                if(caminho[i][j]=='o')
                    cont_comida++;
                else if(caminho[i][j]=='A'){
                    if(cont_comida>cont_max)
                        cont_max=cont_comida;
                    cont_comida=0;
                }
            }
        }else{
            for(j=n-1;j>=0;j--){
                if(caminho[i][j]=='o')
                    cont_comida++;
                else if(caminho[i][j]=='A'){
                    if(cont_comida>cont_max)
                        cont_max=cont_comida;
                    cont_comida=0;
                }
            }
        }
    }
    if(cont_comida>cont_max)
        cont_max=cont_comida;
    printf("%d\n", cont_max);
    return 0;
}

=======
#include <stdio.h>

int main(){
    int n, cont_comida=0, cont_max=0, i,j;  // n é a domensão da matriz
    char caminho[100][102];
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%s", caminho[i]);
    for(i=0;i<n;i++){
        if(i%2==0){
            for(j=0;j<n;j++){
                if(caminho[i][j]=='o')
                    cont_comida++;
                else if(caminho[i][j]=='A'){
                    if(cont_comida>cont_max)
                        cont_max=cont_comida;
                    cont_comida=0;
                }
            }
        }else{
            for(j=n-1;j>=0;j--){
                if(caminho[i][j]=='o')
                    cont_comida++;
                else if(caminho[i][j]=='A'){
                    if(cont_comida>cont_max)
                        cont_max=cont_comida;
                    cont_comida=0;
                }
            }
        }
    }
    if(cont_comida>cont_max)
        cont_max=cont_comida;
    printf("%d\n", cont_max);
    return 0;
}

>>>>>>> refs/remotes/origin/master
