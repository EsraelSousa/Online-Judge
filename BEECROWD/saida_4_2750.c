<<<<<<< HEAD
#include <stdio.h>

int main(){
    int i, k=0;
    int valores[16];
    for(i=0;i<16;i++)
        valores[i]=i;

    for(i=0;i<39;i++)
        printf("-");
    printf("\n");

    for(i=0;i<39;i++){
        if(i==0 || i==12 || i==22 || i==38)
            printf("|");
        else if(i==3){
            printf("decimal");
            i=9;
        }
        else if(i==15){
            printf("octal");
            i=19;
        }
        else if(i==25){
            printf("Hexadecimal");
            i=35;
        }
        else
            printf(" ");
    }
    printf("\n");

    for(i=0;i<39;i++)
        printf("-");
    printf("\n");

    for(k=0;k<16;k++){
        for(i=0;i<39;i++){
        if(i==0 || i==12 || i==22 || i==38)
            printf("|");
        else if(i==7 && k<10)
            printf("%d", valores[k]);
        else if(i==7 && k>9)
            continue;
        else if(i==6 && k>9){
            printf("%d", valores[k]);
        }
        else if(i==17 && k<8)
            printf("%o", valores[k]);
        else if(i==17 && k>7)
            continue;
        else if(i==16 && k>7){
            printf("%o", valores[k]);
        }
        else if(i==30)
            printf("%X", valores[k]);
        else
            printf(" ");
    }
    printf("\n");
    }


    for(i=0;i<39;i++)
        printf("-");
    printf("\n");
}
=======
#include <stdio.h>

int main(){
    int i, k=0;
    int valores[16];
    for(i=0;i<16;i++)
        valores[i]=i;

    for(i=0;i<39;i++)
        printf("-");
    printf("\n");

    for(i=0;i<39;i++){
        if(i==0 || i==12 || i==22 || i==38)
            printf("|");
        else if(i==3){
            printf("decimal");
            i=9;
        }
        else if(i==15){
            printf("octal");
            i=19;
        }
        else if(i==25){
            printf("Hexadecimal");
            i=35;
        }
        else
            printf(" ");
    }
    printf("\n");

    for(i=0;i<39;i++)
        printf("-");
    printf("\n");

    for(k=0;k<16;k++){
        for(i=0;i<39;i++){
        if(i==0 || i==12 || i==22 || i==38)
            printf("|");
        else if(i==7 && k<10)
            printf("%d", valores[k]);
        else if(i==7 && k>9)
            continue;
        else if(i==6 && k>9){
            printf("%d", valores[k]);
        }
        else if(i==17 && k<8)
            printf("%o", valores[k]);
        else if(i==17 && k>7)
            continue;
        else if(i==16 && k>7){
            printf("%o", valores[k]);
        }
        else if(i==30)
            printf("%X", valores[k]);
        else
            printf(" ");
    }
    printf("\n");
    }


    for(i=0;i<39;i++)
        printf("-");
    printf("\n");
}
>>>>>>> refs/remotes/origin/master
