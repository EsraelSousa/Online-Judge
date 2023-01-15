<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd_dado, face, cont_mov=0, i, j;
    int dados[6];
    long long int num_min=10000000000;
    for(i=0;i<6;i++)
        dados[i]=0;
    cin >> qtd_dado;
    for(i=0;i<qtd_dado;i++){
        cin >> face;
        dados[face-1]++;
    }
    for(i=1; i<=6;i++){
        cont_mov=0;
        for(j=1;j<=6;j++){
            if(i+j==7 && i!=j)
                cont_mov+=2*dados[j-1];
            else if(i!=j)
                cont_mov+=dados[j-1];
        }
        if(cont_mov < num_min)
            num_min=cont_mov;
    }
    cout << num_min << endl;
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd_dado, face, cont_mov=0, i, j;
    int dados[6];
    long long int num_min=10000000000;
    for(i=0;i<6;i++)
        dados[i]=0;
    cin >> qtd_dado;
    for(i=0;i<qtd_dado;i++){
        cin >> face;
        dados[face-1]++;
    }
    for(i=1; i<=6;i++){
        cont_mov=0;
        for(j=1;j<=6;j++){
            if(i+j==7 && i!=j)
                cont_mov+=2*dados[j-1];
            else if(i!=j)
                cont_mov+=dados[j-1];
        }
        if(cont_mov < num_min)
            num_min=cont_mov;
    }
    cout << num_min << endl;
    return 0;
}
>>>>>>> refs/remotes/origin/master
