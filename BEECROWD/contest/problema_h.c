#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a<b && a<c){
		printf("1\n");
		if(b<c)
			printf("2\n3\n");
		else
			printf("3\n2\n");
	}else if(b<a && b<c){
		printf("2\n");
		if(a<c)
			printf("1\n3\n");
		else
			printf("3\n1\n");
	}else{
		printf("3\n");
		if(a<b)
			printf("1\n2\n");
		else
			printf("2\n1\n");
	}
	return 0;
}
