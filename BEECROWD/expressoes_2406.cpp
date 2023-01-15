<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd_teste, to, k, tam;
    char expr[100005], ans[25];
    bool erro;
    scanf("%d", &qtd_teste);
    for(int i=0; i<qtd_teste; i++){
        scanf("%s", &expr);
        to=0, erro=false, tam = strlen(expr);
        for(int j=0; j<tam; j++){
            if(expr[j]=='('){
                k = j+1;
                while(k<tam && expr[k]!=')'){
                    k++;
                }
                if(k==tam)
                    erro=true;
                else{
                    expr[j]='#';
                    expr[k]='#';
                    to+=2;
                }
            }else if(expr[j]=='['){
                k = j+1;
                while(k<tam && expr[k]!=']'){
                    k++;
                }
                if(k==tam)
                    erro=true;
                else{
                    expr[j]='#';
                    expr[k]='#';
                    to+=2;
                };
            }else if(expr[j]=='{'){
                k = j+1;
                while(k<tam && expr[k]!='}'){
                    k++;
                }
                if(k==tam)
                    erro=true;
                else{
                    expr[j]='#';
                    expr[k]='#';
                    to+=2;
                }
            }
            if(erro)
                break;
        }
        if(to==tam)
            ans[i]='S'; //cout << "S" << endl;
        else
            ans[i]='N'; //cout << "N" << endl;
        //printf("%s\n", expr);
    }
    for(int i=0; i<qtd_teste; i++)
        cout << ans[i] << endl;
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd_teste, to, k, tam;
    char expr[100005], ans[25];
    bool erro;
    scanf("%d", &qtd_teste);
    for(int i=0; i<qtd_teste; i++){
        scanf("%s", &expr);
        to=0, erro=false, tam = strlen(expr);
        for(int j=0; j<tam; j++){
            if(expr[j]=='('){
                k = j+1;
                while(k<tam && expr[k]!=')'){
                    k++;
                }
                if(k==tam)
                    erro=true;
                else{
                    expr[j]='#';
                    expr[k]='#';
                    to+=2;
                }
            }else if(expr[j]=='['){
                k = j+1;
                while(k<tam && expr[k]!=']'){
                    k++;
                }
                if(k==tam)
                    erro=true;
                else{
                    expr[j]='#';
                    expr[k]='#';
                    to+=2;
                };
            }else if(expr[j]=='{'){
                k = j+1;
                while(k<tam && expr[k]!='}'){
                    k++;
                }
                if(k==tam)
                    erro=true;
                else{
                    expr[j]='#';
                    expr[k]='#';
                    to+=2;
                }
            }
            if(erro)
                break;
        }
        if(to==tam)
            ans[i]='S'; //cout << "S" << endl;
        else
            ans[i]='N'; //cout << "N" << endl;
        //printf("%s\n", expr);
    }
    for(int i=0; i<qtd_teste; i++)
        cout << ans[i] << endl;
    return 0;
}
>>>>>>> refs/remotes/origin/master
