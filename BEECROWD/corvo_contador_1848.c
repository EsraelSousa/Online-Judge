<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int verifica_o_numero_em_binario(char *codigo);

int main(){
    int cont_num=0, num1=0,num2=0,num3=0, valor, i;
    char respota_corvo[10];
    for(i=0;i<10;i++)
        respota_corvo[i]='\0';
    while(cont_num<3){
        scanf("%[^\n]%*c", respota_corvo);
        if(strcmp(respota_corvo, "caw caw")!=0){
            if(cont_num==0)
                num1=num1+verifica_o_numero_em_binario(respota_corvo);
            else if(cont_num==1)
                num2=num2+verifica_o_numero_em_binario(respota_corvo);
            else if(cont_num==2)
                num3=num3+verifica_o_numero_em_binario(respota_corvo);
        }else
            cont_num++;
    }
    printf("%d\n%d\n%d", num1, num2, num3);
    printf("\n");
    return 0;
}

int verifica_o_numero_em_binario(char *codigo){
    if(strcmp(codigo, "---")==0)
        return 0;
    else if(strcmp(codigo, "--*")==0)
        return 1;
    else if(strcmp(codigo, "-*-")==0)
        return 2;
    else if(strcmp(codigo, "-**")==0)
        return 3;
    else if(strcmp(codigo, "*--")==0)
        return 4;
    else if(strcmp(codigo, "*-*")==0)
        return 5;
    else if(strcmp(codigo, "**-")==0)
        return 6;
    else
        return 7;
    }
=======
#include <stdio.h>
#include <string.h>

int verifica_o_numero_em_binario(char *codigo);

int main(){
    int cont_num=0, num1=0,num2=0,num3=0, valor, i;
    char respota_corvo[10];
    for(i=0;i<10;i++)
        respota_corvo[i]='\0';
    while(cont_num<3){
        scanf("%[^\n]%*c", respota_corvo);
        if(strcmp(respota_corvo, "caw caw")!=0){
            if(cont_num==0)
                num1=num1+verifica_o_numero_em_binario(respota_corvo);
            else if(cont_num==1)
                num2=num2+verifica_o_numero_em_binario(respota_corvo);
            else if(cont_num==2)
                num3=num3+verifica_o_numero_em_binario(respota_corvo);
        }else
            cont_num++;
    }
    printf("%d\n%d\n%d", num1, num2, num3);
    printf("\n");
    return 0;
}

int verifica_o_numero_em_binario(char *codigo){
    if(strcmp(codigo, "---")==0)
        return 0;
    else if(strcmp(codigo, "--*")==0)
        return 1;
    else if(strcmp(codigo, "-*-")==0)
        return 2;
    else if(strcmp(codigo, "-**")==0)
        return 3;
    else if(strcmp(codigo, "*--")==0)
        return 4;
    else if(strcmp(codigo, "*-*")==0)
        return 5;
    else if(strcmp(codigo, "**-")==0)
        return 6;
    else
        return 7;
    }
>>>>>>> refs/remotes/origin/master
