<<<<<<< HEAD
#include <stdio.h>

int main(){
    int posicao_kung, posicao_lu;
    scanf("%d %d", &posicao_kung, &posicao_lu);
    if((posicao_kung<=8 && posicao_lu>=9) || (posicao_lu<=8 && posicao_kung>=9))
        printf("final\n");
    else if((posicao_kung<=4 && posicao_lu>=5 && posicao_lu<=8) || (posicao_lu<=4 && posicao_kung>=5 && posicao_kung<=8))
        printf("semifinal\n");
    else if((posicao_kung>=9 && posicao_kung<=12 && posicao_lu>=13 && posicao_lu<=16) || (posicao_lu>=9 && posicao_lu<=12 && posicao_kung>=13 && posicao_kung<=16))
        printf("semifinal\n");
    else if(((posicao_kung==1 || posicao_kung==2) && (posicao_lu==3 || posicao_lu==4)) || ((posicao_kung==3 || posicao_kung==4) && (posicao_lu==1 || posicao_lu==2)))
        printf("quartas\n");
    else if(((posicao_kung==5 || posicao_kung==6) && (posicao_lu==7 || posicao_lu==8)) || ((posicao_kung==7 || posicao_kung==8) && (posicao_lu==5 || posicao_lu==6)))
        printf("quartas\n");
    else if(((posicao_kung==9 || posicao_kung==10) && (posicao_lu==11 || posicao_lu==12)) || ((posicao_kung==11 || posicao_kung==12) && (posicao_lu==9 || posicao_lu==10)))
        printf("quartas\n");
    else if(((posicao_kung==13 || posicao_kung==14) && (posicao_lu==15 || posicao_lu==16)) || ((posicao_kung==16 || posicao_kung==15) && (posicao_lu==13 || posicao_lu==14)))
        printf("quartas\n");
    else
        printf("oitavas\n");

    return 0;
}
=======
#include <stdio.h>

int main(){
    int posicao_kung, posicao_lu;
    scanf("%d %d", &posicao_kung, &posicao_lu);
    if((posicao_kung<=8 && posicao_lu>=9) || (posicao_lu<=8 && posicao_kung>=9))
        printf("final\n");
    else if((posicao_kung<=4 && posicao_lu>=5 && posicao_lu<=8) || (posicao_lu<=4 && posicao_kung>=5 && posicao_kung<=8))
        printf("semifinal\n");
    else if((posicao_kung>=9 && posicao_kung<=12 && posicao_lu>=13 && posicao_lu<=16) || (posicao_lu>=9 && posicao_lu<=12 && posicao_kung>=13 && posicao_kung<=16))
        printf("semifinal\n");
    else if(((posicao_kung==1 || posicao_kung==2) && (posicao_lu==3 || posicao_lu==4)) || ((posicao_kung==3 || posicao_kung==4) && (posicao_lu==1 || posicao_lu==2)))
        printf("quartas\n");
    else if(((posicao_kung==5 || posicao_kung==6) && (posicao_lu==7 || posicao_lu==8)) || ((posicao_kung==7 || posicao_kung==8) && (posicao_lu==5 || posicao_lu==6)))
        printf("quartas\n");
    else if(((posicao_kung==9 || posicao_kung==10) && (posicao_lu==11 || posicao_lu==12)) || ((posicao_kung==11 || posicao_kung==12) && (posicao_lu==9 || posicao_lu==10)))
        printf("quartas\n");
    else if(((posicao_kung==13 || posicao_kung==14) && (posicao_lu==15 || posicao_lu==16)) || ((posicao_kung==16 || posicao_kung==15) && (posicao_lu==13 || posicao_lu==14)))
        printf("quartas\n");
    else
        printf("oitavas\n");

    return 0;
}
>>>>>>> refs/remotes/origin/master
