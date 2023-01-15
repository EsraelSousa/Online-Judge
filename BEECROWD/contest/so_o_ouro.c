#include <stdio.h>
#include <math.h>

int main(){
    int n=1, b, c;
    int delta;
    double r1, r2;
    while(n != -1){
        scanf("%d", &n);
        if(n != -1){
            b=n%257, c=n%193;
            delta=b*b-4*1*c;
            if(delta<0)
                printf("So o ouro\n");
            else if(delta==0){
                r1=(-1*b)/2;
                if(r1==0)
                    printf("Bom\n");
                else if(r1 < 0)
                	printf("So o ouro\n");
                else
                    printf("Regular\n");
            }
            else{
                r1=((-1*b)+sqrt(delta))/2;
                r2=((-1*b)-sqrt(delta))/2;
                if(r1 > 0 || r2 >0)
                	printf("Regular\n");
                else if(r1 <0 && r2 < 0)
                	printf("So o ouro\n");
                else
                	printf("Bom\n");
            }
        }
    }
    return 0;
}

