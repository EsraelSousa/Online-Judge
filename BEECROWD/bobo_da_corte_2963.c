<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_pessoas, votos_carlos, outro_candidato, max_voto, i;
    scanf("%d", &qtd_pessoas);
    for(i=0;i<qtd_pessoas;i++){
        if(i==0)
            scanf("%d", &votos_carlos);
        else{
            scanf("%d", &outro_candidato);
            if(outro_candidato > max_voto)
                max_voto=outro_candidato;
        }
    }
    if(votos_carlos>=max_voto)
        printf("S");
    else
        printf("N");
    printf("\n");
    return 0;

}
=======
#include <stdio.h>

int main(){
    int qtd_pessoas, votos_carlos, outro_candidato, max_voto, i;
    scanf("%d", &qtd_pessoas);
    for(i=0;i<qtd_pessoas;i++){
        if(i==0)
            scanf("%d", &votos_carlos);
        else{
            scanf("%d", &outro_candidato);
            if(outro_candidato > max_voto)
                max_voto=outro_candidato;
        }
    }
    if(votos_carlos>=max_voto)
        printf("S");
    else
        printf("N");
    printf("\n");
    return 0;

}
>>>>>>> refs/remotes/origin/master
