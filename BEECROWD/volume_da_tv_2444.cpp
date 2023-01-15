<<<<<<< HEAD
#include <cstdio>

int main(){
    short volume_inicial, qtd_mudanca, presiona, i;
    scanf("%hd %hd", &volume_inicial, &qtd_mudanca);
    for(i=0; i< qtd_mudanca; i++){
        scanf("%hd", &presiona);
        if(volume_inicial + presiona >100)
            volume_inicial=100;
        else if(volume_inicial + presiona < 0)
            volume_inicial=0;
        else
            volume_inicial+=presiona;
        //printf("%d ", volume_inicial);
    }
    printf("%hd\n", volume_inicial);
    return 0;
}
=======
#include <cstdio>

int main(){
    short volume_inicial, qtd_mudanca, presiona, i;
    scanf("%hd %hd", &volume_inicial, &qtd_mudanca);
    for(i=0; i< qtd_mudanca; i++){
        scanf("%hd", &presiona);
        if(volume_inicial + presiona >100)
            volume_inicial=100;
        else if(volume_inicial + presiona < 0)
            volume_inicial=0;
        else
            volume_inicial+=presiona;
        //printf("%d ", volume_inicial);
    }
    printf("%hd\n", volume_inicial);
    return 0;
}
>>>>>>> refs/remotes/origin/master
