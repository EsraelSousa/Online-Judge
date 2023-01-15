<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

typedef struct carro Tcarro;

struct carro{
    int id;
    int tempo;
};

int ordena(Tcarro *a, Tcarro *b){
    if(a->tempo == b->tempo){
        if(a->id < b->id)
            return -1;
        else
            return 1;
    }
    else if(a->tempo < b->tempo)
        return -1;
    else
        return 1;
}

int main(){
    int n_carro, m_volta, tempo, i, j;
    scanf("%d %d", &n_carro, &m_volta);
    Tcarro car[n_carro];
    for(i=0;i<n_carro;i++){
        car[i].id=i+1;
        car[i].tempo=0;
    }
    for(i=0;i<n_carro;i++){
        for(j=0;j<m_volta;j++){
            scanf("%d", &tempo);
            car[i].tempo+=tempo;
        }
    }
    qsort(car, n_carro, sizeof(Tcarro), ordena);
    printf("%d\n%d\n%d\n", car[0].id, car[1].id, car[2].id);
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

typedef struct carro Tcarro;

struct carro{
    int id;
    int tempo;
};

int ordena(Tcarro *a, Tcarro *b){
    if(a->tempo == b->tempo){
        if(a->id < b->id)
            return -1;
        else
            return 1;
    }
    else if(a->tempo < b->tempo)
        return -1;
    else
        return 1;
}

int main(){
    int n_carro, m_volta, tempo, i, j;
    scanf("%d %d", &n_carro, &m_volta);
    Tcarro car[n_carro];
    for(i=0;i<n_carro;i++){
        car[i].id=i+1;
        car[i].tempo=0;
    }
    for(i=0;i<n_carro;i++){
        for(j=0;j<m_volta;j++){
            scanf("%d", &tempo);
            car[i].tempo+=tempo;
        }
    }
    qsort(car, n_carro, sizeof(Tcarro), ordena);
    printf("%d\n%d\n%d\n", car[0].id, car[1].id, car[2].id);
    return 0;
}
>>>>>>> refs/remotes/origin/master
