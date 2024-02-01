#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

const int N = 1e5 + 5;
const ull B = 313;

char s[N], p[N], c;
int b[N], n, m, q, l, ans[30][N]; // n = strlen(s), m = strlen(p);
ull rk[2][N], elB[N];

bool ig(int inip, int inis, int tam){
    return rk[1][inip + tam - 1] - rk[1][inip - 1] * elB[tam]
    == rk[0][inis + tam - 1] - rk[0][inis - 1] * elB[tam];
}

int bs(int i){
    int lo = 0, hi = m;
    while(lo < hi){
        int mid = (lo + hi + 1) / 2;
        if(ig(1, i, mid))
            lo = mid;
        else
            hi = mid - 1;
    }
    return lo;
}

int main(){
    scanf(" %s", s);
    scanf(" %s", p);
    n = strlen(s);
    elB[0] = 1;
    for(int i = 1; i <= n; i++)
        rk[0][i] = rk[0][i - 1] * B + s[i - 1], elB[i] = elB[i - 1] * B;
    m = strlen(p);
    for(int i = 1; i <= m; i++)
        rk[1][i] = rk[1][i - 1] * B + p[i - 1];
    for(int i = 1; i + m - 1 <= n; i++){
        int bb = bs(i);
        ans[0][i] = ans[0][i - 1];
        if(bb == m)
            ans[0][i]++;
        else if(bb + 2 > m || ig(bb + 2, i + bb + 1, m - bb - 1))
            ans[p[bb] - 'a' + 1][i + bb]++;
    }
    scanf("%d", &q);
    while (q--){
        scanf("%d %c", &l, &c);
        if(n < m)
            printf("0\n");
        else if(s[l - 1] == c)
            printf("%d\n", ans[0][n - m + 1]);
        else
            printf("%d\n", ans[0][n - m + 1] - ans[0][min(n - m + 1, l)] + ans[0][max(0, l - m)] + ans[c - 'a' + 1][l]);
    }
    return 0;
}
