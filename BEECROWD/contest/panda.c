#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int n, k, x1=0,y1=0, x, y, crr=0, i, indi;
    double res;
    char ins[3];
    scanf("%d %d %d %d%*c", &n, &k, &x, &y);
    for(i=0;i<n;i++){
        scanf("%[^\n]%*c", &ins);
        if(strcmp(ins, "D")==0)
            x1++;
        else if(strcmp(ins, "E")==0)
            x1--;
        else if(strcmp(ins, "B")==0)
            y1--;
        else if(strcmp(ins, "B")==0)
            y1++;
        res=(x-x1)*(x-x1) + (y-y1)*(y-y1);
        res=sqrt(res);
        if(res > k && crr==0){
            indi=i;
            crr=1;
        }
    }
    if(crr==0)
        printf("Sucesso\n");
    else
        printf("Trap %d\n", indi+1);
    return 0;
}
