<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[23], palavra2[23], c1, c2;
    int tam1, tam2, i;
    scanf("%s %s", palavra1, palavra2);
    tam1=strlen(palavra1);
    tam2=strlen(palavra2);
    char aux1[tam1], aux2[tam2];
    for(i=0;i<tam1;i++){
    	aux1[i]=palavra2[0];
    	aux2[i]=palavra1[0];
    }
    if(strcmp(palavra1, aux1)==0 || strcmp(palavra2, aux2)==0){
    	if(tam1 <= tam2)
    		printf("%s\n%s\n", palavra1, palavra2);
    	else
    		printf("%s\n%s\n", palavra2, palavra1);
    }
    c1=palavra1[0];
    c2=palavra2[0];
    if(strcmp(palavra1, palavra2)==-1)
    	printf("%s\n%s\n", palavra1, palavra2);
    else if(strcmp(palavra1, palavra2)==1)
    	printf("%s\n%s\n", palavra2, palavra1);
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[23], palavra2[23], c1, c2;
    int tam1, tam2, i;
    scanf("%s %s", palavra1, palavra2);
    tam1=strlen(palavra1);
    tam2=strlen(palavra2);
    char aux1[tam1], aux2[tam2];
    for(i=0;i<tam1;i++){
    	aux1[i]=palavra2[0];
    	aux2[i]=palavra1[0];
    }
    if(strcmp(palavra1, aux1)==0 || strcmp(palavra2, aux2)==0){
    	if(tam1 <= tam2)
    		printf("%s\n%s\n", palavra1, palavra2);
    	else
    		printf("%s\n%s\n", palavra2, palavra1);
    }
    c1=palavra1[0];
    c2=palavra2[0];
    if(strcmp(palavra1, palavra2)==-1)
    	printf("%s\n%s\n", palavra1, palavra2);
    else if(strcmp(palavra1, palavra2)==1)
    	printf("%s\n%s\n", palavra2, palavra1);
    return 0;
}
>>>>>>> refs/remotes/origin/master
