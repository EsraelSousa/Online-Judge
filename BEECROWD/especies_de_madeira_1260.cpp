<<<<<<< HEAD
#include <iostream>
#include <string>
#include <map>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    int qtd_teste, total, flag=0;
    map<string, int> arvores;
    string arvore="ESRAEL";
    scanf("%d%*c%*c", &qtd_teste);
    for(int i=0; i<qtd_teste; i++){
        total=0;
        while(arvore != "\n"){
            getline(cin, arvore);
            if(arvore.size()==0)
                break;
            if(arvores.find(arvore) != arvores.end())
                arvores[arvore]++;
            else
                arvores[arvore]=1;
            total++;
        }
        if(flag==1)
            printf("\n");
        map<string, int> :: iterator it;
        for(it=arvores.begin(); it != arvores.end(); it++){
            cout << (*it).first;
            printf(" %.4lf\n", (*it).second*100.00/total);
        }
        arvores.clear();
        flag=1;
    }
    return 0;
}

=======
#include <iostream>
#include <string>
#include <map>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    int qtd_teste, total, flag=0;
    map<string, int> arvores;
    string arvore="ESRAEL";
    scanf("%d%*c%*c", &qtd_teste);
    for(int i=0; i<qtd_teste; i++){
        total=0;
        while(arvore != "\n"){
            getline(cin, arvore);
            if(arvore.size()==0)
                break;
            if(arvores.find(arvore) != arvores.end())
                arvores[arvore]++;
            else
                arvores[arvore]=1;
            total++;
        }
        if(flag==1)
            printf("\n");
        map<string, int> :: iterator it;
        for(it=arvores.begin(); it != arvores.end(); it++){
            cout << (*it).first;
            printf(" %.4lf\n", (*it).second*100.00/total);
        }
        arvores.clear();
        flag=1;
    }
    return 0;
}

>>>>>>> refs/remotes/origin/master
