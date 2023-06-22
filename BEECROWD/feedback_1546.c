#include <stdio.h>

int main(){
    int qtd_teste, num_feed, feed, i,  j;
    scanf("%d", &qtd_teste);
    for(i=0;i<qtd_teste;i++){
        scanf("%d", &num_feed);
        for(j=0;j<num_feed;j++){
            scanf("%d", &feed);
            if(feed==1)
                printf("Rolien\n");
            else if(feed==2)
                printf("Naej\n");
            else if(feed==3)
                printf("Elehcim\n");
            else
                printf("Odranoel\n");
        }
    }
    return 0;
}
