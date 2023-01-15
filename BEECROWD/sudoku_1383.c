<<<<<<< HEAD
#include <stdio.h>

int verificao_linhas_e_colunas(int sudoku[9][9]);
int verificacao_blocos_3_x_3(int sudoku[9][9]);

int main(){
    int qtd_solucao, i, j, corretude=0, cont;
    int sudoku[9][9];
    scanf("%d", &qtd_solucao);
    for(cont=1;cont<=qtd_solucao;cont++){
        for(i=0;i<9;i++){
            for(j=0;j<9;j++)
                scanf("%d", &sudoku[i][j]);
        }
        if(cont>1) // flag para separar instancias
            printf("\n");
        printf("Instancia %d\n", cont);
        corretude=verificao_linhas_e_colunas(sudoku);
        if(corretude==0)
        	corretude=verificacao_blocos_3_x_3(sudoku);
        if(corretude==0)
            printf("SIM\n");
        else
            printf("NAO\n");
    }
    printf("\n");
    return 0;
}

int verificao_linhas_e_colunas(int sudoku[9][9]){
	int i, j, verificacao_qtd_numeros[9], corretude=0;
	for(j=0;j<9;j++)
    	verificacao_qtd_numeros[j]=0;
	for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                verificacao_qtd_numeros[sudoku[i][j]-1]++;
                verificacao_qtd_numeros[sudoku[j][i]-1]++;
            }
            for(j=0;j<9;j++){
            	if(verificacao_qtd_numeros[j] != 2)
                	corretude=1;
            }
            if(corretude==1)
            	break;
            for(j=0;j<9;j++)
            	verificacao_qtd_numeros[j]=0;
        }
        return corretude;
}

int verificacao_blocos_3_x_3(int sudoku[9][9]){
	int i, j, corretude=0, verifica_blo1[9], verifica_blo2[9], verifica_blo3[9];
	for(j=0;j<9;j++)
		verifica_blo1[j]=0, verifica_blo2[j]=0, verifica_blo3[j]=0;
	for(i=0;i<9;i+=3){
		for(j=0;j<3;j++){
			verifica_blo1[sudoku[i][j]-1]++;
			verifica_blo1[sudoku[i+1][j]-1]++;
			verifica_blo1[sudoku[i+2][j]-1]++;

			verifica_blo2[sudoku[i][j+3]-1]++;
			verifica_blo2[sudoku[i+1][j+3]-1]++;
			verifica_blo2[sudoku[i+2][j+3]-1]++;

			verifica_blo3[sudoku[i][j+6]-1]++;
            verifica_blo3[sudoku[i+1][j+6]-1]++;
			verifica_blo3[sudoku[i+2][j+6]-1]++;
		}
		for(j=0;j<9;j++){
			if(verifica_blo1[j] != 1 || verifica_blo2[j] != 1 || verifica_blo3[j] != 1)
				corretude=1;
			if(corretude==1)
				break;
			verifica_blo1[j]=0, verifica_blo2[j]=0, verifica_blo3[j]=0;
		}
	}
	return corretude;
}
=======
#include <stdio.h>

int verificao_linhas_e_colunas(int sudoku[9][9]);
int verificacao_blocos_3_x_3(int sudoku[9][9]);

int main(){
    int qtd_solucao, i, j, corretude=0, cont;
    int sudoku[9][9];
    scanf("%d", &qtd_solucao);
    for(cont=1;cont<=qtd_solucao;cont++){
        for(i=0;i<9;i++){
            for(j=0;j<9;j++)
                scanf("%d", &sudoku[i][j]);
        }
        if(cont>1) // flag para separar instancias
            printf("\n");
        printf("Instancia %d\n", cont);
        corretude=verificao_linhas_e_colunas(sudoku);
        if(corretude==0)
        	corretude=verificacao_blocos_3_x_3(sudoku);
        if(corretude==0)
            printf("SIM\n");
        else
            printf("NAO\n");
    }
    printf("\n");
    return 0;
}

int verificao_linhas_e_colunas(int sudoku[9][9]){
	int i, j, verificacao_qtd_numeros[9], corretude=0;
	for(j=0;j<9;j++)
    	verificacao_qtd_numeros[j]=0;
	for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                verificacao_qtd_numeros[sudoku[i][j]-1]++;
                verificacao_qtd_numeros[sudoku[j][i]-1]++;
            }
            for(j=0;j<9;j++){
            	if(verificacao_qtd_numeros[j] != 2)
                	corretude=1;
            }
            if(corretude==1)
            	break;
            for(j=0;j<9;j++)
            	verificacao_qtd_numeros[j]=0;
        }
        return corretude;
}

int verificacao_blocos_3_x_3(int sudoku[9][9]){
	int i, j, corretude=0, verifica_blo1[9], verifica_blo2[9], verifica_blo3[9];
	for(j=0;j<9;j++)
		verifica_blo1[j]=0, verifica_blo2[j]=0, verifica_blo3[j]=0;
	for(i=0;i<9;i+=3){
		for(j=0;j<3;j++){
			verifica_blo1[sudoku[i][j]-1]++;
			verifica_blo1[sudoku[i+1][j]-1]++;
			verifica_blo1[sudoku[i+2][j]-1]++;

			verifica_blo2[sudoku[i][j+3]-1]++;
			verifica_blo2[sudoku[i+1][j+3]-1]++;
			verifica_blo2[sudoku[i+2][j+3]-1]++;

			verifica_blo3[sudoku[i][j+6]-1]++;
            verifica_blo3[sudoku[i+1][j+6]-1]++;
			verifica_blo3[sudoku[i+2][j+6]-1]++;
		}
		for(j=0;j<9;j++){
			if(verifica_blo1[j] != 1 || verifica_blo2[j] != 1 || verifica_blo3[j] != 1)
				corretude=1;
			if(corretude==1)
				break;
			verifica_blo1[j]=0, verifica_blo2[j]=0, verifica_blo3[j]=0;
		}
	}
	return corretude;
}
>>>>>>> refs/remotes/origin/master
