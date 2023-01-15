<<<<<<< HEAD
#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Tpackage{
    string package;
    int id;
};

bool ordena_packages(Tpackage a, Tpackage b){
    return a.id < b.id;
}

int main(){
    string entrada;
    int qtd_package=0;
    Tpackage packages[1005];
    while(cin >> entrada){
        if(entrada == "Package"){
            packages[qtd_package].package="Package";
            cin >> packages[qtd_package].id;
            qtd_package++;
        }else if(entrada == "0"){
            sort(packages, packages+qtd_package, ordena_packages);
            for(int i=0; i<qtd_package; i++){
                cout << packages[i].package << " "  << setfill('0') << setw(3) << packages[i].id << endl;
            }
            qtd_package=0;
            cout << endl;
        }
    }
    return 0;
}
=======
#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Tpackage{
    string package;
    int id;
};

bool ordena_packages(Tpackage a, Tpackage b){
    return a.id < b.id;
}

int main(){
    string entrada;
    int qtd_package=0;
    Tpackage packages[1005];
    while(cin >> entrada){
        if(entrada == "Package"){
            packages[qtd_package].package="Package";
            cin >> packages[qtd_package].id;
            qtd_package++;
        }else if(entrada == "0"){
            sort(packages, packages+qtd_package, ordena_packages);
            for(int i=0; i<qtd_package; i++){
                cout << packages[i].package << " "  << setfill('0') << setw(3) << packages[i].id << endl;
            }
            qtd_package=0;
            cout << endl;
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
