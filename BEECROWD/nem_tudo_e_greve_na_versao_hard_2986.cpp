<<<<<<< HEAD
#include <iostream>

using namespace std;

void calcula_resposta(int n){
    unsigned long long vet[n];
    for(int i=0; i<n; i++){
        if(i==0)
            vet[i]=1;
        else if(i==1)
            vet[i]=2;
        else if(i==2)
            vet[i]=4;
        else
            vet[i]=(vet[i-1]+vet[i-2]+vet[i-3])% 1000000007;
    }
    cout << vet[n-1] << endl;
}

int main(){
    int n;
    cin >> n;
    calcula_resposta(n);
    return 0;
}
=======
#include <iostream>

using namespace std;

void calcula_resposta(int n){
    unsigned long long vet[n];
    for(int i=0; i<n; i++){
        if(i==0)
            vet[i]=1;
        else if(i==1)
            vet[i]=2;
        else if(i==2)
            vet[i]=4;
        else
            vet[i]=(vet[i-1]+vet[i-2]+vet[i-3])% 1000000007;
    }
    cout << vet[n-1] << endl;
}

int main(){
    int n;
    cin >> n;
    calcula_resposta(n);
    return 0;
}
>>>>>>> refs/remotes/origin/master
