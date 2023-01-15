<<<<<<< HEAD
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
    int pag_dia_ant=1, pag_dia_dep, difere_dia, total_pag;
    while(pag_dia_ant != 0){
        scanf("%d", &pag_dia_ant);
        if(pag_dia_ant != 0){
            scanf("%d %d",  &difere_dia, &pag_dia_dep);
            total_pag=(difere_dia*pag_dia_ant*pag_dia_dep)/(pag_dia_dep-pag_dia_ant);
            if(total_pag==1)
                printf("%d pagina\n", total_pag);
            else
                printf("%d paginas\n", total_pag);
        }
    }
}
=======
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
    int pag_dia_ant=1, pag_dia_dep, difere_dia, total_pag;
    while(pag_dia_ant != 0){
        scanf("%d", &pag_dia_ant);
        if(pag_dia_ant != 0){
            scanf("%d %d",  &difere_dia, &pag_dia_dep);
            total_pag=(difere_dia*pag_dia_ant*pag_dia_dep)/(pag_dia_dep-pag_dia_ant);
            if(total_pag==1)
                printf("%d pagina\n", total_pag);
            else
                printf("%d paginas\n", total_pag);
        }
    }
}
>>>>>>> refs/remotes/origin/master
