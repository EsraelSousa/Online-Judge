<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    char texto[503];
    scanf("%[^\n]%*c", &texto);
    if(strlen(texto) > 80)
        printf("NO");
    else
        printf("YES");
    printf("\n");
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    char texto[503];
    scanf("%[^\n]%*c", &texto);
    if(strlen(texto) > 80)
        printf("NO");
    else
        printf("YES");
    printf("\n");
    return 0;
}
>>>>>>> refs/remotes/origin/master
