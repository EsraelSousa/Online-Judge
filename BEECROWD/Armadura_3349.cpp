#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4+5;
int peso[4][MAXN], valor[4][MAXN];
int memo[4][MAXN];
int qtds[4];

int dp(int i, int w){
    if(i == 4) return 0; // não posso escolher mais nada
    if(memo[i][w] != -1) return memo[i][w]; // já calculei antes
    int best = dp(i+1, w);
    for(int j=0; j<qtds[i]; j++)
        if(peso[i][j] <= w)
            best = max(best, valor[i][j] + dp(i+1, w - peso[i][j]));
    return memo[i][w] = best;
}

int main(){
    //ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int W;
    int a, b;
    for(int i=0; i<4; i++) scanf("%d", &qtds[i]);
    scanf("%d.%d", &a, &b);
    W = a*10+b;
    for(int i=0; i<4; i++){
        for(int j=0; j<qtds[i]; j++){
            scanf("%d.%d", &a, &b);
            valor[i][j] = 10*a+b;
        }

        for(int j=0; j<qtds[i]; j++){
            scanf("%d.%d", &a, &b);
            peso[i][j] = 10*a+b;
        }
    }
    memset(memo, -1, sizeof(memo));
    int ans = dp(0, W);
    printf("%d.%d", ans/10, ans%10);
    return 0;
}