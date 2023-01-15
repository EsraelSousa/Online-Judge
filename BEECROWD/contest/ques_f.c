#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, i, j, cont[10], tam, mim=57;
    char num[100000];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%s", num);
        memset(cont, 0, sizeof(cont));
        mim=57;
        tam=strlen(num);
        for(j=0;j<tam;j++){
            cont[num[j]-48]++;
            if(num[j]<mim && num[j]>48)
                mim=num[j];
        }
        if(cont[0]==0){
            for(j=1;j<10;j++){
                while(cont[j]>0){
                    printf("%d", j);
                    cont[j]--;
                }
            }
            printf("\n");
        }else{
            printf("%c", mim);
            for(j=0;j<10;j++){
                if(j+48==mim)
                    cont[j]--;
                while(cont[j]>0){
                    printf("%d", j);
                    cont[j]--;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
