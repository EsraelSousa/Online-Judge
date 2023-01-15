<<<<<<< HEAD
#include <cstdio>
#include <cstring>

int main(){
    int qtd_pal;
    char pal[10005][25];
    scanf("%d", &qtd_pal);
    for(int i=0; i<qtd_pal; i++)
        scanf("%s", pal[i]);
    for(int i=0; i<qtd_pal; i++){
        if(strlen(pal[i])==3 &&(pal[i][0]=='O' && pal[i][1]=='B'))
            pal[i][2]='I';
        if(strlen(pal[i])==3 &&(pal[i][0]=='U' && pal[i][1]=='R'))
            pal[i][2]='I';
        if(i==0)
            printf("%s", pal[i]);
        else
            printf(" %s", pal[i]);
    }
    printf("\n");
    return 0;
}

=======
#include <cstdio>
#include <cstring>

int main(){
    int qtd_pal;
    char pal[10005][25];
    scanf("%d", &qtd_pal);
    for(int i=0; i<qtd_pal; i++)
        scanf("%s", pal[i]);
    for(int i=0; i<qtd_pal; i++){
        if(strlen(pal[i])==3 &&(pal[i][0]=='O' && pal[i][1]=='B'))
            pal[i][2]='I';
        if(strlen(pal[i])==3 &&(pal[i][0]=='U' && pal[i][1]=='R'))
            pal[i][2]='I';
        if(i==0)
            printf("%s", pal[i]);
        else
            printf(" %s", pal[i]);
    }
    printf("\n");
    return 0;
}

>>>>>>> refs/remotes/origin/master
