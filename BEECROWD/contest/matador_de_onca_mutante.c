#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int n, k, i, j, d1=1;
	scanf("%d %d", &n, &k);
	int vetor[n];
	for(i=0;i<n;i++)
        scanf("%d", &vetor[i]);
    for(i=2;i<=k/2;i++){
        for(j=1;j*i<=k/2;j++){

        }
    }
    for(i=0;i<n;i++)
        printf("%d ", vetor[i]);
	return 0;
}
