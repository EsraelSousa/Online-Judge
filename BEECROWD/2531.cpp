<<<<<<< HEAD
#include <stdio.h>

#define ll long long
#define max(a, b) (a>b)? a : b
#define min(a, b) (a<b)? a : b
typedef struct no pll;

struct no{
    ll fi;
    ll se;
};
pll tree[400005];
int vet[100005];


void constrTree(int no, int i, int j){
    if(i==j){
        tree[no].fi=vet[i],tree[no].se=vet[i];
        return;
    }
    int meio = (i+j)/2;
    constrTree(2*no, i, meio);
    constrTree(2*no+1, meio+1, j);
    tree[no].fi = max(tree[2*no].fi, tree[2*no+1].fi);
    tree[no].se = min(tree[2*no].se, tree[2*no+1].se);
        //printf("mont %lld %lld\n", tree[no].fi, tree[no].se);
}

void update(int no, int i, int j, int p, int val){
    if(i==j){
        tree[no].fi = (long long) val;
        tree[no].se = (long long) val;
    }else{
        int meio = (i+j)/2;
        if(p<=meio)
            update(2*no, i, meio, p, val);
        else
            update(2*no+1, meio+1, j, p, val);
        tree[no].fi = max(tree[2*no].fi, tree[2*no+1].fi);
        tree[no].se = min(tree[2*no].se, tree[2*no+1].se);
    }
}

pll query(int no, int i, int j, int a, int b){
    if(a<=i && j<=b){
        //printf("base %lld %lld\n", tree[no].fi, tree[no].se);
        return tree[no];
    }
    if(i>b || a>j){
        pll erro;
        erro.fi=-1; erro.se=-1;
        return erro;
    }
    int meio = (i+j)/2;
    pll esqd = query(2*no, i, meio, a, b);
    pll dirt = query(2*no+1, meio+1, j, a, b);
    if(esqd.fi==-1) return dirt;
    if(dirt.fi==-1) return esqd;
    esqd.fi = max(esqd.fi, dirt.fi);
    esqd.se = min(esqd.se, dirt.se);
    //printf("baseZ %lld %lld\n", esqd.fi, esqd.se);
    return esqd;
}

int main(){
    int n, q, opr, a, b, i;
    while(scanf("%d", &n) != EOF){
        for(i=1; i<=n; i++) scanf("%d", &vet[i]);
        constrTree(1, 1, n);
        //for(i=1; i<=7; i++) printf("no %d %lld %lld\n", i, tree[i].fi, tree[i].se);
        scanf("%d", &q);
        for(i=0; i<q; i++){
            scanf("%d %d %d", &opr, &a, &b);
            if(opr==1){
                update(1, 1, n, a, (ll)b);
            }else{
                pll an = query(1, 1, n, a, b);
                printf("%lld\n", an.fi - an.se);
            }
        }
    }
    return 0;
}
=======
#include <stdio.h>

#define ll long long
#define max(a, b) (a>b)? a : b
#define min(a, b) (a<b)? a : b
typedef struct no pll;

struct no{
    ll fi;
    ll se;
};
pll tree[400005];
int vet[100005];


void constrTree(int no, int i, int j){
    if(i==j){
        tree[no].fi=vet[i],tree[no].se=vet[i];
        return;
    }
    int meio = (i+j)/2;
    constrTree(2*no, i, meio);
    constrTree(2*no+1, meio+1, j);
    tree[no].fi = max(tree[2*no].fi, tree[2*no+1].fi);
    tree[no].se = min(tree[2*no].se, tree[2*no+1].se);
        //printf("mont %lld %lld\n", tree[no].fi, tree[no].se);
}

void update(int no, int i, int j, int p, int val){
    if(i==j){
        tree[no].fi = (long long) val;
        tree[no].se = (long long) val;
    }else{
        int meio = (i+j)/2;
        if(p<=meio)
            update(2*no, i, meio, p, val);
        else
            update(2*no+1, meio+1, j, p, val);
        tree[no].fi = max(tree[2*no].fi, tree[2*no+1].fi);
        tree[no].se = min(tree[2*no].se, tree[2*no+1].se);
    }
}

pll query(int no, int i, int j, int a, int b){
    if(a<=i && j<=b){
        //printf("base %lld %lld\n", tree[no].fi, tree[no].se);
        return tree[no];
    }
    if(i>b || a>j){
        pll erro;
        erro.fi=-1; erro.se=-1;
        return erro;
    }
    int meio = (i+j)/2;
    pll esqd = query(2*no, i, meio, a, b);
    pll dirt = query(2*no+1, meio+1, j, a, b);
    if(esqd.fi==-1) return dirt;
    if(dirt.fi==-1) return esqd;
    esqd.fi = max(esqd.fi, dirt.fi);
    esqd.se = min(esqd.se, dirt.se);
    //printf("baseZ %lld %lld\n", esqd.fi, esqd.se);
    return esqd;
}

int main(){
    int n, q, opr, a, b, i;
    while(scanf("%d", &n) != EOF){
        for(i=1; i<=n; i++) scanf("%d", &vet[i]);
        constrTree(1, 1, n);
        //for(i=1; i<=7; i++) printf("no %d %lld %lld\n", i, tree[i].fi, tree[i].se);
        scanf("%d", &q);
        for(i=0; i<q; i++){
            scanf("%d %d %d", &opr, &a, &b);
            if(opr==1){
                update(1, 1, n, a, (ll)b);
            }else{
                pll an = query(1, 1, n, a, b);
                printf("%lld\n", an.fi - an.se);
            }
        }
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
