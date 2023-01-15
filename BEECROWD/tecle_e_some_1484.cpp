<<<<<<< HEAD
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

vector<int> teclado[11];
vector<vector<int>> possiveis[11];
long long int s, d;

void init(){
	teclado[0].push_back(7),teclado[0].push_back(8),teclado[0].push_back(9);
	teclado[1].push_back(2),teclado[1].push_back(4),teclado[1].push_back(5);
	teclado[2].push_back(1),teclado[2].push_back(3),teclado[2].push_back(4),teclado[2].push_back(5),teclado[2].push_back(6);
	teclado[3].push_back(2),teclado[3].push_back(5),teclado[3].push_back(6);
	teclado[4].push_back(1),teclado[4].push_back(2),teclado[4].push_back(5),teclado[4].push_back(7),teclado[4].push_back(8);
	teclado[5].push_back(1),teclado[5].push_back(2),teclado[5].push_back(3),teclado[5].push_back(4),teclado[5].push_back(6),teclado[5].push_back(7),teclado[5].push_back(8),teclado[5].push_back(9);
	teclado[6].push_back(2),teclado[6].push_back(3),teclado[6].push_back(5),teclado[6].push_back(8),teclado[6].push_back(9);
	teclado[7].push_back(0),teclado[7].push_back(4),teclado[7].push_back(5),teclado[7].push_back(8);
	teclado[8].push_back(0),teclado[8].push_back(4),teclado[8].push_back(5),teclado[8].push_back(6),teclado[8].push_back(7),teclado[8].push_back(9);
	teclado[9].push_back(0),teclado[9].push_back(5), teclado[9].push_back(6),teclado[9].push_back(8);
}

int vez = 0;
void dfs2(int u, vector<int> vis, vector<int> valor){
	vis[u] = 1;
	valor.push_back(u);
	int todos = 1;
	for(int i = 0; i < teclado[u].size(); i++){
		int v = teclado[u][i];
		if(!vis[v]){
			todos = 0;
			dfs2(v, vis, valor);
		}
	}
	if(todos){
		possiveis[vez].push_back(valor);
		return;
	}
}

void percorrer(){
	vector<int> vis(11, 0);
	vector<int> valor;
	for(int i = 0; i <= 9; i++){
		vez = i;
		dfs2(i, vis, valor);
	}
}

void verifica(){
	if(s==0){
		printf("0\n");
		return;
	}
	bool impossivel = true;
	for(int i = 0; i <= 9; i++){
		for(int j = 0; j < possiveis[i].size(); j++){
			long long int vT = 0, vA=0, p;
			long long int teste = 1;
			for(p = 0; p < possiveis[i][j].size(); p++){
				vA=(vA*10)+possiveis[i][j][p];
				if(teste==d){
					vT = vT+vA;
					vA = 0;
					teste=0;
				}
				teste++;
				if(vT>=s){
					p++;
					break;
				}
				if(vT+vA>=s){
					vT+=vA;
					p++;
					break;
				}
			}
			/*if(vT+vA==s){
				vT+=vA;
			}*/
			if(vT==s){
				impossivel = false;
				int espaco = 1;
				for(int t = 0; t < p; t++){
					printf("%d", possiveis[i][j][t]);
					if(espaco==d && t<p-1){
						printf(" ");
						espaco=0;
					}
					espaco++;
				}
				printf("\n");
				if(p<possiveis[i][j].size() && p%d==0 && (possiveis[i][j][p-1]==7 || possiveis[i][j][p-1]==8 || possiveis[i][j][p-1]==9) && possiveis[i][j][p]==0){
					espaco = 1;
					for(int t = 0; t < p; t++){
						printf("%d", possiveis[i][j][t]);
						if(espaco==d){
							printf(" ");
							espaco=0;
						}
						espaco++;
					}
					printf("0\n");
				}
				int jj = j, pp = p-2;
				while(j<possiveis[i].size()){
					int parar = 0;
					for(int a = pp; a >=0; a--){
						if(possiveis[i][jj][a]!=possiveis[i][j][a]){
							parar =1;
							break;
						}
					}
					if(parar)break;
					j++;
				}
				j--;
			}
		}
	}
	if(impossivel)printf("impossivel\n");
}

int main() {
	init();
	percorrer();
	int casos = 1;
	while(scanf("%lld %lld", &s, &d) && s!=-1 && d!=-1){
		printf("#%d\n", casos++);
		verifica();
	}
}
=======
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

