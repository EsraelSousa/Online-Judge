<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char num[10000000];
    int den, res=0, i;
    if(num == NULL)
        printf("0\n");
    else{
        scanf("%s %d", num, &den);
        for(i=0; i<strlen(num); i++)
            res= (res*10+(num[i]-'0'))%den;
        printf("%d\n", res);
    }
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char num[10000000];
    int den, res=0, i;
    if(num == NULL)
        printf("0\n");
    else{
        scanf("%s %d", num, &den);
        for(i=0; i<strlen(num); i++)
            res= (res*10+(num[i]-'0'))%den;
        printf("%d\n", res);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
