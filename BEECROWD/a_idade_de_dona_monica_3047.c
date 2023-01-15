<<<<<<< HEAD
#include <stdio.h>

int main(){
    int idade_monica, filho1, filho2, filho3;
    scanf("%d %d %d", &idade_monica, &filho2, &filho3);
    filho1=idade_monica-(filho2+filho3);
    if(filho1>=filho2 && filho1 >= filho3)
        printf("%d\n", filho1);
    else if(filho2>=filho1 && filho2 >= filho3)
        printf("%d\n", filho2);
    else
        printf("%d\n", filho3);
}
=======
#include <stdio.h>

int main(){
    int idade_monica, filho1, filho2, filho3;
    scanf("%d %d %d", &idade_monica, &filho2, &filho3);
    filho1=idade_monica-(filho2+filho3);
    if(filho1>=filho2 && filho1 >= filho3)
        printf("%d\n", filho1);
    else if(filho2>=filho1 && filho2 >= filho3)
        printf("%d\n", filho2);
    else
        printf("%d\n", filho3);
}
>>>>>>> refs/remotes/origin/master
