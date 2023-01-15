<<<<<<< HEAD
#include <stdio.h>

long long bit[100005];
int ids[100005];

void add(int idx, int limt, int val){
    while(idx<=limt){
        bit[idx]+=val;
        idx += idx &(-idx);
    }
}

long long query(int idx){
    long long ans=0;
    while(idx>0){
        ans+=bit[idx];
        idx -= idx &(-idx);
    }
    return ans;
}

int main(){
    int n, xi, i;
    long long ans;
    while(scanf("%d", &n) != EOF){
        for(i=1; i<=n; i++){
            scanf("%d", &xi);
            ids[xi]=i;
            add(i, n, 1);
        }
        ans=0;
        for(i=1; i<=n; i++){
            ans+=(query(n) - query(ids[i]));
            add(ids[i], n, -1);
        }
        printf("%lld\n", ans);
    }
    return 0;
}
=======
#include <stdio.h>

long long bit[100005];
int ids[100005];

void add(int idx, int limt, int val){
    while(idx<=limt){
        bit[idx]+=val;
        idx += idx &(-idx);
    }
}

long long query(int idx){
    long long ans=0;
    while(idx>0){
        ans+=bit[idx];
        idx -= idx &(-idx);
    }
    return ans;
}

int main(){
    int n, xi, i;
    long long ans;
    while(scanf("%d", &n) != EOF){
        for(i=1; i<=n; i++){
            scanf("%d", &xi);
            ids[xi]=i;
            add(i, n, 1);
        }
        ans=0;
        for(i=1; i<=n; i++){
            ans+=(query(n) - query(ids[i]));
            add(ids[i], n, -1);
        }
        printf("%lld\n", ans);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
