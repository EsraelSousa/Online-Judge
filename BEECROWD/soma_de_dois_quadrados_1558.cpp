<<<<<<< HEAD
#include <cstdio>

int main(){
    int posibi[100], i, j, num=, flag;
    for(i=1; i<=100; i++)
        posibi[i-1]=i*i;
    while(scanf("%d", &num) == 1){
        flag=0;
        if(num>=0){
            for(i=0; i<100; i++){
                if(posibi[i]==num){
                    flag=1;
                    break;
                }
                if(posibi[i]*2 > num)
                    break;
                for(j=i; j<100; j++){
                    if(posibi[i]+posibi[j]== num)
                        flag=1;
                    if(flag==1 || posibi[i]+posibi[j]> num)
                        break;
                }
            }
        }
        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");
        num++;
    }
    return 0;
}
=======
#include <cstdio>

int main(){
    int posibi[100], i, j, num=, flag;
    for(i=1; i<=100; i++)
        posibi[i-1]=i*i;
    while(scanf("%d", &num) == 1){
        flag=0;
        if(num>=0){
            for(i=0; i<100; i++){
                if(posibi[i]==num){
                    flag=1;
                    break;
                }
                if(posibi[i]*2 > num)
                    break;
                for(j=i; j<100; j++){
                    if(posibi[i]+posibi[j]== num)
                        flag=1;
                    if(flag==1 || posibi[i]+posibi[j]> num)
                        break;
                }
            }
        }
        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");
        num++;
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
