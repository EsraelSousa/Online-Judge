<<<<<<< HEAD
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
    int dimen, col;
    long long soma_min, soma_total=0;
    cin >> dimen;
    int matriz[dimen][dimen], soma_colu[dimen];
    for(int i=0; i<dimen; i++)
        soma_colu[i]=0;
    for(int i=0; i<dimen; i++){
        for(int j=0; j<dimen; j++){
            scanf("%d", &matriz[i][j]);
            soma_colu[j]+=matriz[i][j];
            //printf("SOMA %d >> %d\n", j, soma_colu[j]);
        }
    }
    for(int i=0; i<dimen; i++)
        printf("%d\n", soma_colu[i]);
    for(int i=0; i<dimen; i++){
        soma_min=1000000000000;
        for(int j=0; j<dimen; j++){
            if(soma_colu[j] < soma_min && soma_colu[j] > 0){
                col=j;
                soma_min=soma_colu[j];
            }
            soma_colu[j]-=matriz[i][j];
        }
        printf("VAI SOMAR %d\n", soma_colu[col]+matriz[i][col]);
        soma_total+=soma_colu[col]+matriz[i][col];
        soma_colu[col]=-1;
    }
    printf("%lld\n", soma_total);
    return 0;
}
=======
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
    int dimen, col;
    long long soma_min, soma_total=0;
    cin >> dimen;
    int matriz[dimen][dimen], soma_colu[dimen];
    for(int i=0; i<dimen; i++)
        soma_colu[i]=0;
    for(int i=0; i<dimen; i++){
        for(int j=0; j<dimen; j++){
            scanf("%d", &matriz[i][j]);
            soma_colu[j]+=matriz[i][j];
            //printf("SOMA %d >> %d\n", j, soma_colu[j]);
        }
    }
    for(int i=0; i<dimen; i++)
        printf("%d\n", soma_colu[i]);
    for(int i=0; i<dimen; i++){
        soma_min=1000000000000;
        for(int j=0; j<dimen; j++){
            if(soma_colu[j] < soma_min && soma_colu[j] > 0){
                col=j;
                soma_min=soma_colu[j];
            }
            soma_colu[j]-=matriz[i][j];
        }
        printf("VAI SOMAR %d\n", soma_colu[col]+matriz[i][col]);
        soma_total+=soma_colu[col]+matriz[i][col];
        soma_colu[col]=-1;
    }
    printf("%lld\n", soma_total);
    return 0;
}
>>>>>>> refs/remotes/origin/master
