// my solution, passa no kattis
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAXN = 1e5+5;

int group[MAXN];
vector<int> adj[MAXN];

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, m, a, b, cont;
    bool flag;
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    while(1){
        flag = 0;
        for(int i=1; i<=n; i++){
            cont = 0;
            for(auto x: adj[i])
            cont += (group[i] == group[x]);
            if(cont > 1){
                group[i] = !group[i];
                flag = 1;
            }
        }
        if(!flag) break;
    }
    cont = 0;
    for(int i=1; i<=n; i++){
        cont |= group[i];
    }
    cout << 1 + cont << '\n';
    flag = 0;
    for(int i=1; i<=n; i++){
        if(!group[i]){
            if(flag) cout << ' ';
            cout << i;
            flag = 1;
        }
    }
    flag = 0;
    cout << '\n';
    for(int i=1; i<=n; i++){
        if(group[i]){
            if(flag) cout << ' ';
            cout << i;
            flag = 1;
        }
    }
    if(cont)cout << '\n';
    return 0;
}

/*
//Author: Lukáš Poláček
#include <iostream>
#include <vector>

#include <cstdio>
using namespace std;

#define rep(i,a,b) for(__typeof(b) i=a; i<(b); ++i)
#define trav(it,c) for(__typeof((c).begin()) it=(c).begin(); it!=(c).end(); ++it)

typedef pair<int, int> pii;
typedef vector<int> vi;
int main()
{
    int n, m; scanf("%d %d", &n, &m);
    vector<vi> g(n);
    rep(i,0,m)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vi col(n, 2), enem(n, 0);
    rep(i,0,n)
    {
        vi cnt(3);
        rep(j,0,g[i].size())
            cnt[col[g[i][j]]]++;

        int color = 0, cur = i;
        if (cnt[0] > 1)
            color = 1;

        while (true)
        {
            col[cur] = color;
            int ncur = -1;
            rep(j,0,g[cur].size()) if (col[g[cur][j]] == color)
            {
                enem[cur]++;
                if (++enem[g[cur][j]] == 2)
                {
                    ncur = g[cur][j];
                    rep(l,0,g[ncur].size())
                        if (col[g[ncur][l]] == color)
                        {
                            enem[g[ncur][l]]--;
                            enem[ncur]--;
                        }
                }
            }

            if (ncur == -1)
                break;
            cur = ncur;
            color = !color;
        }
    }

    vector<vi> res(2);
    rep(i,0,n)
        res[col[i]].push_back(i);
    printf("%d\n", 1 + !res[1].empty());
    rep(i,0,2) rep(j,0,res[i].size())
    {
        printf("%d", res[i][j] + 1);
        if (j + 1 < res[i].size())
            printf(" ");
        else
            printf("\n");
    }
}
*/