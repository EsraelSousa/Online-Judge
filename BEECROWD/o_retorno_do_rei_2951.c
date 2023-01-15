<<<<<<< HEAD
#include <stdio.h>

typedef struct runa Truna;
struct runa{
    char caractere;
    int valor;
};

int main(){
    int qtd_runa, forca_nece, qtd_runas_ditas, soma=0, i, j;
    scanf("%d %d%*c", &qtd_runa, &forca_nece);
    Truna runas[qtd_runa];
    for(i=0;i<qtd_runa;i++){
        scanf("%c %d%*c",  &runas[i].caractere, &runas[i].valor);
    }
    scanf("%d%*c", &qtd_runas_ditas);
    char falado[qtd_runas_ditas];
    for(i=0;i<qtd_runas_ditas;i++)
        scanf("%c%*c", &falado[i]);
    for(i=0;i<qtd_runas_ditas;i++){
        for(j=0;j<qtd_runa;j++){
            if(falado[i]==runas[j].caractere){
                soma+=runas[j].valor;
                //printf(" SOMA: %d VALOR CARA; %d\n", soma, valor_carac[j]);
                break;
            }
        }
    }
    printf("%d\n", soma);
    if(soma<forca_nece)
        printf("My precioooous\n");
    else
        printf("You shall pass!\n");
    return 0;
}
=======
#include <stdio.h>

typedef struct runa Truna;
struct runa{
    char caractere;
    int valor;
};

int main(){
    int qtd_runa, forca_nece, qtd_runas_ditas, soma=0, i, j;
    scanf("%d %d%*c", &qtd_runa, &forca_nece);
    Truna runas[qtd_runa];
    for(i=0;i<qtd_runa;i++){
        scanf("%c %d%*c",  &runas[i].caractere, &runas[i].valor);
    }
    scanf("%d%*c", &qtd_runas_ditas);
    char falado[qtd_runas_ditas];
    for(i=0;i<qtd_runas_ditas;i++)
        scanf("%c%*c", &falado[i]);
    for(i=0;i<qtd_runas_ditas;i++){
        for(j=0;j<qtd_runa;j++){
            if(falado[i]==runas[j].caractere){
                soma+=runas[j].valor;
                //printf(" SOMA: %d VALOR CARA; %d\n", soma, valor_carac[j]);
                break;
            }
        }
    }
    printf("%d\n", soma);
    if(soma<forca_nece)
        printf("My precioooous\n");
    else
        printf("You shall pass!\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
