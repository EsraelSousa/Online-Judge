<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct dig{
    int digit;
    int qtd;
 };

 int ordena(dig a, dig b){
    if(a.qtd == b.qtd){
        return a.digit > b.digit;
    }
    else
        return a.qtd > b.qtd;
 }
 int main(){
     dig digitos[10];
     char num[1005];
    while(scanf("%s", num) != EOF){
        for(int i=0; i<10; i++)
            digitos[i].digit=i, digitos[i].qtd=0;
        for(int i=0; i<strlen(num); i++)
            digitos[num[i]-'0'].qtd++;
        qsort(digitos, 10, sizeof(digitos[0]), ordena);
        printf("%d\n", digitos[0].digit);
    }
    return 0;
 }
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct dig{
    int digit;
    int qtd;
 };

 int ordena(dig a, dig b){
    if(a.qtd == b.qtd){
        return a.digit > b.digit;
    }
    else
        return a.qtd > b.qtd;
 }
 int main(){
     dig digitos[10];
     char num[1005];
    while(scanf("%s", num) != EOF){
        for(int i=0; i<10; i++)
            digitos[i].digit=i, digitos[i].qtd=0;
        for(int i=0; i<strlen(num); i++)
            digitos[num[i]-'0'].qtd++;
        qsort(digitos, 10, sizeof(digitos[0]), ordena);
        printf("%d\n", digitos[0].digit);
    }
    return 0;
 }
>>>>>>> refs/remotes/origin/master
