<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_gamer, id, cont_id, publica, universi, i;
    while(scanf("%d %d", &qtd_gamer, &id) != EOF){
        cont_id=0;
        for(i=0;i<qtd_gamer;i++){
            scanf("%d %d", &publica, &universi);
            if(publica==id && universi==0)
                cont_id++;
        }
        printf("%d\n", cont_id);
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int qtd_gamer, id, cont_id, publica, universi, i;
    while(scanf("%d %d", &qtd_gamer, &id) != EOF){
        cont_id=0;
        for(i=0;i<qtd_gamer;i++){
            scanf("%d %d", &publica, &universi);
            if(publica==id && universi==0)
                cont_id++;
        }
        printf("%d\n", cont_id);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
