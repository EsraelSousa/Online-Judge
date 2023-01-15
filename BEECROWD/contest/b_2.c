#include <stdio.h>
#include <stdlib.h>

int ordena(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int main(){
	int n, i;
	int caro[10000], barato[10000];
	int fin[10000];
	do{
		scanf("%d", &n);
		if(n!=0){
			for(i=0;i<n;i++)
				scanf("%d", &caro[i]);
			for(i=0;i<n;i++)
				scanf("%d", &barato[i]);
			for(i=0;i<n;i++){
                fin[i]=caro[i]+barato[n-1-i];
			}
			qsort(fin, n, sizeof(int), ordena);
			printf("%d %d\n", fin[0], fin[n-1]);
		}
	}while(n !=0);
	return 0;
}

