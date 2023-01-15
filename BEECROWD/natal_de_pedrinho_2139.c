<<<<<<< HEAD
#include <stdio.h>

int qtd_meses_anteriores(int mes){
    if(mes==1)
        return 0;
    else if(mes==2)
        return 31;
    else if(mes==3)
        return 60;
    else if(mes==4)
        return 91;
    else if(mes==5)
        return 121;
    else if(mes==6)
        return 152;
    else if(mes==7)
        return 182;
    else if(mes==8)
        return 213;
    else if(mes==9)
        return 244;
    else if(mes==10)
        return 274;
    else if(mes==11)
        return 304;
    else
        return 334;

}

int main(){
    int dia, mes;
    while(scanf("%d %d", &mes, &dia) != EOF){
        if(359-(qtd_meses_anteriores(mes)+dia)==0)
            printf("E natal!\n");
        else if(359-(qtd_meses_anteriores(mes)+dia)==1)
            printf("E vespera de natal!\n");
        else if(359-(qtd_meses_anteriores(mes)+dia)<0)
            printf("Ja passou!\n");
        else if(mes>10)
            printf("Faltam %d dias para o natal!\n", 359-(qtd_meses_anteriores(mes)+dia));
        else
            printf("Faltam %d dias para o natal!\n", 360-(qtd_meses_anteriores(mes)+dia));
    }
    return 0;
}
=======
#include <stdio.h>

int qtd_meses_anteriores(int mes){
    if(mes==1)
        return 0;
    else if(mes==2)
        return 31;
    else if(mes==3)
        return 60;
    else if(mes==4)
        return 91;
    else if(mes==5)
        return 121;
    else if(mes==6)
        return 152;
    else if(mes==7)
        return 182;
    else if(mes==8)
        return 213;
    else if(mes==9)
        return 244;
    else if(mes==10)
        return 274;
    else if(mes==11)
        return 304;
    else
        return 334;

}

int main(){
    int dia, mes;
    while(scanf("%d %d", &mes, &dia) != EOF){
        if(359-(qtd_meses_anteriores(mes)+dia)==0)
            printf("E natal!\n");
        else if(359-(qtd_meses_anteriores(mes)+dia)==1)
            printf("E vespera de natal!\n");
        else if(359-(qtd_meses_anteriores(mes)+dia)<0)
            printf("Ja passou!\n");
        else if(mes>10)
            printf("Faltam %d dias para o natal!\n", 359-(qtd_meses_anteriores(mes)+dia));
        else
            printf("Faltam %d dias para o natal!\n", 360-(qtd_meses_anteriores(mes)+dia));
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
