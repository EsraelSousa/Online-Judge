<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	int n, k, x,y, aux, aux1, corre=0, i, j;
	while(scanf("%d %d", &n, &k) != EOF){
		x=n/2, y=n/2;
		if(k==1)
			printf("%d %d\n", n/2, n/2);
		else if(n*n==k)
			printf("%d %d\n", 0, y+n/2);
		else{
            aux=n*n;
            while(corre==0){
                n--;
                for(i=n;i>=0 && corre==0;i--){
                    aux--;
                    if(aux==k)
                        corre=1;
                }
                printf("aux %d\n", aux);
            }
		}
	}
    return 0;
}
=======
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	int n, k, x,y, aux, aux1, corre=0, i, j;
	while(scanf("%d %d", &n, &k) != EOF){
		x=n/2, y=n/2;
		if(k==1)
			printf("%d %d\n", n/2, n/2);
		else if(n*n==k)
			printf("%d %d\n", 0, y+n/2);
		else{
            aux=n*n;
            while(corre==0){
                n--;
                for(i=n;i>=0 && corre==0;i--){
                    aux--;
                    if(aux==k)
                        corre=1;
                }
                printf("aux %d\n", aux);
            }
		}
	}
    return 0;
}
>>>>>>> refs/remotes/origin/master
