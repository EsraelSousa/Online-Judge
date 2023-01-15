<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <math.h>

void exibe_propriedades(char *ano);
int verifica_digito(char c);
int converte_char_inteiro(char c1, char c2, char c3, char c4);

int main(){
	char ano[1300];
	int cont=0;
	while(scanf("%s", ano) != EOF){
		if(cont==1)
			printf("\n");
		exibe_propriedades(ano);
		cont=1;
	}
	return 0;
}

void exibe_propriedades(char *ano){
	int tam, n, final, i;
	long long int soma3=0, soma11=0;
	tam=strlen(ano);
	final=converte_char_inteiro(ano[tam-4], ano[tam-3], ano[tam-2], ano[tam-1]);
	for(i=tam-1;i>=0;i--){
		n=verifica_digito(ano[i]);
		soma3+=n;
		if((tam-i)%2==0)
			soma11+=n;
		else
			soma11-=n;
	}
	//printf("final: %d\nsoma3: %lld\nsoma11: %lld\n", final, soma3, soma11);
	n=final%10;
	if(final%100>0)
		final=final%100;
	else
		final=final/100;
	//printf("f %d\n", final);
	if(final%4==0)
		printf("This is leap year.\n");
	if(soma3%3==0 && (n==0 || n==5))
		printf("This is huluculu festival year.\n");
	if(final%4==0 && soma11%11==0 && (n==0 || n==5))
		printf("This is bulukulu festival year.\n");
	if(final%4>0 && ((soma3%3>0 && (n==0 || n==5)) || (soma3%3==0 && (n!=0 && n!=5)) || (soma3%3!=0 && (n!=0 && n!=5))))
		printf("This is an ordinary year.\n");
}

int verifica_digito(char c){
    switch (c){
        case '0': return 0;
        break;
        case '1': return 1;
        break;
        case '2': return 2;
        break;
        case '3': return 3;
        break;
        case '4': return 4;
        break;
        case '5': return 5;
        break;
        case '6': return 6;
        break;
        case '7': return 7;
        break;
        case '8': return 8;
        break;
        case '9': return 9;
        break;
        default: return NULL;
    }
}
int converte_char_inteiro(char c1, char c2, char c3, char c4){
    int num=0;
    num=verifica_digito(c1)*1000+verifica_digito(c2)*100+verifica_digito(c3)*10+verifica_digito(c4)*1;
    //printf("num: %d\n", num);
    return num;
}
=======
#include <stdio.h>
#include <string.h>
#include <math.h>

void exibe_propriedades(char *ano);
int verifica_digito(char c);
int converte_char_inteiro(char c1, char c2, char c3, char c4);

int main(){
	char ano[1300];
	int cont=0;
	while(scanf("%s", ano) != EOF){
		if(cont==1)
			printf("\n");
		exibe_propriedades(ano);
		cont=1;
	}
	return 0;
}

void exibe_propriedades(char *ano){
	int tam, n, final, i;
	long long int soma3=0, soma11=0;
	tam=strlen(ano);
	final=converte_char_inteiro(ano[tam-4], ano[tam-3], ano[tam-2], ano[tam-1]);
	for(i=tam-1;i>=0;i--){
		n=verifica_digito(ano[i]);
		soma3+=n;
		if((tam-i)%2==0)
			soma11+=n;
		else
			soma11-=n;
	}
	//printf("final: %d\nsoma3: %lld\nsoma11: %lld\n", final, soma3, soma11);
	n=final%10;
	if(final%100>0)
		final=final%100;
	else
		final=final/100;
	//printf("f %d\n", final);
	if(final%4==0)
		printf("This is leap year.\n");
	if(soma3%3==0 && (n==0 || n==5))
		printf("This is huluculu festival year.\n");
	if(final%4==0 && soma11%11==0 && (n==0 || n==5))
		printf("This is bulukulu festival year.\n");
	if(final%4>0 && ((soma3%3>0 && (n==0 || n==5)) || (soma3%3==0 && (n!=0 && n!=5)) || (soma3%3!=0 && (n!=0 && n!=5))))
		printf("This is an ordinary year.\n");
}

int verifica_digito(char c){
    switch (c){
        case '0': return 0;
        break;
        case '1': return 1;
        break;
        case '2': return 2;
        break;
        case '3': return 3;
        break;
        case '4': return 4;
        break;
        case '5': return 5;
        break;
        case '6': return 6;
        break;
        case '7': return 7;
        break;
        case '8': return 8;
        break;
        case '9': return 9;
        break;
        default: return NULL;
    }
}
int converte_char_inteiro(char c1, char c2, char c3, char c4){
    int num=0;
    num=verifica_digito(c1)*1000+verifica_digito(c2)*100+verifica_digito(c3)*10+verifica_digito(c4)*1;
    //printf("num: %d\n", num);
    return num;
}
>>>>>>> refs/remotes/origin/master
