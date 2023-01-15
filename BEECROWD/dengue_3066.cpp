<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> lista_adj(104);


int main(){
    int qtd_ilha=1, a, b, teste=1;
    queue<int> fila;
    while(qtd_ilha != 0){
        scanf("%d", &qtd_ilha);
        if(qtd_ilha != 0){
            for(int i=1; i<=qtd_ilha; i++)
                lista_adj[i].clear();
            for(int i=1; i<qtd_ilha; i++){
                scanf("%d %d", &a, &b);
                lista_adj[a].push_back(b);
                lista_adj[b].push_back(a);
            }

            for(int i=1; i<=qtd_ilha; i++){
                if(lista_adj[i].size() <= 1){
                    //cout << i << " ";
                    fila.push(i);
                    lista_adj[i].clear();
                }
            }
            while(fila.size() > 1){
                a=fila.front();
                fila.pop();
                for(int i=1; i<=qtd_ilha; i++){
                    for(int j=0; j<lista_adj[i].size(); j++){
                        if(lista_adj[i][j]==a)
                            lista_adj[i].erase(lista_adj[i].begin()+j);
                    }
                    if(lista_adj[i].size() == 1){
                        fila.push(i);
                        lista_adj[i].clear();
                    }
                }
            }
            cout <<"Teste " << teste << endl << fila.front() << endl << endl;
            fila.pop();
            teste++;
        }
    }
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> lista_adj(104);


int main(){
    int qtd_ilha=1, a, b, teste=1;
    queue<int> fila;
    while(qtd_ilha != 0){
        scanf("%d", &qtd_ilha);
        if(qtd_ilha != 0){
            for(int i=1; i<=qtd_ilha; i++)
                lista_adj[i].clear();
            for(int i=1; i<qtd_ilha; i++){
                scanf("%d %d", &a, &b);
                lista_adj[a].push_back(b);
                lista_adj[b].push_back(a);
            }

            for(int i=1; i<=qtd_ilha; i++){
                if(lista_adj[i].size() <= 1){
                    //cout << i << " ";
                    fila.push(i);
                    lista_adj[i].clear();
                }
            }
            while(fila.size() > 1){
                a=fila.front();
                fila.pop();
                for(int i=1; i<=qtd_ilha; i++){
                    for(int j=0; j<lista_adj[i].size(); j++){
                        if(lista_adj[i][j]==a)
                            lista_adj[i].erase(lista_adj[i].begin()+j);
                    }
                    if(lista_adj[i].size() == 1){
                        fila.push(i);
                        lista_adj[i].clear();
                    }
                }
            }
            cout <<"Teste " << teste << endl << fila.front() << endl << endl;
            fila.pop();
            teste++;
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
