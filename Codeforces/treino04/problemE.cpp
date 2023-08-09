#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

int n, T = 0, D = -1;
priority_queue<int, vi, greater<int>> RL, LR;

void escadaParada(){
    //cout << "chama\n";
    // pega menor das duas filas
    if(sz(LR) && sz(RL)){
        if(LR.top() < RL.top()){
            T = LR.top() + 10;
            LR.pop();
            D = 0;
        }
        else{
            T = RL.top() + 10;
            RL.pop();
            D = 1;
        }
    }
    // so tem uma fila
    else if(sz(LR)){
        T = LR.top() + 10;
        LR.pop();
        D = 0;
    }
    else{
        T = RL.top() + 10;
        RL.pop();
        D = 1;
    }
}

int main(){
    fast
    cin >> n;
    for(int i=0; i<n; i++){
        int t, d;
        cin >> t >> d;
        if(d == 0){
            LR.push(t);
        }
        else{
            RL.push(t);
        }
    }
    //cout << sz(LR) << ' ' << sz(RL) << '\n';
    // simula aqui
    escadaParada();
    //cout << sz(LR) << ' ' << sz(RL) << ' ' << T << '\n';
    int roda  = 3;
    while((sz(RL) || sz(LR))){
        // A escada tá parada
        if(sz(LR) && sz(RL) && LR.top() >= T && RL.top() >= T)
            escadaParada();
        else if(!sz(LR) && RL.top() >= T)
            escadaParada();
        else if(!sz(RL) && LR.top() >= T)
            escadaParada();
        // A escada esta em movimento da dir para esq
        else if(D && sz(RL) && RL.top() < T){
            // a pessoa pode entrar
            T = RL.top() + 10;
            RL.pop();
        }
        // A escada esta em movimento da esq para dir
        else if(!D && sz(LR) && LR.top() < T){
            // a pessoa pode entrar
            T = LR.top() + 10;
            LR.pop();
        }

        else{
            // tem pesso que quer ir da esq para dir anteriormente
            if(sz(LR) && sz(RL) && RL.top() < LR.top()){
                T += 10;
                D = 1;
                while(sz(RL) && RL.top() <= T - 10)
                    RL.pop();
            }
            // tem pesso que quer ir da dir para esq anteriormente
            else if(sz(LR) && sz(RL) && LR.top() < RL.top()){
                T += 10;
                D = 0;
                while(sz(LR) && LR.top() <= T - 10)
                    LR.pop();
            }
            else if(!sz(LR) && RL.top() < T){
                T += 10;
                D = 1;
                while(sz(RL) && RL.top() <= T - 10)
                    RL.pop();
            }
            else{
                T += 10;
                D = 0;
                while(sz(LR) && LR.top() <= T - 10)
                    LR.pop();
            }
        }
        //cout << sz(LR) << ' ' << sz(RL) << ' ' << T << '\n';
    }
    //cout << sz(LR) << ' ' << sz(RL) << '\n';
    // resposta
    cout << T << '\n';
    return 0;
}