<<<<<<< HEAD
#include <stdio.h>
int tempo_de_sono(int h1, int m1, int h2, int m2)
{
    int t;
    if (h1==h2 && m2>m1){
       t=m2-m1;
       return t;
    }
    if (h1==h2 && m2==m1){
        return  1440;
    }
    if (h1==h2 && m1>m2){
        t= 1440 - (m1-m2);
        return t;
    }
    if (h2>h1 && m1>m2){
        t= ((h2-h1)*60)-(m1-m2);
        return t;
    }
    if (h2>h1 && m2==m1){
        t=(h2-h1)*60;
        return t;
    }
    if (h2>h1 && m2>m1){
        t= ((h2-h1)*60)+(m2-m1);
        return t;
    }
    if (h2<h1 && m2>m1){
        t=(((24-h1)+h2)*60)+(m2-m1);
        return t;
    }
    if (h2<h1 && m2==m1){
        t=(((24-h1)+h2)*60);
        return t;
    }
    if (h2<h1 && m2<m1){
        t=(((24-h1)+h2)*60)+(m2-m1);
        return t;
    }
}
int main (){
    int h1,m1,h2,m2;
    do{
        scanf ("%d %d", &h1, &m1);
        scanf ("%d %d", &h2, &m2);
        if((h1==0 && m1!=0 && h2!=0 && m2!=0) || (h1!=0 && m1==0 && h2!=0 && m2!=0) || (h1!=0 && m1!=0 && h2==0 && m2!=0) || (h1!=0 && m1!=0 && h2!=0 && m2==0) || (h1!=0 && m1!=0 && h2!=0 && m2!=0))
            printf("%d\n", tempo_de_sono(h1, m1, h2, m2));
    }while((h1==0 && m1!=0 && h2!=0 && m2!=0) || (h1!=0 && m1==0 && h2!=0 && m2!=0) || (h1!=0 && m1!=0 && h2==0 && m2!=0) || (h1!=0 && m1!=0 && h2!=0 && m2==0) || (h1!=0 && m1!=0 && h2!=0 && m2!=0));
}
=======
#include <stdio.h>
int tempo_de_sono(int h1, int m1, int h2, int m2)
{
    int t;
    if (h1==h2 && m2>m1){
       t=m2-m1;
       return t;
    }
    if (h1==h2 && m2==m1){
        return  1440;
    }
    if (h1==h2 && m1>m2){
        t= 1440 - (m1-m2);
        return t;
    }
    if (h2>h1 && m1>m2){
        t= ((h2-h1)*60)-(m1-m2);
        return t;
    }
    if (h2>h1 && m2==m1){
        t=(h2-h1)*60;
        return t;
    }
    if (h2>h1 && m2>m1){
        t= ((h2-h1)*60)+(m2-m1);
        return t;
    }
    if (h2<h1 && m2>m1){
        t=(((24-h1)+h2)*60)+(m2-m1);
        return t;
    }
    if (h2<h1 && m2==m1){
        t=(((24-h1)+h2)*60);
        return t;
    }
    if (h2<h1 && m2<m1){
        t=(((24-h1)+h2)*60)+(m2-m1);
        return t;
    }
}
int main (){
    int h1,m1,h2,m2;
    do{
        scanf ("%d %d", &h1, &m1);
        scanf ("%d %d", &h2, &m2);
        if((h1==0 && m1!=0 && h2!=0 && m2!=0) || (h1!=0 && m1==0 && h2!=0 && m2!=0) || (h1!=0 && m1!=0 && h2==0 && m2!=0) || (h1!=0 && m1!=0 && h2!=0 && m2==0) || (h1!=0 && m1!=0 && h2!=0 && m2!=0))
            printf("%d\n", tempo_de_sono(h1, m1, h2, m2));
    }while((h1==0 && m1!=0 && h2!=0 && m2!=0) || (h1!=0 && m1==0 && h2!=0 && m2!=0) || (h1!=0 && m1!=0 && h2==0 && m2!=0) || (h1!=0 && m1!=0 && h2!=0 && m2==0) || (h1!=0 && m1!=0 && h2!=0 && m2!=0));
}
>>>>>>> refs/remotes/origin/master
