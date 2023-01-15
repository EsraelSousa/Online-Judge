<<<<<<< HEAD
#include <bits/stdc++.h>
#include <cstdio>
//using namespace std;

typedef struct palavra Tpalavra;

struct palavra{
    char pala[75];
    int tamanho;
};

int main(){
    int qtd_palavra, qtd_linha_pag, qtd_caracter_lin, cont_linha, cont_pagina, soma_caracter, i;
    Tpalavra conto[1000];
    while(scanf("%d %d %d%*c", &qtd_palavra, &qtd_linha_pag, &qtd_caracter_lin) == 3){  //cin >> qtd_palavra >> qtd_linha_pag >>qtd_caracter_lin
        cont_pagina=0, cont_linha=0;
        for(i=0;i<qtd_palavra;i++){
            scanf("%s", conto[i].pala);
            conto[i].tamanho=strlen(conto[i].pala);
        }
        soma_caracter=0;
        for(i=0; i<qtd_palavra;i++){

            if(i<qtd_palavra && soma_caracter != 0)
                soma_caracter++;
            soma_caracter+=conto[i].tamanho;
            if(soma_caracter>=qtd_caracter_lin){
                if(soma_caracter==qtd_caracter_lin)
                    cont_linha++, soma_caracter=0;
                else{
                    cont_linha++;
                    soma_caracter=0;
                    soma_caracter=conto[i].tamanho;

                }
            }
        }
        if(soma_caracter>0)
            cont_linha++;
        //printf("qtd linha %d %d\n", cont_linha, soma_caracter);
        cont_pagina+=cont_linha/qtd_linha_pag;
        if(cont_linha<qtd_linha_pag)
            cont_pagina=1;
        else if(cont_linha%qtd_linha_pag > 0)
            cont_pagina++;
        printf("%d\n", cont_pagina);
    }
    return 0;
}
=======
#include <bits/stdc++.h>
#include <cstdio>
//using namespace std;

typedef struct palavra Tpalavra;

struct palavra{
    char pala[75];
    int tamanho;
};

int main(){
    int qtd_palavra, qtd_linha_pag, qtd_caracter_lin, cont_linha, cont_pagina, soma_caracter, i;
    Tpalavra conto[1000];
    while(scanf("%d %d %d%*c", &qtd_palavra, &qtd_linha_pag, &qtd_caracter_lin) == 3){  //cin >> qtd_palavra >> qtd_linha_pag >>qtd_caracter_lin
        cont_pagina=0, cont_linha=0;
        for(i=0;i<qtd_palavra;i++){
            scanf("%s", conto[i].pala);
            conto[i].tamanho=strlen(conto[i].pala);
        }
        soma_caracter=0;
        for(i=0; i<qtd_palavra;i++){

            if(i<qtd_palavra && soma_caracter != 0)
                soma_caracter++;
            soma_caracter+=conto[i].tamanho;
            if(soma_caracter>=qtd_caracter_lin){
                if(soma_caracter==qtd_caracter_lin)
                    cont_linha++, soma_caracter=0;
                else{
                    cont_linha++;
                    soma_caracter=0;
                    soma_caracter=conto[i].tamanho;

                }
            }
        }
        if(soma_caracter>0)
            cont_linha++;
        //printf("qtd linha %d %d\n", cont_linha, soma_caracter);
        cont_pagina+=cont_linha/qtd_linha_pag;
        if(cont_linha<qtd_linha_pag)
            cont_pagina=1;
        else if(cont_linha%qtd_linha_pag > 0)
            cont_pagina++;
        printf("%d\n", cont_pagina);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
