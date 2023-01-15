<<<<<<< HEAD
#include <cstdio>
#include <cstring>

int main(){
    int qtd_teste=1, ano, tempo, res;
    char pla[70]="NENHUM", respo[70]="HGFSF";
    while(qtd_teste !=0 ){
        scanf("%d%*c", &qtd_teste);
        if(qtd_teste != 0){
            res=10000;
            for(int i=0; i<qtd_teste; i++){
                scanf("%s %d %d", pla, &ano, &tempo);
                if(ano-tempo < res){
                    res=ano-tempo;
                    strcpy(respo, pla);
                }
            }
            printf("%s\n", respo);
        }
    }
    return 0;
}
=======
#include <cstdio>
#include <cstring>

int main(){
    int qtd_teste=1, ano, tempo, res;
    char pla[70]="NENHUM", respo[70]="HGFSF";
    while(qtd_teste !=0 ){
        scanf("%d%*c", &qtd_teste);
        if(qtd_teste != 0){
            res=10000;
            for(int i=0; i<qtd_teste; i++){
                scanf("%s %d %d", pla, &ano, &tempo);
                if(ano-tempo < res){
                    res=ano-tempo;
                    strcpy(respo, pla);
                }
            }
            printf("%s\n", respo);
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
