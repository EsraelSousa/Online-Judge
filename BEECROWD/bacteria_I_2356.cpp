<<<<<<< HEAD
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int conta_substr(char *d1, char *d2){
	int qtd=0;
	int i, j, aux, cont;
	if(strlen(d2)==1){
		for(i=0; i<strlen(d1);i++){
			if(d2[0]==d1[i]){
				qtd++;
			}
		}
	}else{
		for(i=0; i<strlen(d1);i++){
			if(d1[i]==d2[0]){
				cont=1;
				aux=i;
				j=1;
				while(d2[j]==d1[j+aux] && i+j<strlen(d1) && j<strlen(d2)){
                    cont++;
                    j++;
				}
				if(cont==strlen(d2)){
                    qtd++;
				}

			}
			if(qtd>0)
                break;
		}
	}
	return qtd;
}

int main(){
	char dna1[110], dna2[110];
	int qtd_subsec;
	while(scanf("%s %s%*c", &dna1, &dna2) == 2){
		qtd_subsec=0;
		qtd_subsec=conta_substr(dna1, dna2);
		if(qtd_subsec != 0){
            printf("Resistente\n");
		}else
            printf("Nao resistente\n");
	}
    return 0;
}

=======
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int conta_substr(char *d1, char *d2){
	int qtd=0;
	int i, j, aux, cont;
	if(strlen(d2)==1){
		for(i=0; i<strlen(d1);i++){
			if(d2[0]==d1[i]){
				qtd++;
			}
		}
	}else{
		for(i=0; i<strlen(d1);i++){
			if(d1[i]==d2[0]){
				cont=1;
				aux=i;
				j=1;
				while(d2[j]==d1[j+aux] && i+j<strlen(d1) && j<strlen(d2)){
                    cont++;
                    j++;
				}
				if(cont==strlen(d2)){
                    qtd++;
				}

			}
			if(qtd>0)
                break;
		}
	}
	return qtd;
}

int main(){
	char dna1[110], dna2[110];
	int qtd_subsec;
	while(scanf("%s %s%*c", &dna1, &dna2) == 2){
		qtd_subsec=0;
		qtd_subsec=conta_substr(dna1, dna2);
		if(qtd_subsec != 0){
            printf("Resistente\n");
		}else
            printf("Nao resistente\n");
	}
    return 0;
}

>>>>>>> refs/remotes/origin/master
