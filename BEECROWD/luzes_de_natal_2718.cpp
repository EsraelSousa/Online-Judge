<<<<<<< HEAD
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

unsigned long long int max_sequencia(unsigned long long int valor);

int main(){
    long long qtd_teste, i;
    unsigned long long int valor;
    scanf("%lld", &qtd_teste);
    for(i=0; i<qtd_teste;i++){
        scanf("%llu", &valor);
        printf("%llu\n", max_sequencia(valor));
    }
    return 0;
}

unsigned long long int max_sequencia(unsigned long long int valor){
    unsigned long long int anterior=0, sequencia_max=0, cont_seque=0, flag=0;
    while(valor!=0){
       if(flag==0)
            anterior=valor%2;
        if(anterior==0 && valor%2==1)
            cont_seque=1;
       if(anterior==1 && valor%2==1)
            cont_seque++;
       else if(valor%2==0){
            if(cont_seque>sequencia_max)
                sequencia_max=cont_seque;
            cont_seque=0;
       }
       anterior=valor%2;
       valor/=2;
       flag=1;
    }

    if(cont_seque>sequencia_max)
        sequencia_max=cont_seque;
    return sequencia_max;
}
=======
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

unsigned long long int max_sequencia(unsigned long long int valor);

int main(){
    long long qtd_teste, i;
    unsigned long long int valor;
    scanf("%lld", &qtd_teste);
    for(i=0; i<qtd_teste;i++){
        scanf("%llu", &valor);
        printf("%llu\n", max_sequencia(valor));
    }
    return 0;
}

unsigned long long int max_sequencia(unsigned long long int valor){
    unsigned long long int anterior=0, sequencia_max=0, cont_seque=0, flag=0;
    while(valor!=0){
       if(flag==0)
            anterior=valor%2;
        if(anterior==0 && valor%2==1)
            cont_seque=1;
       if(anterior==1 && valor%2==1)
            cont_seque++;
       else if(valor%2==0){
            if(cont_seque>sequencia_max)
                sequencia_max=cont_seque;
            cont_seque=0;
       }
       anterior=valor%2;
       valor/=2;
       flag=1;
    }

    if(cont_seque>sequencia_max)
        sequencia_max=cont_seque;
    return sequencia_max;
}
>>>>>>> refs/remotes/origin/master
