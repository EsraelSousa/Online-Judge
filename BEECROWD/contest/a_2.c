#include <stdio.h>

int main(){
	int h=0, m=0;
	while(scanf("%d %d", &h, &m) != EOF){
		//if(h<195)
          //  printf("%02d:", h/15);
        //else
            printf("%02d:", h/30);
		printf("%02d\n", m/6);
	}
	return 0;
}
