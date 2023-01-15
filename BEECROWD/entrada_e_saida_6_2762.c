<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int aux1=0, aux2=0;
    int i,j=0, cont=0, pp, tam;
    char num[20], aux3[20];

    scanf("%s", num);
    tam=strlen(num);
    for(i=0;i<tam;i++){
        if(cont==1){
            aux3[j]=num[i];
            j++;
        }
        if(num[i]=='.'){
            cont=1;
            pp=i;
        }
    }
    aux3[j]='\0';
    num[pp]='\0';
    //printf("%s\n%s\n", num, aux3);
    aux1= atoi(num);
    aux2 = atoi(aux3);
    printf("%.0lf.%.0lf\n", (double)aux2, (double)aux1 );
    return 0;
}
=======
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int aux1=0, aux2=0;
    int i,j=0, cont=0, pp, tam;
    char num[20], aux3[20];

    scanf("%s", num);
    tam=strlen(num);
    for(i=0;i<tam;i++){
        if(cont==1){
            aux3[j]=num[i];
            j++;
        }
        if(num[i]=='.'){
            cont=1;
            pp=i;
        }
    }
    aux3[j]='\0';
    num[pp]='\0';
    //printf("%s\n%s\n", num, aux3);
    aux1= atoi(num);
    aux2 = atoi(aux3);
    printf("%.0lf.%.0lf\n", (double)aux2, (double)aux1 );
    return 0;
}
>>>>>>> refs/remotes/origin/master
