#include <stdio.h>
#include <stdlib.h>

// DEFINICOES
#define MAX 300000

// NOVOS TIPOS DE DADOS
typedef struct no {
    int dado;
    struct no* proximo;
} No;

typedef struct {
    No* topo;
    int tamanho;
} Pilha;

// PROTOTIPO FUNCOES
No* criarNo(int dado);
void destruirNo(No* no);
void printNo(No* no);

Pilha* criarPilha();
void destruirPilha(Pilha* pilha);
void imprimirPilha(Pilha* pilha);

int pop(Pilha* pilha);
void push(Pilha* pilha, int dado);

// PROGRAMA PRINCIPAL
int main() {
    //dados
    Pilha* pilhaGrande = criarPilha();
    Pilha* pilhaMedio = criarPilha();
    Pilha* pilhaPequeno = criarPilha();

    int qtd_gigantes,
        tamanho_muralha;
    
    char sequencia_ataque[MAX];

    int tamanho_gigante_pequeno,
        tamanho_gigante_medio,
        tamanho_gigante_grande;

    int qtd_minima_muralhas = 0;

    char tipo_gigante;
    int tamanho_muralha_atual = 0;

    //leitura
    scanf("%d %d", &qtd_gigantes, &tamanho_muralha);
    scanf("%s", sequencia_ataque);
    scanf("%d %d %d", &tamanho_gigante_pequeno, &tamanho_gigante_medio, &tamanho_gigante_grande);

    //processamento
    for (int i = 0; i < qtd_gigantes; i++) {
        tipo_gigante = sequencia_ataque[i];

        switch(tipo_gigante) {
            case 'G':
                if (pilhaGrande->tamanho == 0) {
                    qtd_minima_muralhas++;             
                    tamanho_muralha_atual = tamanho_muralha - tamanho_gigante_grande;
                } else {
                    tamanho_muralha_atual = pop(pilhaGrande) - tamanho_gigante_grande;
                }

                if (tamanho_muralha_atual >= tamanho_gigante_grande)
                    push(pilhaGrande, tamanho_muralha_atual);
                else if (tamanho_muralha_atual >= tamanho_gigante_medio)
                    push(pilhaMedio, tamanho_muralha_atual);
                else if (tamanho_muralha_atual >= tamanho_gigante_pequeno)
                    push(pilhaPequeno, tamanho_muralha_atual);

                break;

            case 'M':
                if (pilhaMedio->tamanho == 0) {
                    if (pilhaGrande->tamanho == 0) {
                        qtd_minima_muralhas++;
                        tamanho_muralha_atual = tamanho_muralha - tamanho_gigante_medio;
                    } else {
                        tamanho_muralha_atual = pop(pilhaGrande) - tamanho_gigante_medio;
                    }
                } else {
                    tamanho_muralha_atual = pop(pilhaMedio) - tamanho_gigante_medio;
                }

                if (tamanho_muralha_atual >= tamanho_gigante_grande)
                    push(pilhaGrande, tamanho_muralha_atual);
                else if (tamanho_muralha_atual >= tamanho_gigante_medio)
                    push(pilhaMedio, tamanho_muralha_atual);
                else if (tamanho_muralha_atual >= tamanho_gigante_pequeno)
                    push(pilhaPequeno, tamanho_muralha_atual);

                break;

            case 'P':
                if (pilhaPequeno->tamanho == 0) {
                    if (pilhaMedio->tamanho == 0) {
                        if (pilhaGrande->tamanho == 0) {
                            qtd_minima_muralhas++;
                            tamanho_muralha_atual = tamanho_muralha - tamanho_gigante_pequeno;
                        } else {
                            tamanho_muralha_atual = pop(pilhaGrande) - tamanho_gigante_pequeno;
                        }
                    } else {
                        tamanho_muralha_atual = pop(pilhaMedio) - tamanho_gigante_pequeno;
                    }
                } else {
                    tamanho_muralha_atual = pop(pilhaPequeno) - tamanho_gigante_pequeno;
                }

                if (tamanho_muralha_atual >= tamanho_gigante_grande)
                    push(pilhaGrande, tamanho_muralha_atual);
                else if (tamanho_muralha_atual >= tamanho_gigante_medio)
                    push(pilhaMedio, tamanho_muralha_atual);
                else if (tamanho_muralha_atual >= tamanho_gigante_pequeno)
                    push(pilhaPequeno, tamanho_muralha_atual);

                break;
        }

        /*
        imprimirPilha(pilhaGrande);
        imprimirPilha(pilhaMedio);
        imprimirPilha(pilhaPequeno);
        */
    }

    //apresentacao resultados
    printf("%d\n", qtd_minima_muralhas);

    //limpeza de memoria
    destruirPilha(pilhaGrande);
    destruirPilha(pilhaMedio);
    destruirPilha(pilhaPequeno);

    return 0;
}

// IMPLEMENTACAO FUNCOES
No* criarNo(int dado) {
    No* no = (No*) malloc(sizeof(No));
    
    if (no != NULL) {
        no->dado = dado;
        no->proximo = NULL;
    }

    return no;
}

void destruirNo(No* no) {
    if (no != NULL)
        free(no);
}

void printNo(No* no) {
    printf("%d -> ", no->dado);
}

Pilha* criarPilha() {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));

    if (pilha != NULL) {
        pilha->topo = NULL;
        pilha->tamanho = 0;
    }

    return pilha;
}

void destruirPilha(Pilha* pilha) {
    if (pilha != NULL) {
        while (pilha->tamanho > 0)
            pop(pilha);

        free(pilha);
    }
}

void imprimirPilha(Pilha* pilha) {
    if (pilha != NULL) {
        No* tmp = pilha->topo;
        
        while (tmp != NULL) {
            printNo(tmp);
            tmp = tmp->proximo;
        }
        
        putchar('\n');
    }
}

int pop(Pilha* pilha) {
    if (pilha != NULL) {
        No* tmp = pilha->topo;

        if (tmp != NULL) {
            pilha->topo = pilha->topo->proximo;
            pilha->tamanho--;

            int dado = tmp->dado;
            tmp->proximo = NULL;

            free(tmp);

            return dado;
        }
    }

    return -1;
}

void push(Pilha* pilha, int dado) {
    if (pilha != NULL) {
        No* no = criarNo(dado);

        if (no != NULL) {
            if (pilha->tamanho == 0)
                pilha->topo = no;
            else {
                no->proximo = pilha->topo;
                pilha->topo = no;
            }

            pilha->tamanho++;
        }
    }
}
