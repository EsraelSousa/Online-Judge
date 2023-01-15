<<<<<<< HEAD
#include <stdio.h>
double res(int n){
     double nu=1.00, de=2.00;
     if(n==0)
         return 0;
     else if(n==1)
         return nu/de;
     else
         return nu/(de+res(n-1));
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%.10lf", 1.00+res(n));
    printf("\n");
}
=======
#include <stdio.h>
double res(int n){
     double nu=1.00, de=2.00;
     if(n==0)
         return 0;
     else if(n==1)
         return nu/de;
     else
         return nu/(de+res(n-1));
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%.10lf", 1.00+res(n));
    printf("\n");
}
>>>>>>> refs/remotes/origin/master
