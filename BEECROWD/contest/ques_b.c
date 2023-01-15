#include <stdio.h>
#include <string.h>

int main(){
    int tam, i, corr=1;
    char num[100000], aux;
    scanf("%s", num);
    tam=strlen(num);
    while(corr!=0){
    corr=0;
    for(i=0;i<tam;i++){
        if((num[i]=='7' && num[i+1]=='5') || (num[i]=='5' && num[i+1]=='3') && i<tam-1){
            aux=num[i];
            num[i]=num[i+1];
            num[i+1]=aux;
        }
        if((num[i]=='5' && num[i-1]=='7') || (num[i]=='3' && num[i-1]=='5') && i>0){
            aux=num[i];
            num[i]=num[i-1];
            num[i-1]=aux;
        }
        if(num[i]=='3' && num[i+1]=='5' && num[i-1]=='7' && i>0 && i<tam-1){
            aux=num[i];
            num[i]=num[i+1];
            num[i+1]=aux;
            aux=num[i];
            num[i]=num[i-1];
            num[i-1]=aux;
        }
        if(num[i]=='3' && num[i-1]=='7' && num[i+1]=='5' && i>0 && i<tam-1)
            corr=1;
        if(num[i]=='7' && num[i-1]=='5' && num[i+1]=='3' && i>0 && i<tam-1)
            corr=1;
    }
    }

    printf("%s\n", num);
    return 0;
}
