<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, cont_acerto=0, i;
    char txt[9];
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%[^\n]%*c", txt);
        if(strcmp(txt, "F E C A")==0 || strcmp(txt, "A C E F")==0)
            cont_acerto++;
        if(strcmp(txt, "F A C E")==0 || strcmp(txt, "E C A F")==0)
            cont_acerto++;
    }
    printf("%d\n", cont_acerto);
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(){
    int qtd_teste, cont_acerto=0, i;
    char txt[9];
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%[^\n]%*c", txt);
        if(strcmp(txt, "F E C A")==0 || strcmp(txt, "A C E F")==0)
            cont_acerto++;
        if(strcmp(txt, "F A C E")==0 || strcmp(txt, "E C A F")==0)
            cont_acerto++;
    }
    printf("%d\n", cont_acerto);
    return 0;
}
>>>>>>> refs/remotes/origin/master
