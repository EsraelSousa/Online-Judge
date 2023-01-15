<<<<<<< HEAD
#include <stdio.h>

int main(){
	int qtd_placa, comprimento, largura, x, y, i;
	while(scanf("%d %d %d", &comprimento, &largura, &qtd_placa) != EOF){
		for(i=0;i<qtd_placa;i++){
			scanf("%d %d", &x, &y);
			if((x<= comprimento && y<=largura) || (y<= comprimento && x<=largura))
				printf("Sim\n");
			else
				printf("Nao\n");
		}
	}
	return 0;
}
=======
#include <stdio.h>

int main(){
	int qtd_placa, comprimento, largura, x, y, i;
	while(scanf("%d %d %d", &comprimento, &largura, &qtd_placa) != EOF){
		for(i=0;i<qtd_placa;i++){
			scanf("%d %d", &x, &y);
			if((x<= comprimento && y<=largura) || (y<= comprimento && x<=largura))
				printf("Sim\n");
			else
				printf("Nao\n");
		}
	}
	return 0;
}
>>>>>>> refs/remotes/origin/master
