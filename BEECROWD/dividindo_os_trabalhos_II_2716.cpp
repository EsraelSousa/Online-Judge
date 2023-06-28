#include <stdio.h>
#include <string.h>

int modulo(int x){
    return (x<0)? -x : x;
}

int min(int a, int b){
    return (a<b)? a : b;
}

int sum, mem[155][100000];
int n, w[155];

int dp(int i, int d){
    if(i==n) return modulo(d - (sum - d));
    if(mem[i][d] != -1) return mem[i][d];
    int op1, op2;
    op1 = dp(i+1, d);
    op2 = dp(i+1, d+w[i]);
    
    return mem[i][d] = min(op1, op2);
    
}

int main(){
    while(scanf("%d", &n) != EOF){
        sum = 0;
        for(int i=0; i<n; i++){
            scanf("%d", &w[i]);
            sum += w[i];
        }
        memset(mem, -1, sizeof(mem));
        printf("%d\n", dp(0, 0));
    }
    return 0;
}
