<<<<<<< HEAD
#include <cstdio>

int main(){
	int qtd_teste, qtd_nota=1,nota_max, seq_max, cont, caso=1,i;
	int notas[100005];
	scanf("%d", &qtd_teste);
	for(; caso<=qtd_teste; caso++){
        seq_max=0, cont=0, nota_max=0;
        scanf("%d", &qtd_nota);
        for(i=0; i<qtd_nota; i++){
            scanf("%d", &notas[i]);
            if(notas[i] > nota_max)
                nota_max=notas[i];
        }
        for(i=0; i<qtd_nota; i++){
            if(notas[i]==nota_max)
                cont++;
            else{
                if(cont > seq_max)
                    seq_max=cont;
                cont=0;
            }
        }
        if(cont > seq_max && notas[i-1]==nota_max)
        seq_max=cont;
        printf("Caso #%d: %d\n", caso, seq_max);
	}
	return 0;
}

=======
#include <cstdio>

int main(){
	int qtd_teste, qtd_nota=1,nota_max, seq_max, cont, caso=1,i;
	int notas[100005];
	scanf("%d", &qtd_teste);
	for(; caso<=qtd_teste; caso++){
        seq_max=0, cont=0, nota_max=0;
        scanf("%d", &qtd_nota);
        for(i=0; i<qtd_nota; i++){
            scanf("%d", &notas[i]);
            if(notas[i] > nota_max)
                nota_max=notas[i];
        }
        for(i=0; i<qtd_nota; i++){
            if(notas[i]==nota_max)
                cont++;
            else{
                if(cont > seq_max)
                    seq_max=cont;
                cont=0;
            }
        }
        if(cont > seq_max && notas[i-1]==nota_max)
        seq_max=cont;
        printf("Caso #%d: %d\n", caso, seq_max);
	}
	return 0;
}

>>>>>>> refs/remotes/origin/master
