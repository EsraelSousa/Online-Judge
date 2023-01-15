<<<<<<< HEAD
#include <stdio.h>

int main(){
    int x1, x2, y1, y2, x3, y3, teste=1, i, qtd_meteo, cont_meteo=0;
    //double a, b;
    do{
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if(x1!=0 && x2!=0 && y1!=0 && y2!=0){
            //a=(-1*y2+y1)/(-1*x2+x1);
            //b=y1+(-1*x1*a);
            scanf("%d", &qtd_meteo);
            for(i=0;i<qtd_meteo;i++){
                scanf("%d %d", &x3, &y3);
                if(x3>=x1 && x3<=x2 && y3<=y1 && y3>=y2)
                    cont_meteo++;
                    //printf("ind %d\n", i);

            }
            printf("Teste %d\n%d\n", teste, cont_meteo);
            teste++, cont_meteo=0;
        }
    }while(x1!=0 && x2!=0 && y1!=0 && y2!=0);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int x1, x2, y1, y2, x3, y3, teste=1, i, qtd_meteo, cont_meteo=0;
    //double a, b;
    do{
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if(x1!=0 && x2!=0 && y1!=0 && y2!=0){
            //a=(-1*y2+y1)/(-1*x2+x1);
            //b=y1+(-1*x1*a);
            scanf("%d", &qtd_meteo);
            for(i=0;i<qtd_meteo;i++){
                scanf("%d %d", &x3, &y3);
                if(x3>=x1 && x3<=x2 && y3<=y1 && y3>=y2)
                    cont_meteo++;
                    //printf("ind %d\n", i);

            }
            printf("Teste %d\n%d\n", teste, cont_meteo);
            teste++, cont_meteo=0;
        }
    }while(x1!=0 && x2!=0 && y1!=0 && y2!=0);
    return 0;
}
>>>>>>> refs/remotes/origin/master
