<<<<<<< HEAD
#include <stdio.h>

int main(){
    int num1, num2, cont=0, i;
    int soma[15];
    do{
        scanf("%d %d", &num1, &num2);
        if(num1!=0 && num2!=0){
            num1=num1+num2;
            while(num1>0){
                if(num1%10 != 0){
                    soma[cont]=num1%10;
                    cont++;
                }
                num1=num1/10;
            }
            for(i=cont-1;i>=0;i--)
                printf("%d", soma[i]);
            printf("\n");
            num1=1;
            cont=0;
        }
    }while(num1!=0 && num2!=0);
    return 0;
}
=======
#include <stdio.h>

int main(){
    int num1, num2, cont=0, i;
    int soma[15];
    do{
        scanf("%d %d", &num1, &num2);
        if(num1!=0 && num2!=0){
            num1=num1+num2;
            while(num1>0){
                if(num1%10 != 0){
                    soma[cont]=num1%10;
                    cont++;
                }
                num1=num1/10;
            }
            for(i=cont-1;i>=0;i--)
                printf("%d", soma[i]);
            printf("\n");
            num1=1;
            cont=0;
        }
    }while(num1!=0 && num2!=0);
    return 0;
}
>>>>>>> refs/remotes/origin/master
