<<<<<<< HEAD
#include <cstdio>

int main(){
    int qtd_banco=1, qtd_deben=1, devedor, credor, quantia, flag, i;
    int banco[22];
    while(qtd_banco!=0 && qtd_deben!=0){
        scanf("%d %d", &qtd_banco, &qtd_deben);
        if(qtd_banco!=0 && qtd_deben!=0){
            flag=0;
            for(i=0; i<qtd_banco; i++)
                scanf("%d", &banco[i]);
            for(i=0; i<qtd_deben; i++){
                scanf("%d %d %d", &devedor, &credor, &quantia);
                banco[devedor-1]-=quantia;
                banco[credor-1]+=quantia;
            }
            for(i=0; i<qtd_banco; i++){
                if(banco[i]<0)
                    flag=1;
            }
            if(flag==1)
                printf("N\n");
            else
                printf("S\n");
        }
    }
    return 0;
}
=======
#include <cstdio>

int main(){
    int qtd_banco=1, qtd_deben=1, devedor, credor, quantia, flag, i;
    int banco[22];
    while(qtd_banco!=0 && qtd_deben!=0){
        scanf("%d %d", &qtd_banco, &qtd_deben);
        if(qtd_banco!=0 && qtd_deben!=0){
            flag=0;
            for(i=0; i<qtd_banco; i++)
                scanf("%d", &banco[i]);
            for(i=0; i<qtd_deben; i++){
                scanf("%d %d %d", &devedor, &credor, &quantia);
                banco[devedor-1]-=quantia;
                banco[credor-1]+=quantia;
            }
            for(i=0; i<qtd_banco; i++){
                if(banco[i]<0)
                    flag=1;
            }
            if(flag==1)
                printf("N\n");
            else
                printf("S\n");
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
