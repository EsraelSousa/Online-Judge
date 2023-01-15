#include <stdio.h>
#include <string.h>

int main(){
    int carta[2][4], qtd_teste, i, j, tam;
    carta[0][0]=74, carta[0][1]=65, carta[0][2]=81, carta[0][3]=75, carta[1][0]=0, carta[1][1]=0, carta[1][2]=0, carta[1][3]=0;
    char cartas[1100];
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%s", cartas);
        tam=strlen(cartas);
        for(j=0;j<tam;j++){
            if(cartas[j]==carta[0][0])
                carta[1][0]++;
            else if(cartas[j]==carta[0][1])
                carta[1][1]++;
            else if(cartas[j]==carta[0][2])
                carta[1][2]++;
            else if(cartas[j]==carta[0][3])
                carta[1][3]++;
            else if(carta[1][0]>0 && carta[1][1]>0 && carta[1][2]>0 && carta[1][3]>0)
                break;
        }
        if(carta[1][0]>0 && carta[1][1]>0 && carta[1][2]>0 && carta[1][3]>0)
            printf("Aaah muleke\n");
        else
            printf("Ooo raca viu\n");
        carta[1][0]=0, carta[1][1]=0, carta[1][2]=0, carta[1][3]=0;
    }
    return 0;
}
