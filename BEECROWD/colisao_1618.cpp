<<<<<<< HEAD
#include <cstdio>

int main(){
    int qtd_teste, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Rx, Ry;
    scanf("%d", &qtd_teste);
    for(i=0; i<qtd_teste; i++){
        scanf("%d %d %d %d %d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy, &Dx, &Dy, &Rx, &Ry);
        if(Rx >= Ax && Rx <= Bx && Ry >= Ay && Ry <= Dy)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
=======
#include <cstdio>

int main(){
    int qtd_teste, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Rx, Ry;
    scanf("%d", &qtd_teste);
    for(i=0; i<qtd_teste; i++){
        scanf("%d %d %d %d %d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy, &Dx, &Dy, &Rx, &Ry);
        if(Rx >= Ax && Rx <= Bx && Ry >= Ay && Ry <= Dy)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
