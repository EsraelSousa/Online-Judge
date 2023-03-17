#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


struct comp{
  int id;
  int men;
  int mai;
};

bool compa(comp a, comp b){
    return a.mai < b.mai;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, vol;
    int m,s, ms;
    char p1, p2;
    int menorT = 1e9;
    cin >> n >> vol;
    vector<comp> lis(n);
    for(int i=0; i<n; i++){
        cin >> lis[i].id;
        lis[i].mai = 0;
        //vector<int> aux;
        for(int j=0; j<vol; j++){
            cin >> m >> p1 >> s >> p2 >> ms;
            m = m*100000 + s*1000 + ms;
            menorT = min(m, menorT);
            //aux.push_back(m);
            lis[i].mai += m;
            if(j){
                lis[i].men = min(lis[i].men, m);
                //lis[i].mai = max(lis[i].mai, m);
            }
            else lis[i].men = m;
        }
    }
    //cout << menorT << '\n';
    sort(lis.begin(), lis.end(), compa);
    for(int i=0; i<10; i++){
        if(lis[i].men == menorT){
            cout << lis[i].id <<'\n';
            return 0;
            //cout << lis[i].id << ' ' << lis[i].men << ' ' << lis[i].mai << '\n';
            //return 0; // morre o prog.
        }
        //cout << lis[i].id << ' ' << lis[i].men << ' ' << lis[i].mai << '\n';
    }
    cout << "NENHUM\n";
    return 0;
}

/*
A quantidade necessaria na linha i é 
3*i-1 + a soma da linha anterior

Soma da PA : n*(n-1)/2

Teste de sequencia
i - qtd i - sum
1 2 0
2 5 7
3 8 15
4 11 26       26-15 = 
5 14 40       40-26 = 14   14 para 17 faltam 3
6 17 57       57-40 = 17   17 para 20 faltam 3
7 20 77       77-57 = 20
8 23 100

i = i * (2 + (i-1)*3) / 2 + i
*/