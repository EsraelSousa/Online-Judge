<<<<<<< HEAD
#include <cstdio>

int  main(){
    int quadrado[3][3], somas[8], soma_max=0, corre=0, aux, i, j;
    for(i=0;i<8;i++){
        somas[i]=0;
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d%*c", &quadrado[i][j]);
            if(quadrado[i][j] != 0)
                aux=quadrado[i][j];
            somas[i]+=quadrado[i][j];
            somas[j+3]+=quadrado[i][j];
            if(i==j)
                somas[6]+=quadrado[i][j];
            if(i+j==2)
                somas[7]+=quadrado[i][j];
            if(somas[i] > soma_max)
                soma_max=somas[i];
            if(somas[j+3] > soma_max)
                soma_max=somas[j+3];
            if(somas[6] > soma_max)
                soma_max=somas[6];
            if(somas[7] > soma_max)
                soma_max=somas[7];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        	if(quadrado[i][j]!=0 && quadrado[i][j]!=aux)
            	corre=1;
        }
    }
    if(quadrado[0][0]==0 && quadrado[1][1]==0 && quadrado[2][2]==0 && corre==1){
    	soma_max=quadrado[0][1]+quadrado[2][1];
    	soma_max+=(7*soma_max-quadrado[0][1]-quadrado[0][2]-quadrado[1][2]-quadrado[1][0]-quadrado[2][0]-quadrado[2][1])/8;
    }
    if(quadrado[0][2]==0 && quadrado[1][1]==0 && quadrado[2][0]==0 && corre==1){
    	soma_max=quadrado[0][1]+quadrado[2][1];
    	soma_max+=(7*soma_max-quadrado[0][1]-quadrado[0][0]-quadrado[1][0]-quadrado[1][2]-quadrado[2][2]-quadrado[2][1])/8;
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(corre==0){
                printf("%d", aux);
            }else{
                if(quadrado[i][j] != 0)
                    printf("%d", quadrado[i][j]);

                // linha com  3 zeros
                else if(somas[i]==0)
                    printf("%d", soma_max-somas[j+3]);
                // coluna com  3 zeros
                else if(somas[j+3]==0)
                    printf("%d", soma_max-somas[i]);
                // linha com 2 zeros
                else if(quadrado[i][0]==0 && quadrado[i][1]==0 || quadrado[i][0]==0 && quadrado[i][2]==0 || quadrado[i][1]==0 && quadrado[i][2]==0)
                    printf("%d", soma_max-somas[j+3]);
                // coluna com 2 zeros
                else if(quadrado[0][j]==0 && quadrado[1][j]==0 || quadrado[0][j]==0 && quadrado[2][j]==0 || quadrado[1][j]==0 && quadrado[2][j]==0)
                    printf("%d", soma_max-somas[i]);
                else
                    printf("%d", soma_max-somas[i]);

            }
            if(j<2)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
=======
#include <cstdio>

int  main(){
    int quadrado[3][3], somas[8], soma_max=0, corre=0, aux, i, j;
    for(i=0;i<8;i++){
        somas[i]=0;
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d%*c", &quadrado[i][j]);
            if(quadrado[i][j] != 0)
                aux=quadrado[i][j];
            somas[i]+=quadrado[i][j];
            somas[j+3]+=quadrado[i][j];
            if(i==j)
                somas[6]+=quadrado[i][j];
            if(i+j==2)
                somas[7]+=quadrado[i][j];
            if(somas[i] > soma_max)
                soma_max=somas[i];
            if(somas[j+3] > soma_max)
                soma_max=somas[j+3];
            if(somas[6] > soma_max)
                soma_max=somas[6];
            if(somas[7] > soma_max)
                soma_max=somas[7];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        	if(quadrado[i][j]!=0 && quadrado[i][j]!=aux)
            	corre=1;
        }
    }
    if(quadrado[0][0]==0 && quadrado[1][1]==0 && quadrado[2][2]==0 && corre==1){
    	soma_max=quadrado[0][1]+quadrado[2][1];
    	soma_max+=(7*soma_max-quadrado[0][1]-quadrado[0][2]-quadrado[1][2]-quadrado[1][0]-quadrado[2][0]-quadrado[2][1])/8;
    }
    if(quadrado[0][2]==0 && quadrado[1][1]==0 && quadrado[2][0]==0 && corre==1){
    	soma_max=quadrado[0][1]+quadrado[2][1];
    	soma_max+=(7*soma_max-quadrado[0][1]-quadrado[0][0]-quadrado[1][0]-quadrado[1][2]-quadrado[2][2]-quadrado[2][1])/8;
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(corre==0){
                printf("%d", aux);
            }else{
                if(quadrado[i][j] != 0)
                    printf("%d", quadrado[i][j]);

                // linha com  3 zeros
                else if(somas[i]==0)
                    printf("%d", soma_max-somas[j+3]);
                // coluna com  3 zeros
                else if(somas[j+3]==0)
                    printf("%d", soma_max-somas[i]);
                // linha com 2 zeros
                else if(quadrado[i][0]==0 && quadrado[i][1]==0 || quadrado[i][0]==0 && quadrado[i][2]==0 || quadrado[i][1]==0 && quadrado[i][2]==0)
                    printf("%d", soma_max-somas[j+3]);
                // coluna com 2 zeros
                else if(quadrado[0][j]==0 && quadrado[1][j]==0 || quadrado[0][j]==0 && quadrado[2][j]==0 || quadrado[1][j]==0 && quadrado[2][j]==0)
                    printf("%d", soma_max-somas[i]);
                else
                    printf("%d", soma_max-somas[i]);

            }
            if(j<2)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
