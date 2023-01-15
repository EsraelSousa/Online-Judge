<<<<<<< HEAD
#include <stdio.h>

int main(){
    int res[6], num, i, j, cont=0;
    for(i=0;i<6;i++)
        scanf("%d", &res[i]);
    for(i=0;i<6;i++){
        scanf("%d", &num);
        for(j=0;j<6;j++){
            if(res[j]==num){
                cont++;
                break;
            }
        }
    }
    if(cont<3)
        printf("azar\n");
    else if(cont==3)
        printf("terno\n");
    else if(cont==4)
        printf("quadra\n");
    else if(cont==5)
        printf("quina\n");
    else
        printf("sena\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int res[6], num, i, j, cont=0;
    for(i=0;i<6;i++)
        scanf("%d", &res[i]);
    for(i=0;i<6;i++){
        scanf("%d", &num);
        for(j=0;j<6;j++){
            if(res[j]==num){
                cont++;
                break;
            }
        }
    }
    if(cont<3)
        printf("azar\n");
    else if(cont==3)
        printf("terno\n");
    else if(cont==4)
        printf("quadra\n");
    else if(cont==5)
        printf("quina\n");
    else
        printf("sena\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
