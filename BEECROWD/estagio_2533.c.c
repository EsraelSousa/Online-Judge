<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_disci, nota, ch, i;
    long long int soma1=0, soma2=0;
    while(scanf("%d", &qtd_disci) != EOF){;
        for(i=0;i<qtd_disci;i++){
            scanf("%d %d", &nota, &ch);
            soma1+=nota*ch;
            soma2+=ch;
        }
        printf("%.4lf\n", soma1/(100.00*soma2));
        soma1=0;
        soma2=0;
    }
    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main(){
    int qtd_disci, nota, ch, i;
    long long int soma1=0, soma2=0;
    while(scanf("%d", &qtd_disci) != EOF){;
        for(i=0;i<qtd_disci;i++){
            scanf("%d %d", &nota, &ch);
            soma1+=nota*ch;
            soma2+=ch;
        }
        printf("%.4lf\n", soma1/(100.00*soma2));
        soma1=0;
        soma2=0;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
