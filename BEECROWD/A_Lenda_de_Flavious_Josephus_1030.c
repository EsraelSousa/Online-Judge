#include <stdio.h>

int josephus(int n, int k){
    if(n==1)
        return 1;
    else
        return (josephus(n-1, k)+ (k-1))%n+1;
}

int main(){
    int qtd_teste, qtd_pessoas, k, i;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d %d", &qtd_pessoas, &k);
        printf("Case %d: %d\n", i+1,josephus(qtd_pessoas, k));
    }
    return 0;
}