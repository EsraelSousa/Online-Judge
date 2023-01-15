#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e3+5;
const int MAXL = 1e2+5;
char dicionario[MAXN][MAXL];

int dp[MAXL][MAXL];

int editDistDP(char* str1, char* str2, int m, int n){
	// Fill d[][] in bottom up manner
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			// If first string is empty, only option is to
			// insert all characters of second string
			if (i == 0)
				dp[i][j] = j; // Min. operations = j

			// If second string is empty, only option is to
			// remove all characters of second string
			else if (j == 0)
				dp[i][j] = i; // Min. operations = i

			// If last characters are same, ignore last char
			// and recur for remaining string
			else if (str1[i - 1] == str2[j - 1])
				dp[i][j] = dp[i - 1][j - 1];

			// If the last character is different, consider
			// all possibilities and find the minimum
			else
				dp[i][j]
					= 1
					+ min(dp[i][j - 1], // Insert
							min(dp[i - 1][j], // Remove
							dp[i - 1][j - 1])); // Replace
		}
	}

	return dp[m][n];
}


int main(){
    int n, query, custoEdicao, idAns;
    int tamanhoPalavra, custoAtual;
    char palavra[MAXL];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%s", dicionario[i]);

    scanf("%d", &query);
    while(query--){
        scanf("%s", palavra);
        idAns = 0;
        tamanhoPalavra = strlen(palavra);
        custoEdicao = editDistDP(palavra, dicionario[0], tamanhoPalavra, strlen(dicionario[0]));
        for(int i=1; i<n; i++){
            custoAtual = editDistDP(palavra, dicionario[i], tamanhoPalavra, strlen(dicionario[i]));
            if(custoAtual < custoEdicao){
                idAns = i;
                custoEdicao = custoAtual;
            }
        }
        printf("%s%c", dicionario[idAns], (query)? ' ' : '\n');
    }
    return 0;
}