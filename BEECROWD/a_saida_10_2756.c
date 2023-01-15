<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

void passo1();
void passo2();
void passo3();
void passo4();
void passo5();

int main(){
    passo1();
    passo2();
    passo3();
    passo4();
    passo5();
    passo4();
    passo3();
    passo2();
    passo1();
    return 0;
}

void passo1(){
   int i;
    for(i=0;i<8;i++){
        if(i==7)
            printf("A\n");
        else
            printf(" ");
    }
}

void passo2(){
    int i;
    for(i=0;i<9;i++){
        if(i==6 || i==8)
            printf("B");
        else
            printf(" ");
    }
    printf("\n");
}

void passo3(){
    int i;
    for(i=0;i<10;i++){
        if(i==5 || i==9)
            printf("C");
        else
            printf(" ");
    }
    printf("\n");
}

void passo4(){
    int i;
    for(i=0;i<11;i++){
        if(i==4 || i==10)
            printf("D");
        else
            printf(" ");
    }
    printf("\n");
}

void passo5(){
    int i;
    for(i=0;i<12;i++){
        if(i==3 || i==11)
            printf("E");
        else
            printf(" ");
    }
    printf("\n");
}
=======
#include <stdio.h>
#include <string.h>

void passo1();
void passo2();
void passo3();
void passo4();
void passo5();

int main(){
    passo1();
    passo2();
    passo3();
    passo4();
    passo5();
    passo4();
    passo3();
    passo2();
    passo1();
    return 0;
}

void passo1(){
   int i;
    for(i=0;i<8;i++){
        if(i==7)
            printf("A\n");
        else
            printf(" ");
    }
}

void passo2(){
    int i;
    for(i=0;i<9;i++){
        if(i==6 || i==8)
            printf("B");
        else
            printf(" ");
    }
    printf("\n");
}

void passo3(){
    int i;
    for(i=0;i<10;i++){
        if(i==5 || i==9)
            printf("C");
        else
            printf(" ");
    }
    printf("\n");
}

void passo4(){
    int i;
    for(i=0;i<11;i++){
        if(i==4 || i==10)
            printf("D");
        else
            printf(" ");
    }
    printf("\n");
}

void passo5(){
    int i;
    for(i=0;i<12;i++){
        if(i==3 || i==11)
            printf("E");
        else
            printf(" ");
    }
    printf("\n");
}
>>>>>>> refs/remotes/origin/master
