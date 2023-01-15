<<<<<<< HEAD
#include <stdio.h>

int main(){
    int grau_inclinacao;
    while(scanf("%d", &grau_inclinacao) != EOF){
    	if((grau_inclinacao>=0 && grau_inclinacao<90) || grau_inclinacao==360)
    		printf("Bom Dia!!\n");
    	else if(grau_inclinacao>=90 && grau_inclinacao<180)
    		printf("Boa Tarde!!\n");
    	else if(grau_inclinacao>=180 && grau_inclinacao<270)
    		printf("Boa Noite!!\n");
    	else
    		printf("De Madrugada!!\n");
    }
    return 0;
}
=======
#include <stdio.h>

int main(){
    int grau_inclinacao;
    while(scanf("%d", &grau_inclinacao) != EOF){
    	if((grau_inclinacao>=0 && grau_inclinacao<90) || grau_inclinacao==360)
    		printf("Bom Dia!!\n");
    	else if(grau_inclinacao>=90 && grau_inclinacao<180)
    		printf("Boa Tarde!!\n");
    	else if(grau_inclinacao>=180 && grau_inclinacao<270)
    		printf("Boa Noite!!\n");
    	else
    		printf("De Madrugada!!\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
