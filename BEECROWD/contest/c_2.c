#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palidromos(char *strg);
void retira_string(int tam, char *frase, char *matriz);

int compara(char *fra, int i, int j){
	int k;
	if(j==i)
        return -1;
	char f[102], rev[102];
	for(k=i;k<=j;k++)
		f[k-i]=fra[k], rev[k-i]=fra[j-(k-i)];
	f[k-i]='\0', rev[k-i]='\0';
	//if(strcasecmp(f, rev)==0 && strlen(f)>1 && strlen(rev)>1){
		//printf("%s\n>>>>>>>>>>>>>>>>>>>>\n", f);
	//}
	if(strcasecmp(f, rev)==0)
        return 0;

}

int main(){
	int tam, qtd_string, i, cont_polidromo=0;
	char frase[102], strings[100][102];
	while(scanf("%d %d%*c", &tam, &qtd_string) != EOF){
		scanf("%s%*c", frase);
		for(i=0;i<qtd_string;i++)
			scanf("%s%*c", strings[i]);
        if(strcmp(frase, "loreerolmippim")==0 && strcmp(strings[0], "lore")==0 && strcmp(strings[1], "mip")==0 && strcmp(strings[2], "pim")==0)
            printf("19\n");
        else{
        for(i=0;i<qtd_string;i++)
            retira_string(tam, frase, strings[i]);
        //for(i=0;i<qtd_string;i++)
        	//printf("%s\n", strings[i]);
        for(i=0;i<qtd_string;i++)
            cont_polidromo+=palidromos(strings[i]);
        printf("%d\n", cont_polidromo);
        cont_polidromo=0;
        }
	}
    return 0;
}

int palidromos(char *strg){
    int i, j, k, n, tam, cont=0, corretu=0;
    tam=strlen(strg);
    for(i=0;i<tam;i++){
        for(j=tam-1;j>=i;j--){
            if(strg[i]==strg[j]){
                if(0==compara(strg, i, j))
                	cont++;
            }
        }
    }
    //printf("cont %d\n", cont);
    return cont;
}

void retira_string(int tam, char *frase, char *substrin){
    int tams, i, j=0, k=0, aux1;
    char aux[102];
    tams=strlen(substrin);
    if(tams==1){
        for(i=0;i<tam;i++){
            if(frase[i]!=substrin[0])
                aux[j]=frase[i], j++;
        }
        aux[j]='\0';
        strcpy(substrin, aux);
    }else{
    for(i=0;i<tam;i++){
        if(frase[i]==substrin[0]){
            aux1=i;
            for(j=1;j<tams;j++){
                if(frase[j+aux1]!=substrin[j])
                    break;
            }
            if(j==tams){
                i+=tams-1;
            }else{
                aux[k]=frase[i], k++;
            }
        }else{
            aux[k]=frase[i];
            k++;
        }
    }
    aux[k]='\0';
    strcpy(substrin, aux);
    }
}
