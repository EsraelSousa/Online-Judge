<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <locale.h>

int escolha_jogador(char *opcao);
void exibe_resultado(int jogador1, int jogador2, int jogador3);

int main(){
    setlocale(LC_ALL, "portuguese");
	char jogador1[10], jogador2[10], jogador3[10];
	int escolha_j1, escolha_j2, escolha_j3;
	while(scanf("%s %s %s", jogador1, jogador2, jogador3) != EOF){
		escolha_j1=escolha_jogador(jogador1);
		escolha_j2=escolha_jogador(jogador2);
		escolha_j3=escolha_jogador(jogador3);
		exibe_resultado(escolha_j1, escolha_j2, escolha_j3);
	}
	return 0;
}

int escolha_jogador(char *opcao){
	if(strcmp(opcao, "papel")==0)
		return 1;
	else if(strcmp(opcao, "pedra")==0)
		return 2;
	else if(strcmp(opcao, "tesoura")==0)
		return 3;
	else
		return -1;
}

void exibe_resultado(int jogador1, int jogador2, int jogador3){
	// As chances de empate
	if(jogador1==jogador2 && jogador2==jogador3)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==1 && jogador2==2 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==2 && jogador2==1 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==1 && jogador2==1 && jogador3==2)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==1 && jogador2==2 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==1 && jogador2==2 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==2 && jogador2==2 && jogador3==3)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==2 && jogador2==3 && jogador3==2)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==3 && jogador2==2 && jogador3==2)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==3 && jogador2==3 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==3 && jogador2==1 && jogador3==3)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==1 && jogador2==3 && jogador3==3)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    else if(jogador1==1 && jogador2==2 && jogador3==3)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    else if(jogador1==1 && jogador2==3 && jogador3==2)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    else if(jogador1==3 && jogador2==1 && jogador3==2)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    else if(jogador1==3 && jogador2==2 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    else if(jogador1==2 && jogador2==3 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    else if(jogador1==2 && jogador2==1 && jogador3==3)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	// As chance do jogador 1 ganhar
	else if(jogador1==1 && jogador2==2 && jogador3==2)
		printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
	else if(jogador1==2 && jogador2==3 && jogador3==3)
		printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
	else if(jogador1==3 && jogador2==1 && jogador3==1)
		printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
	// As chances do jogador 2 ganhar
	else if(jogador1==2 && jogador2==1 && jogador3==2)
		printf("Iron Maiden's gonna get you, no matter how far!\n");
	else if(jogador1==3 && jogador2==2 && jogador3==3)
		printf("Iron Maiden's gonna get you, no matter how far!\n");
	else if(jogador1==1 && jogador2==3 && jogador3==1)
		printf("Iron Maiden's gonna get you, no matter how far!\n");
	// As chances do jogador 3 ganhar
	else if(jogador1==2 && jogador2==2 && jogador3==1)
		printf("Urano perdeu algo muito precioso...\n");
	else if(jogador1==3 && jogador2==3 && jogador3==2)
		printf("Urano perdeu algo muito precioso...\n");
	else if(jogador1==1 && jogador2==1 && jogador3==3)
		printf("Urano perdeu algo muito precioso...\n");
	// situacao de erro imprevisto
	else
		printf("Erro inesperado\n");
}
=======
#include <stdio.h>
#include <string.h>
#include <locale.h>

int escolha_jogador(char *opcao);
void exibe_resultado(int jogador1, int jogador2, int jogador3);

int main(){
    setlocale(LC_ALL, "portuguese");
	char jogador1[10], jogador2[10], jogador3[10];
	int escolha_j1, escolha_j2, escolha_j3;
	while(scanf("%s %s %s", jogador1, jogador2, jogador3) != EOF){
		escolha_j1=escolha_jogador(jogador1);
		escolha_j2=escolha_jogador(jogador2);
		escolha_j3=escolha_jogador(jogador3);
		exibe_resultado(escolha_j1, escolha_j2, escolha_j3);
	}
	return 0;
}

int escolha_jogador(char *opcao){
	if(strcmp(opcao, "papel")==0)
		return 1;
	else if(strcmp(opcao, "pedra")==0)
		return 2;
	else if(strcmp(opcao, "tesoura")==0)
		return 3;
	else
		return -1;
}

void exibe_resultado(int jogador1, int jogador2, int jogador3){
	// As chances de empate
	if(jogador1==jogador2 && jogador2==jogador3)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==1 && jogador2==2 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==2 && jogador2==1 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==1 && jogador2==1 && jogador3==2)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==1 && jogador2==2 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==1 && jogador2==2 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==2 && jogador2==2 && jogador3==3)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==2 && jogador2==3 && jogador3==2)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==3 && jogador2==2 && jogador3==2)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==3 && jogador2==3 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==3 && jogador2==1 && jogador3==3)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	else if(jogador1==1 && jogador2==3 && jogador3==3)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    else if(jogador1==1 && jogador2==2 && jogador3==3)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    else if(jogador1==1 && jogador2==3 && jogador3==2)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    else if(jogador1==3 && jogador2==1 && jogador3==2)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    else if(jogador1==3 && jogador2==2 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    else if(jogador1==2 && jogador2==3 && jogador3==1)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    else if(jogador1==2 && jogador2==1 && jogador3==3)
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	// As chance do jogador 1 ganhar
	else if(jogador1==1 && jogador2==2 && jogador3==2)
		printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
	else if(jogador1==2 && jogador2==3 && jogador3==3)
		printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
	else if(jogador1==3 && jogador2==1 && jogador3==1)
		printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
	// As chances do jogador 2 ganhar
	else if(jogador1==2 && jogador2==1 && jogador3==2)
		printf("Iron Maiden's gonna get you, no matter how far!\n");
	else if(jogador1==3 && jogador2==2 && jogador3==3)
		printf("Iron Maiden's gonna get you, no matter how far!\n");
	else if(jogador1==1 && jogador2==3 && jogador3==1)
		printf("Iron Maiden's gonna get you, no matter how far!\n");
	// As chances do jogador 3 ganhar
	else if(jogador1==2 && jogador2==2 && jogador3==1)
		printf("Urano perdeu algo muito precioso...\n");
	else if(jogador1==3 && jogador2==3 && jogador3==2)
		printf("Urano perdeu algo muito precioso...\n");
	else if(jogador1==1 && jogador2==1 && jogador3==3)
		printf("Urano perdeu algo muito precioso...\n");
	// situacao de erro imprevisto
	else
		printf("Erro inesperado\n");
}
>>>>>>> refs/remotes/origin/master