vector<int> teclado[11];
vector<vector<int>> possiveis[11];
long long int s, d;

void init(){
	teclado[0].push_back(7),teclado[0].push_back(8),teclado[0].push_back(9);
	teclado[1].push_back(2),teclado[1].push_back(4),teclado[1].push_back(5);
	teclado[2].push_back(1),teclado[2].push_back(3),teclado[2].push_back(4),teclado[2].push_back(5),teclado[2].push_back(6);
	teclado[3].push_back(2),teclado[3].push_back(5),teclado[3].push_back(6);
	teclado[4].push_back(1),teclado[4].push_back(2),teclado[4].push_back(5),teclado[4].push_back(7),teclado[4].push_back(8);
	teclado[5].push_back(1),teclado[5].push_back(2),teclado[5].push_back(3),teclado[5].push_back(4),teclado[5].push_back(6),teclado[5].push_back(7),teclado[5].push_back(8),teclado[5].push_back(9);
	teclado[6].push_back(2),teclado[6].push_back(3),teclado[6].push_back(5),teclado[6].push_back(8),teclado[6].push_back(9);
	teclado[7].push_back(0),teclado[7].push_back(4),teclado[7].push_back(5),teclado[7].push_back(8);
	teclado[8].push_back(0),teclado[8].push_back(4),teclado[8].push_back(5),teclado[8].push_back(6),teclado[8].push_back(7),teclado[8].push_back(9);
	teclado[9].push_back(0),teclado[9].push_back(5), teclado[9].push_back(6),teclado[9].push_back(8);
}

int vez = 0;
void dfs2(int u, vector<int> vis, vector<int> valor){
	vis[u] = 1;
	valor.push_back(u);
	int todos = 1;
	for(int i = 0; i < teclado[u].size(); i++){
		int v = teclado[u][i];
		if(!vis[v]){
			todos = 0;
			dfs2(v, vis, valor);
		}
	}
	if(todos){
		possiveis[vez].push_back(valor);
		return;
	}
}

void percorrer(){
	vector<int> vis(11, 0);
	vector<int> valor;
	for(int i = 0; i <= 9; i++){
		vez = i;
		dfs2(i, vis, valor);
	}
}

void verifica(){
	if(s==0){
		printf("0\n");
		return;
	}
	bool impossivel = true;
	for(int i = 0; i <= 9; i++){
		for(int j = 0; j < possiveis[i].size(); j++){
			long long int vT = 0, vA=0, p;
			long long int teste = 1;
			for(p = 0; p < possiveis[i][j].size(); p++){
				vA=(vA*10)+possiveis[i][j][p];
				if(teste==d){
					vT = vT+vA;
					vA = 0;
					teste=0;
				}
				teste++;
				if(vT>=s){
					p++;
					break;
				}
				if(vT+vA>=s){
					vT+=vA;
					p++;
					break;
				}
			}
			/*if(vT+vA==s){
				vT+=vA;
			}*/
			if(vT==s){
				impossivel = false;
				int espaco = 1;
				for(int t = 0; t < p; t++){
					printf("%d", possiveis[i][j][t]);
					if(espaco==d && t<p-1){
						printf(" ");
						espaco=0;
					}
					espaco++;
				}
				printf("\n");
				if(p<possiveis[i][j].size() && p%d==0 && (possiveis[i][j][p-1]==7 || possiveis[i][j][p-1]==8 || possiveis[i][j][p-1]==9) && possiveis[i][j][p]==0){
					espaco = 1;
					for(int t = 0; t < p; t++){
						printf("%d", possiveis[i][j][t]);
						if(espaco==d){
							printf(" ");
							espaco=0;
						}
						espaco++;
					}
					printf("0\n");
				}
				int jj = j, pp = p-2;
				while(j<possiveis[i].size()){
					int parar = 0;
					for(int a = pp; a >=0; a--){
						if(possiveis[i][jj][a]!=possiveis[i][j][a]){
							parar =1;
							break;
						}
					}
					if(parar)break;
					j++;
				}
				j--;
			}
		}
	}
	if(impossivel)printf("impossivel\n");
}

int main() {
	init();
	percorrer();
	int casos = 1;
	while(scanf("%lld %lld", &s, &d) && s!=-1 && d!=-1){
		printf("#%d\n", casos++);
		verifica();
	}
}
>>>>>>> refs/remotes/origin/master
