<<<<<<< HEAD
#include <stdio.h>

long long int fat_de_n(int n);

int main(){
    int num1, num2;

    while(scanf("%d %d", &num1, &num2)!=EOF){
        printf("%llu\n", fat_de_n(num1)+fat_de_n(num2));
    }
}

long long int fat_de_n(int n){
    if(n==0)
        return 1;
    else
        return n*fat_de_n(n-1);
}
=======
#include <stdio.h>

long long int fat_de_n(int n);

int main(){
    int num1, num2;

    while(scanf("%d %d", &num1, &num2)!=EOF){
        printf("%llu\n", fat_de_n(num1)+fat_de_n(num2));
    }
}

long long int fat_de_n(int n){
    if(n==0)
        return 1;
    else
        return n*fat_de_n(n-1);
}
>>>>>>> refs/remotes/origin/master
