<<<<<<< HEAD

#include <stdio.h>
#include <string.h>

int main(){
    int qtd_pes_subiu=0,qtd_pes_desceu=0,qtd_carro_subiu=0,qtd_carro_desceu=0, num;
    char comando[7];
    do{
        scanf("%s", &comando);
        if(strcmp(comando, "ABEND")!=0){
            scanf("%d", &num);
            if(strcmp(comando, "SALIDA")==0){
                qtd_pes_subiu+=num;
                qtd_carro_subiu++;
            }else{
                qtd_pes_desceu+=num;
                qtd_carro_desceu++;
            }
        }
    }while(strcmp(comando, "ABEND")!=0);
    printf("%d\n%d", qtd_pes_subiu-qtd_pes_desceu, qtd_carro_subiu-qtd_carro_desceu);
    printf("\n");
}
=======

#include <stdio.h>
#include <string.h>

int main(){
    int qtd_pes_subiu=0,qtd_pes_desceu=0,qtd_carro_subiu=0,qtd_carro_desceu=0, num;
    char comando[7];
    do{
        scanf("%s", &comando);
        if(strcmp(comando, "ABEND")!=0){
            scanf("%d", &num);
            if(strcmp(comando, "SALIDA")==0){
                qtd_pes_subiu+=num;
                qtd_carro_subiu++;
            }else{
                qtd_pes_desceu+=num;
                qtd_carro_desceu++;
            }
        }
    }while(strcmp(comando, "ABEND")!=0);
    printf("%d\n%d", qtd_pes_subiu-qtd_pes_desceu, qtd_carro_subiu-qtd_carro_desceu);
    printf("\n");
}
>>>>>>> refs/remotes/origin/master
