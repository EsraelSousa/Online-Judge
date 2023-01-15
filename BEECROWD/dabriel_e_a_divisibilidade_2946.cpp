<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int modpow(int x, int n, int m) {
    if (n == 0) return 1%m;
    long long u = modpow(x,n/2,m);
    u = (u*u)%m;
    if (n%2 == 1) u = (u*x)%m;
    return u;
}

int main(){
	string numero_bin;
	int qtd_num, flag=0, resto, aux;
	int pos_div[13];
	cin >> numero_bin >> qtd_num;
	for(int i=0; i<qtd_num; i++)
        scanf("%d", &pos_div[i]);
    sort(pos_div, pos_div+qtd_num);
    for(int i=0; i<qtd_num;){
        resto=0;
        for(int j=0; j<numero_bin.size(); j++){
            if(numero_bin[j]=='1'){
                aux=modpow(2, numero_bin.size()-1-j, pos_div[i]);
                if(aux==0)
                    resto=resto%pos_div[i];
                else{
                    resto=(resto+aux)%pos_div[i];
                    //resto=(int)((resto*pow(10, log10(aux)+10))+aux)%pos_div[i];
                    //printf("POT %d\n", (int)pow(10, log10(aux)+1));
                }
                //printf("RESTO %d AUX %d\n", resto, aux);
            }
        }
        if(resto == 0){
            aux=i;
            while(pos_div[aux] == pos_div[i] && i<qtd_num){
                if(flag==0)
                    printf("%d", pos_div[i]);
                else
                    printf(" %d", pos_div[i]);
                flag=1, i++;
            }
        }else{
            aux=i;
            i++;
            while(pos_div[aux] == pos_div[i] && i<qtd_num){
                i++;
            }
        }
    }
    if(flag==1)
        printf("\n");
    else
        printf("Nenhum\n");
	return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int modpow(int x, int n, int m) {
    if (n == 0) return 1%m;
    long long u = modpow(x,n/2,m);
    u = (u*u)%m;
    if (n%2 == 1) u = (u*x)%m;
    return u;
}

int main(){
	string numero_bin;
	int qtd_num, flag=0, resto, aux;
	int pos_div[13];
	cin >> numero_bin >> qtd_num;
	for(int i=0; i<qtd_num; i++)
        scanf("%d", &pos_div[i]);
    sort(pos_div, pos_div+qtd_num);
    for(int i=0; i<qtd_num;){
        resto=0;
        for(int j=0; j<numero_bin.size(); j++){
            if(numero_bin[j]=='1'){
                aux=modpow(2, numero_bin.size()-1-j, pos_div[i]);
                if(aux==0)
                    resto=resto%pos_div[i];
                else{
                    resto=(resto+aux)%pos_div[i];
                    //resto=(int)((resto*pow(10, log10(aux)+10))+aux)%pos_div[i];
                    //printf("POT %d\n", (int)pow(10, log10(aux)+1));
                }
                //printf("RESTO %d AUX %d\n", resto, aux);
            }
        }
        if(resto == 0){
            aux=i;
            while(pos_div[aux] == pos_div[i] && i<qtd_num){
                if(flag==0)
                    printf("%d", pos_div[i]);
                else
                    printf(" %d", pos_div[i]);
                flag=1, i++;
            }
        }else{
            aux=i;
            i++;
            while(pos_div[aux] == pos_div[i] && i<qtd_num){
                i++;
            }
        }
    }
    if(flag==1)
        printf("\n");
    else
        printf("Nenhum\n");
	return 0;
}
>>>>>>> refs/remotes/origin/master
