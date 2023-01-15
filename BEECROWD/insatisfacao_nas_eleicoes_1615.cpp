<<<<<<< HEAD
#include <cstdio>
#include <cstring>

int main(){
    int qtd_teste, qtd_cand, qtd_hab, qtd_max_voto, id_cand, voto_cand;
    int cand[11];
    scanf("%d", &qtd_teste);
    for(int i=0; i<qtd_teste; i++){
        scanf("%d %d", &qtd_cand, &qtd_hab);
        memset(cand, 0, sizeof(cand));
        qtd_max_voto=0;
        for(int j=0; j<qtd_hab; j++){
            scanf("%d", &voto_cand);
            cand[voto_cand-1]++;
            if(cand[voto_cand-1] > qtd_max_voto){
                id_cand=voto_cand;
                qtd_max_voto=cand[voto_cand-1];
            }
        }
        if(qtd_max_voto > qtd_hab/2)
            printf("%d\n", id_cand);
        else
            printf("-1\n");
    }
    return 0;
}
=======
#include <cstdio>
#include <cstring>

int main(){
    int qtd_teste, qtd_cand, qtd_hab, qtd_max_voto, id_cand, voto_cand;
    int cand[11];
    scanf("%d", &qtd_teste);
    for(int i=0; i<qtd_teste; i++){
        scanf("%d %d", &qtd_cand, &qtd_hab);
        memset(cand, 0, sizeof(cand));
        qtd_max_voto=0;
        for(int j=0; j<qtd_hab; j++){
            scanf("%d", &voto_cand);
            cand[voto_cand-1]++;
            if(cand[voto_cand-1] > qtd_max_voto){
                id_cand=voto_cand;
                qtd_max_voto=cand[voto_cand-1];
            }
        }
        if(qtd_max_voto > qtd_hab/2)
            printf("%d\n", id_cand);
        else
            printf("-1\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
