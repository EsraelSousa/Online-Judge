<<<<<<< HEAD
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int F, L, tam;
	char matring[4][82];
	for(int i=0; i<4; i++){
			scanf("%s", &matring[i]);
	}
	tam=strlen(matring[0]);
	F=(matring[0][0]-48)*1000+(matring[1][0]-48)*100+(matring[2][0]-48)*10+(matring[3][0]-48);
	L=(matring[0][tam-1]-48)*1000+(matring[1][tam-1]-48)*100+(matring[2][tam-1]-48)*10+(matring[3][tam-1]-48);
	for(int i=1; i<tam-1; i++){
		printf("%c", (F*((matring[0][i]-48)*1000+(matring[1][i]-48)*100+(matring[2][i]-48)*10+(matring[3][i]-48))+L)%257);
	}
	printf("\n");
	return 0;
}
=======
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int F, L, tam;
	char matring[4][82];
	for(int i=0; i<4; i++){
			scanf("%s", &matring[i]);
	}
	tam=strlen(matring[0]);
	F=(matring[0][0]-48)*1000+(matring[1][0]-48)*100+(matring[2][0]-48)*10+(matring[3][0]-48);
	L=(matring[0][tam-1]-48)*1000+(matring[1][tam-1]-48)*100+(matring[2][tam-1]-48)*10+(matring[3][tam-1]-48);
	for(int i=1; i<tam-1; i++){
		printf("%c", (F*((matring[0][i]-48)*1000+(matring[1][i]-48)*100+(matring[2][i]-48)*10+(matring[3][i]-48))+L)%257);
	}
	printf("\n");
	return 0;
}
>>>>>>> refs/remotes/origin/master
