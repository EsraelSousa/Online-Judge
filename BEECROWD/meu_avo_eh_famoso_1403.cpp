<<<<<<< HEAD
#include <bits/stdc++.h>

struct compet{
    int id;
    int qtd_ap;
};

bool compara(compet a, compet b){
    if(a.qtd_ap == b.qtd_ap)
        return a.id < b.id;
    else
        return a.qtd_ap > b.qtd_ap;
}

int main(){
    int qtd_compe=1, qtd_ranks=1, id, flag;
    compet competidor[1005];
    while(qtd_compe != 0 && qtd_ranks != 0){
        scanf("%d %d", &qtd_ranks, &qtd_compe);
        if(qtd_compe != 0 && qtd_ranks != 0){
            for(int i=0; i<=1000; i++){
                competidor[i].id = i;
                competidor[i].qtd_ap = 0;
            }
            for(int i=0; i<qtd_ranks; i++){
                for(int j=0; j<qtd_compe; j++){
                    scanf("%d", &id);
                    competidor[id].qtd_ap++;
                }
            }
            sort(competidor, competidor+qtd_compe, compara);
            flag = 0;
            for(int i=1; i<qtd_compe; i++){
                if(competidor[i].qtd_ap == competidor[1].qtd_ap && flag == 0){
                    printf("%d", competidor[i].id);
                    flag =1;
                }
                else if(competidor[i].qtd_ap == competidor[1].qtd_ap && flag == 1){
                    printf(" %d", competidor[i].id);
                }
                else
                    break;
            }
            printf("\n");
        }
    }
    return 0;
}
=======
#include <bits/stdc++.h>

struct compet{
    int id;
    int qtd_ap;
};

bool compara(compet a, compet b){
    if(a.qtd_ap == b.qtd_ap)
        return a.id < b.id;
    else
        return a.qtd_ap > b.qtd_ap;
}

int main(){
    int qtd_compe=1, qtd_ranks=1, id, flag;
    compet competidor[1005];
    while(qtd_compe != 0 && qtd_ranks != 0){
        scanf("%d %d", &qtd_ranks, &qtd_compe);
        if(qtd_compe != 0 && qtd_ranks != 0){
            for(int i=0; i<=1000; i++){
                competidor[i].id = i;
                competidor[i].qtd_ap = 0;
            }
            for(int i=0; i<qtd_ranks; i++){
                for(int j=0; j<qtd_compe; j++){
                    scanf("%d", &id);
                    competidor[id].qtd_ap++;
                }
            }
            sort(competidor, competidor+qtd_compe, compara);
            flag = 0;
            for(int i=1; i<qtd_compe; i++){
                if(competidor[i].qtd_ap == competidor[1].qtd_ap && flag == 0){
                    printf("%d", competidor[i].id);
                    flag =1;
                }
                else if(competidor[i].qtd_ap == competidor[1].qtd_ap && flag == 1){
                    printf(" %d", competidor[i].id);
                }
                else
                    break;
            }
            printf("\n");
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
