<<<<<<< HEAD
#include <stdio.h>

int main(){
    int gabarito[10000], qtd_num,cont_tentativa=0, i, num, corretude;
    for(i=0;i<10000;i++)
        gabarito[i]=i+1;
    do{
        scanf("%d", &qtd_num);
        if(qtd_num!=0){
            corretude=1;
            cont_tentativa=1;
            while(corretude!=0){
                corretude=0;
                for(i=0;i<qtd_num;i++){
                    scanf("%d", &num);
                    if(num!=gabarito[i])
                        corretude=1;
                }
                if(corretude==1)
                    cont_tentativa++;
            }
            printf("%d\n", cont_tentativa);
        }
    }while(qtd_num!=0);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int gabarito[10000], qtd_num,cont_tentativa=0, i, num, corretude;
    for(i=0;i<10000;i++)
        gabarito[i]=i+1;
    do{
        scanf("%d", &qtd_num);
        if(qtd_num!=0){
            corretude=1;
            cont_tentativa=1;
            while(corretude!=0){
                corretude=0;
                for(i=0;i<qtd_num;i++){
                    scanf("%d", &num);
                    if(num!=gabarito[i])
                        corretude=1;
                }
                if(corretude==1)
                    cont_tentativa++;
            }
            printf("%d\n", cont_tentativa);
        }
    }while(qtd_num!=0);
    return 0;
}
>>>>>>> refs/remotes/origin/master
