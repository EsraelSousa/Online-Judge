<<<<<<< HEAD
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

void entrada_binaria(string &num);
void entrada_decimal(string &num);
void entrada_hexadecimal(string &num);

int main(){
	string numero, base;
	int qtd_caso, caso;
	cin >> qtd_caso;
	for(caso=1;caso<=qtd_caso;caso++){
		cin >> numero >> base;
		cout << "Case " << caso << ":" << endl;
		if(base == "bin")
			entrada_binaria(numero);
		else if(base == "dec")
			entrada_decimal(numero);
		else
			entrada_hexadecimal(numero);
	}
	return 0;
}

void entrada_binaria(string &num){
	long long numero=0;
	int tam=num.size(), i;
	for(i=0;i<tam;i++){
		if(num[i]=='1')
			numero+=pow(2, tam-1-i);
	}
	printf("%lld dec\n%x hex\n\n", numero, numero);
}

void entrada_decimal(string &num){
	long long numero=0;
	char binario[1000];
	int tam=num.size(), i;
	for(i=0;i<tam;i++){
        numero+=(long long)(num[i]-48)*(pow(10, tam-1-i));
	}
	printf("%x hex\n", numero);
	for(i=0;numero > 0; i++){
        if(numero%2==0)
            binario[i]='0';
        else
            binario[i]='1';
        numero/=2;
	}
	for(i--; i>=0; i--)
        printf("%c", binario[i]);
    printf(" bin\n\n");
}

void entrada_hexadecimal(string &num){
	long long numero=0;
	char binario[1000];
	int tam=num.size(), i;
	for(i=0;i<tam;i++){
		if(num[i]=='a' || num[i]=='A')
			numero+=10*pow(16, tam-1-i);
		else if(num[i]=='b' || num[i]=='B')
			numero+=11*pow(16, tam-1-i);
		else if(num[i]=='c' || num[i]=='C')
			numero+=12*pow(16, tam-1-i);
		else if(num[i]=='d' || num[i]=='D')
			numero+=13*pow(16, tam-1-i);
		else if(num[i]=='e' || num[i]=='E')
			numero+=14*pow(16, tam-1-i);
		else if(num[i]=='f' || num[i]=='F')
			numero+=15*pow(16, tam-1-i);
		else
			numero+=(num[i]-48)*pow(16, tam-1-i);
	}
	printf("%lld dec\n", numero);
	for(i=0;numero > 0; i++){
        if(numero%2==0)
            binario[i]='0';
        else
            binario[i]='1';
        numero/=2;
	}
	for(i--; i>=0; i--)
        printf("%c", binario[i]);
    printf(" bin\n\n");
}
=======
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

void entrada_binaria(string &num);
void entrada_decimal(string &num);
void entrada_hexadecimal(string &num);

int main(){
	string numero, base;
	int qtd_caso, caso;
	cin >> qtd_caso;
	for(caso=1;caso<=qtd_caso;caso++){
		cin >> numero >> base;
		cout << "Case " << caso << ":" << endl;
		if(base == "bin")
			entrada_binaria(numero);
		else if(base == "dec")
			entrada_decimal(numero);
		else
			entrada_hexadecimal(numero);
	}
	return 0;
}

void entrada_binaria(string &num){
	long long numero=0;
	int tam=num.size(), i;
	for(i=0;i<tam;i++){
		if(num[i]=='1')
			numero+=pow(2, tam-1-i);
	}
	printf("%lld dec\n%x hex\n\n", numero, numero);
}

void entrada_decimal(string &num){
	long long numero=0;
	char binario[1000];
	int tam=num.size(), i;
	for(i=0;i<tam;i++){
        numero+=(long long)(num[i]-48)*(pow(10, tam-1-i));
	}
	printf("%x hex\n", numero);
	for(i=0;numero > 0; i++){
        if(numero%2==0)
            binario[i]='0';
        else
            binario[i]='1';
        numero/=2;
	}
	for(i--; i>=0; i--)
        printf("%c", binario[i]);
    printf(" bin\n\n");
}

void entrada_hexadecimal(string &num){
	long long numero=0;
	char binario[1000];
	int tam=num.size(), i;
	for(i=0;i<tam;i++){
		if(num[i]=='a' || num[i]=='A')
			numero+=10*pow(16, tam-1-i);
		else if(num[i]=='b' || num[i]=='B')
			numero+=11*pow(16, tam-1-i);
		else if(num[i]=='c' || num[i]=='C')
			numero+=12*pow(16, tam-1-i);
		else if(num[i]=='d' || num[i]=='D')
			numero+=13*pow(16, tam-1-i);
		else if(num[i]=='e' || num[i]=='E')
			numero+=14*pow(16, tam-1-i);
		else if(num[i]=='f' || num[i]=='F')
			numero+=15*pow(16, tam-1-i);
		else
			numero+=(num[i]-48)*pow(16, tam-1-i);
	}
	printf("%lld dec\n", numero);
	for(i=0;numero > 0; i++){
        if(numero%2==0)
            binario[i]='0';
        else
            binario[i]='1';
        numero/=2;
	}
	for(i--; i>=0; i--)
        printf("%c", binario[i]);
    printf(" bin\n\n");
}
>>>>>>> refs/remotes/origin/master
