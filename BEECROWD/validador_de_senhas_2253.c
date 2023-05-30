#include <stdio.h>
#include <string.h>

int main(){
	int maiscula=0, minuscula=0, numero=0, diferente=0, tam, i;
	char senha[1000];
	while(scanf("%[^\n]%*c", senha) != EOF){
		tam=strlen(senha);
		for(i=0;i<tam;i++){
			if(senha[i]>=65 && senha[i]<=90)
				maiscula++;
			else if(senha[i]>=97 && senha[i]<=122)
				minuscula++;
			else if(senha[i]>=48 && senha[i]<=57)
				numero++;
			else
				diferente++;
		}
		if(tam==maiscula+minuscula+numero && maiscula>0 && minuscula>0 && numero>0 && tam>5 && tam<=32 && diferente==0)
			printf("Senha valida.\n");
		else
			printf("Senha invalida.\n");
		maiscula=0, minuscula=0, numero=0, diferente=0;
	}
	return 0;
}
