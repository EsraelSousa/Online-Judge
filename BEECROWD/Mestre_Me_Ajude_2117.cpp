/*
Autor: Esrael
Problema: https://www.beecrowd.com.br/judge/pt/problems/view/2117

Ideia: Esse problema é uma aplicação direta de maximum bipartite matching
obs: o input no site esta bugado em um caso
*/

#include <bits/stdc++.h>

using namespace std;

const int MAXV = 1e3+5;
vector<int> listAdj[MAXV];
vector<int> mt;
vector<bool> used;
int countLetras[MAXV][30];
int n, m;
int m1[MAXV];

bool try_kuhn(int v) {
    if (used[v])
        return false;
    used[v] = true;
    for (int to : listAdj[v]) {
        if (mt[to] == -1 || try_kuhn(mt[to])) {
            mt[to] = v;
            m1[v] = to;
            return true;
        }
    }
    return false;
}
    
int maxBPM(){
    mt.assign(MAXV, -1);
    for (int v = 1; v <= m; ++v) {
        used.assign(MAXV, false);
        try_kuhn(v);
    }
    int ans = 0;
    for (int i = 1; i <= m; ++i)
        if (m1[i] != -1){
        	//cout << i << ' ';
            ans++;//printf("%d %d\n", mt[i] + 1, i + 1);
        }
    //cout << '\n';
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string comentario;
    char letra;
    int qtdConter;
    //cout << tolower('a') << '\n';
    cin >> n >> m;
    cin.ignore();
    for(int i=1; i<=n; i++){
        while(getline(cin, comentario)) if(comentario != "") break;
        for(char c: comentario){
            if(isalpha(c))
                countLetras[i][tolower(c)-'a']++;
        }
    }
    int cont = 0;
    set<pair<int, int>> edg;
    set<int> pes, com;
    for(int i=1; i<=m; i++){
        cin >> letra >> qtdConter;
        for(int j=1; j<=n; j++){
            if(countLetras[j][tolower(letra)-'a'] >= qtdConter){
               listAdj[i].push_back(j);
               //cout << i << " -> " << j << '\n';
               edg.insert({i, j});
               com. insert(j);
               pes.insert(i);
               cont++;
            }
        }
    }
    memset(m1, -1, sizeof(m1));
    cout << maxBPM() << '\n';
    /*cout << cont << '\n';
    cout << pes.size() << ' ' << com.size() << " tam conj\n";
    set<int>:: iterator it = com.begin();
    while(it != com.end()){
        if(m1[*it] != -1)
        cout << *it << ' ';
        it++;
    }
    cout << '\n';
    for(int i=1; i<=n; i++) if(mt[i] != -1) cout << i << " -> " << mt[i] << '\n';
    cout << '\n';
    cout << '\n';*/
    return 0;
}
