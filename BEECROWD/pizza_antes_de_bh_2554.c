<<<<<<< HEAD
#include <stdio.h>

int main(){
    int qtd_pessoa, qtd_data, i, j, disponivel, dia, mes, ano, dia_marcado, mes_marcado, ano_marcado, corr;
    while(scanf("%d %d", &qtd_pessoa, &qtd_data) != EOF){
        dia_marcado=0, mes_marcado=0, ano_marcado=0;
        for(i=0;i<qtd_data;i++){
            corr=0;
            scanf("%d %*c %d %*c %d", &dia, &mes, &ano);
            for(j=0;j<qtd_pessoa;j++){
                scanf("%d", &disponivel);
                if(disponivel==0)
                    corr=1;
            }
            if(corr==0 && dia_marcado==0 && mes_marcado==0 && ano_marcado==0)
                dia_marcado=dia, mes_marcado=mes, ano_marcado=ano;
        }
        if(dia_marcado!=0 && mes_marcado!=0 && ano_marcado!=0)
            printf("%d/%d/%d\n", dia_marcado, mes_marcado, ano_marcado);
        else
            printf("Pizza antes de FdI\n");
    }
    return 0;
}

=======
#include <stdio.h>

int main(){
    int qtd_pessoa, qtd_data, i, j, disponivel, dia, mes, ano, dia_marcado, mes_marcado, ano_marcado, corr;
    while(scanf("%d %d", &qtd_pessoa, &qtd_data) != EOF){
        dia_marcado=0, mes_marcado=0, ano_marcado=0;
        for(i=0;i<qtd_data;i++){
            corr=0;
            scanf("%d %*c %d %*c %d", &dia, &mes, &ano);
            for(j=0;j<qtd_pessoa;j++){
                scanf("%d", &disponivel);
                if(disponivel==0)
                    corr=1;
            }
            if(corr==0 && dia_marcado==0 && mes_marcado==0 && ano_marcado==0)
                dia_marcado=dia, mes_marcado=mes, ano_marcado=ano;
        }
        if(dia_marcado!=0 && mes_marcado!=0 && ano_marcado!=0)
            printf("%d/%d/%d\n", dia_marcado, mes_marcado, ano_marcado);
        else
            printf("Pizza antes de FdI\n");
    }
    return 0;
}

>>>>>>> refs/remotes/origin/master
