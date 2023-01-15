<<<<<<< HEAD
#include <stdio.h>

int nume(char le){
    if(le=='0')
        return 0;
    if(le=='1')
        return 1;
    if(le=='2')
        return 2;
    if(le=='3')
        return 3;
    if(le=='4')
        return 4;
    if(le=='5')
        return 5;
    if(le=='6')
        return 6;
    if(le=='7')
        return 7;
    if(le=='8')
        return 8;
    if(le=='9')
        return 9;
}

int main(){
    int num1=0, qtd_teste, i;
    char ex[15];
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
    	scanf("%s", ex);
    	num1+=nume(ex[5])*100;
    	num1+=nume(ex[6])*10;
    	num1+=nume(ex[7]);
    	num1+=nume(ex[2])*10;
    	num1+=nume(ex[3]);
    	num1+=nume(ex[11])*10;
    	num1+=nume(ex[12]);
    	printf("%d\n", num1);
    	num1=0;
    }
    return 0;
}
=======
#include <stdio.h>

int nume(char le){
    if(le=='0')
        return 0;
    if(le=='1')
        return 1;
    if(le=='2')
        return 2;
    if(le=='3')
        return 3;
    if(le=='4')
        return 4;
    if(le=='5')
        return 5;
    if(le=='6')
        return 6;
    if(le=='7')
        return 7;
    if(le=='8')
        return 8;
    if(le=='9')
        return 9;
}

int main(){
    int num1=0, qtd_teste, i;
    char ex[15];
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
    	scanf("%s", ex);
    	num1+=nume(ex[5])*100;
    	num1+=nume(ex[6])*10;
    	num1+=nume(ex[7]);
    	num1+=nume(ex[2])*10;
    	num1+=nume(ex[3]);
    	num1+=nume(ex[11])*10;
    	num1+=nume(ex[12]);
    	printf("%d\n", num1);
    	num1=0;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
