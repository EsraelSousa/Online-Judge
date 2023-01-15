<<<<<<< HEAD
#include <stdio.h>

int main(){
    int num_pessoas, num, menor=23, posicao, i;
    scanf("%d", &num_pessoas);
    for(i=0;i<num_pessoas;i++){
        scanf("%d", &num);
        if(num<menor){
            menor=num;
            posicao=i+1;
        }
    }
    printf("%d\n", posicao);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int num_pessoas, num, menor=23, posicao, i;
    scanf("%d", &num_pessoas);
    for(i=0;i<num_pessoas;i++){
        scanf("%d", &num);
        if(num<menor){
            menor=num;
            posicao=i+1;
        }
    }
    printf("%d\n", posicao);
    return 0;
}
>>>>>>> refs/remotes/origin/master
