<<<<<<< HEAD

#include <stdio.h>

int main(){
    int qtd_num,total, num_caso=1,i,j;
    while(scanf("%d", &qtd_num) != EOF){
        printf("Caso %d: ", num_caso);
        total=(qtd_num*(1+qtd_num))/2+1;
        if(total==1){
            printf("%d numero\n", total);
            printf("0\n\n");
        }else{
            printf("%d numeros\n0 ", total);
            for(i=0;i<=qtd_num;i++){
                for(j=0;j<i;j++)
                if(j+1==qtd_num)
                    printf("%d\n\n", i);
                else
                    printf("%d ", i);
            }
        }
        num_caso++;
    }
}
=======

#include <stdio.h>

int main(){
    int qtd_num,total, num_caso=1,i,j;
    while(scanf("%d", &qtd_num) != EOF){
        printf("Caso %d: ", num_caso);
        total=(qtd_num*(1+qtd_num))/2+1;
        if(total==1){
            printf("%d numero\n", total);
            printf("0\n\n");
        }else{
            printf("%d numeros\n0 ", total);
            for(i=0;i<=qtd_num;i++){
                for(j=0;j<i;j++)
                if(j+1==qtd_num)
                    printf("%d\n\n", i);
                else
                    printf("%d ", i);
            }
        }
        num_caso++;
    }
}
>>>>>>> refs/remotes/origin/master
