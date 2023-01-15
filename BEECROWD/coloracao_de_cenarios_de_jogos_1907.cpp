<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

struct ponto{
	int x;
	int y;
};

int m, n, x, y;
char cenario[1030][1030];
ponto ponto_atua, add;

bool validar(int x, int y){
	if(x<1 || x>m || y<0 || y>=n)
		return false;
	else if(cenario[x][y]=='o')
		return false;
	return true;
}

void BFS(ponto p){
	queue<ponto> fila;
	fila.push(p);
	while(!fila.empty()){
		ponto_atua = fila.front();
		cenario[ponto_atua.x][ponto_atua.y] = 'o';
		fila.pop();
		if(validar(ponto_atua.x, ponto_atua.y+1)){
			add.x = ponto_atua.x;
			add.y = ponto_atua.y+1;
			fila.push(add);
		}
		if(validar(ponto_atua.x, ponto_atua.y-1)){
			add.x = ponto_atua.x;
			add.y = ponto_atua.y-1;
			fila.push(add);
		}
		if(validar(ponto_atua.x+1, ponto_atua.y)){
			add.x = ponto_atua.x+1;
			add.y = ponto_atua.y;
			fila.push(add);
		}
		if(validar(ponto_atua.x-1, ponto_atua.y)){
			add.x = ponto_atua.x-1;
			add.y = ponto_atua.y;
			fila.push(add);
		}
	}
}

int main(){
	int ans=0;
	scanf("%d %d%*c", &m, &n);
	for(int i=1; i<=m; i++){
		scanf("%s", cenario[i]);
	}
	for(int i=1; i<=m;i++){
		for(int j=0; j<n; j++){
			if(cenario[i][j]=='.'){
				ponto_atua.x=i, ponto_atua.y=j;
				ans++;
				BFS(ponto_atua);
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

struct ponto{
	int x;
	int y;
};

int m, n, x, y;
char cenario[1030][1030];
ponto ponto_atua, add;

bool validar(int x, int y){
	if(x<1 || x>m || y<0 || y>=n)
		return false;
	else if(cenario[x][y]=='o')
		return false;
	return true;
}

void BFS(ponto p){
	queue<ponto> fila;
	fila.push(p);
	while(!fila.empty()){
		ponto_atua = fila.front();
		cenario[ponto_atua.x][ponto_atua.y] = 'o';
		fila.pop();
		if(validar(ponto_atua.x, ponto_atua.y+1)){
			add.x = ponto_atua.x;
			add.y = ponto_atua.y+1;
			fila.push(add);
		}
		if(validar(ponto_atua.x, ponto_atua.y-1)){
			add.x = ponto_atua.x;
			add.y = ponto_atua.y-1;
			fila.push(add);
		}
		if(validar(ponto_atua.x+1, ponto_atua.y)){
			add.x = ponto_atua.x+1;
			add.y = ponto_atua.y;
			fila.push(add);
		}
		if(validar(ponto_atua.x-1, ponto_atua.y)){
			add.x = ponto_atua.x-1;
			add.y = ponto_atua.y;
			fila.push(add);
		}
	}
}

int main(){
	int ans=0;
	scanf("%d %d%*c", &m, &n);
	for(int i=1; i<=m; i++){
		scanf("%s", cenario[i]);
	}
	for(int i=1; i<=m;i++){
		for(int j=0; j<n; j++){
			if(cenario[i][j]=='.'){
				ponto_atua.x=i, ponto_atua.y=j;
				ans++;
				BFS(ponto_atua);
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
>>>>>>> refs/remotes/origin/master
