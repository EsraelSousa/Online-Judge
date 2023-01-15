<<<<<<< HEAD
#include <stdio.h>

int main(){
    int teste=1, qtd_num=1, i, soma=0, num;
    char opera;
    while(qtd_num!=0){
        scanf("%d", &qtd_num);
        for(i=0;i<qtd_num;i++){
            if(i==0){
                scanf("%3d", &num);
                soma=num;
            }else{
                scanf("%c%3d", &opera, &num);
                if(opera=='+')
                    soma+=num;
                else
                    soma-=num;
            }
        }
        if(qtd_num!=0)
            printf("Teste %d\n%d\n\n", teste, soma);
        teste++, soma=0;
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int teste=1, qtd_num=1, i, soma=0, num;
    char opera;
    while(qtd_num!=0){
        scanf("%d", &qtd_num);
        for(i=0;i<qtd_num;i++){
            if(i==0){
                scanf("%3d", &num);
                soma=num;
            }else{
                scanf("%c%3d", &opera, &num);
                if(opera=='+')
                    soma+=num;
                else
                    soma-=num;
            }
        }
        if(qtd_num!=0)
            printf("Teste %d\n%d\n\n", teste, soma);
        teste++, soma=0;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
