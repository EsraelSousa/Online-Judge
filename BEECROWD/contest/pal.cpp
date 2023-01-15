#include <bits/stdc++.h>

using namespace std;

int mat[1001][1001];
string palav;

int maior_palin(int lin, int col){

	if(lin == col)
		return mat[lin][col] = 1;
	if(lin+1 == col)
		return mat[lin][col] = palav[lin] == palav[col] ? 2 : 1;
	if(mat[lin][col] != -1)
		return mat[lin][col];
	if(palav[lin] == palav[col])
		return mat[lin][col] = 2 + maior_palin(lin+1, col-1);
	return mat[lin][col] = max(maior_palin(lin+1, col), maior_palin(lin, col-1));
}

int main(){

	cin>>palav;
	string aux;
    int i, j;
 	int tam = (int)palav.size();
 	for(i=0;i<tam;i++){

 	}
	for(i=0; i<tam; i++)
		for(j=0; j<tam; j++)
			mat[i][j] = -1;

	cout << maior_palin(0, tam-1) << endl;

	return 0;
}
