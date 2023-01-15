<<<<<<< HEAD
#include <stdio.h>

int main(){
    int cred1, cred2, cred3;
    scanf("%d %d %d", &cred1, &cred2, &cred3);
    if(cred1==cred2 || cred1==cred3 || cred2==cred3 || cred1==cred2+cred3 || cred2==cred1+cred3 || cred3==cred1+cred2)
        printf("S");
    else
        printf("N");
    printf("\n");
    return 0;
}
=======
#include <stdio.h>

int main(){
    int cred1, cred2, cred3;
    scanf("%d %d %d", &cred1, &cred2, &cred3);
    if(cred1==cred2 || cred1==cred3 || cred2==cred3 || cred1==cred2+cred3 || cred2==cred1+cred3 || cred3==cred1+cred2)
        printf("S");
    else
        printf("N");
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
