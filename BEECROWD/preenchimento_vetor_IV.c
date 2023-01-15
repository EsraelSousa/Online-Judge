<<<<<<< HEAD
#include <stdio.h>
int main(){
    int vetor[15],vet_par[5], vet_impa[5];
    int i, cont_par=0, cont_impa=0,j=0,k=0;
    for(i=0;i<15;i++){
        scanf("%d", &vetor[i]);
        if(vetor[i]%2==0){
            vet_par[j]=vetor[i];
            cont_par++;
            j++;
        }
        if(vetor[i]%2!=0) {
            vet_par[k]=vetor[i];
            cont_impa++;
            k++;
        }
        if(cont_par==5){
            for(j=0;j<5;j++)
                printf("par[%d] = %d\n", j,vet_par[j]);
            cont_par=0;
            j=0;
        }
        if(cont_impa==5){
            for(k=0;k<5;k++)
                printf("impar[%d] = %d\n", k,vet_impa[k]);
            cont_impa=0;
            k=0;

        }
    }
    for(j=0;j<cont_par;j++)
        printf("par[%d] = %d\n", j,vet_par[j]);
    for(j=0;j<cont_impa;j++)
        printf("par[%d] = %d\n", j,vet_impa[j]);
    return 0;
}
=======
#include <stdio.h>
int main(){
    int vetor[15],vet_par[5], vet_impa[5];
    int i, cont_par=0, cont_impa=0,j=0,k=0;
    for(i=0;i<15;i++){
        scanf("%d", &vetor[i]);
        if(vetor[i]%2==0){
            vet_par[j]=vetor[i];
            cont_par++;
            j++;
        }
        if(vetor[i]%2!=0) {
            vet_par[k]=vetor[i];
            cont_impa++;
            k++;
        }
        if(cont_par==5){
            for(j=0;j<5;j++)
                printf("par[%d] = %d\n", j,vet_par[j]);
            cont_par=0;
            j=0;
        }
        if(cont_impa==5){
            for(k=0;k<5;k++)
                printf("impar[%d] = %d\n", k,vet_impa[k]);
            cont_impa=0;
            k=0;

        }
    }
    for(j=0;j<cont_par;j++)
        printf("par[%d] = %d\n", j,vet_par[j]);
    for(j=0;j<cont_impa;j++)
        printf("par[%d] = %d\n", j,vet_impa[j]);
    return 0;
}
>>>>>>> refs/remotes/origin/master
