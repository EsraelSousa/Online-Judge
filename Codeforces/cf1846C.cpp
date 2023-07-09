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

struct Competidor{
    ll penalidade;
    int pontos;
    int id;

    Competidor(){

    }

    Competidor(int _id, int _pontos, ll _penalidade){
        this->id = _id;
        this->pontos = _pontos;
        this->penalidade = _penalidade;
    }

    bool operator<(const Competidor &other){
        if(this->pontos == other.pontos){
            if(this->penalidade == other.penalidade)
                return this->id < other.id;
            return this->penalidade < other.penalidade;
            
        }
        return this->pontos > other.pontos;
    }
};

void task(){
    int n, m, h;
    cin >> n >> m >> h;
    vi tempos(m);
    vector<Competidor> placar(n);
    Competidor Rudolf;
    for(int i=0; i<n; i++){
        ll sum = 0, tempo = 0; 
        int qtdProblema = 0;
        for(auto &x: tempos) 
            cin >> x;
        sort(all(tempos));
        for(auto &x: tempos){
            tempo += x;
            if(tempo > h) 
                break;
            qtdProblema++;
            sum += tempo;
        }
        placar[i] = Competidor(i, qtdProblema, sum);
        if(i == 0)
            Rudolf =  placar[i];
    }
    sort(all(placar));
    cout << (int)(lower_bound(all(placar), Rudolf) - placar.begin()) + 1 << '\n';
    //for(auto &x: placar)
    //    cout << x.id << ' ' << x.pontos << ' ' << x.penalidade << '\n';
}

int main(){
    fast
    int tes;
    cin >> tes;;
    while(tes--)
        task();
    return 0;
}