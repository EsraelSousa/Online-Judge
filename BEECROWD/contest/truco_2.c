#include <stdio.h>
#include <string.h>

int main(){
    int carta[2][4], qtd_teste, i, j, tam;
    carta[0][0]=65, carta[0][1]=74, carta[0][2]=75, carta[0][3]=81, carta[1][0]=0, carta[1][1]=0, carta[1][2]=0, carta[1][3]=0;
    char cartas[1100];
    scanf("%d%*c", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%s", cartas);
        tam=strlen(cartas);
        for(j=0;j<tam;j++){
            if((carta[1][0]>0 && carta[1][1]>0 && carta[1][2]>0 && carta[1][3]>0))
                break;

            if(cartas[j]==carta[0][3])
                carta[1][3]++;

            else if(cartas[j]==carta[0][1] && (carta[1][3]==0))
                continue;

            else if(cartas[j]==carta[0][2] && (carta[1][1]==0 || carta[1][3]==0))
                continue;

            else if(cartas[j]==carta[0][0] && (carta[1][1]==0 || carta[1][2]==0 || carta[1][3]==0))
                continue;

            else if(cartas[j]==carta[0][1] && carta[1][0]==0 && carta[1][2]==0 && carta[1][3]>0)
                carta[1][1]++;

            else if(cartas[j]==carta[0][2] && carta[1][1]>0 && carta[1][0]==0 && carta[1][3]>0)
                carta[1][2]++;

            else if(cartas[j]==carta[0][0] && carta[1][1]>0 && carta[1][2]>0 && carta[1][3]>0)
                carta[1][0]++;

        }
        if(carta[1][0]>0 && carta[1][1]>0 && carta[1][2]>0 && carta[1][3]>0)
            printf("Agora vai\n");
        else
            printf("Agora apertou sem abracar\n");
        carta[1][0]=0, carta[1][1]=0, carta[1][2]=0, carta[1][3]=0;
    }
    return 0;
}
