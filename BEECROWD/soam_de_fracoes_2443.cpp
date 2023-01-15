<<<<<<< HEAD
#include <cstdio>

int mdc_recursivo(int a, int b){
    if(b==0) return a;
    else return mdc_recursivo(b, a%b);
}

int main(){
    int a, b, c, d, mdc; // a/b + c/d
    scanf("%d %d %d %d", &a, &b, &c, &d);
    mdc=mdc_recursivo(d*a+b*c, b*d);
    printf("%d %d\n",(d*a+b*c)/mdc, (d*b)/mdc);
    return 0;
}
=======
#include <cstdio>

int mdc_recursivo(int a, int b){
    if(b==0) return a;
    else return mdc_recursivo(b, a%b);
}

int main(){
    int a, b, c, d, mdc; // a/b + c/d
    scanf("%d %d %d %d", &a, &b, &c, &d);
    mdc=mdc_recursivo(d*a+b*c, b*d);
    printf("%d %d\n",(d*a+b*c)/mdc, (d*b)/mdc);
    return 0;
}
>>>>>>> refs/remotes/origin/master
