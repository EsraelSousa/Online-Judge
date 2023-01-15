<<<<<<< HEAD
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

void conta_substr(char *num1, char *num2, int &qtd, int &ult){
	qtd=0, ult=-1;
	int i, j, aux, cont;
	if(strlen(num1)==1){
		for(i=0; i<strlen(num2);i++){
			if(num1[0]==num2[i]){
				qtd++;
				ult=i+1;
			}
		}
	}else{
		for(i=0; i<strlen(num2);i++){
			if(num2[i]==num1[0]){
				cont=1;
				aux=i;
				j=1;
				while(num1[j]==num2[j+aux] && i+j<strlen(num2) && j<strlen(num1)){
                    cont++;
                    j++;
				}
				if(cont==strlen(num1)){
                    //i=j-1;
                    qtd++;
                    ult=i+1;
				}

			}
		}
	}
}

int main(){
	char valor1[11], valor2[35];
	int qtd_subsec, ultima_subsec, caso=1;
	while(scanf("%s %s%*c", &valor1, &valor2) == 2){
		conta_substr(valor1, valor2, qtd_subsec, ultima_subsec);
		printf("Caso #%d:\n", caso);
		caso++;
		if(qtd_subsec != 0){
            printf("Qtd.Subsequencias: %d\nPos: %d\n\n", qtd_subsec, ultima_subsec);
		}else
            printf("Nao existe subsequencia\n\n");
	}
    return 0;
}
=======
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

void conta_substr(char *num1, char *num2, int &qtd, int &ult){
	qtd=0, ult=-1;
	int i, j, aux, cont;
	if(strlen(num1)==1){
		for(i=0; i<strlen(num2);i++){
			if(num1[0]==num2[i]){
				qtd++;
				ult=i+1;
			}
		}
	}else{
		for(i=0; i<strlen(num2);i++){
			if(num2[i]==num1[0]){
				cont=1;
				aux=i;
				j=1;
				while(num1[j]==num2[j+aux] && i+j<strlen(num2) && j<strlen(num1)){
                    cont++;
                    j++;
				}
				if(cont==strlen(num1)){
                    //i=j-1;
                    qtd++;
                    ult=i+1;
				}

			}
		}
	}
}

int main(){
	char valor1[11], valor2[35];
	int qtd_subsec, ultima_subsec, caso=1;
	while(scanf("%s %s%*c", &valor1, &valor2) == 2){
		conta_substr(valor1, valor2, qtd_subsec, ultima_subsec);
		printf("Caso #%d:\n", caso);
		caso++;
		if(qtd_subsec != 0){
            printf("Qtd.Subsequencias: %d\nPos: %d\n\n", qtd_subsec, ultima_subsec);
		}else
            printf("Nao existe subsequencia\n\n");
	}
    return 0;
}
>>>>>>> refs/remotes/origin/master
