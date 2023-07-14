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

int main(){
    fast
    string s;
    int sumAtual = 0, last = 0;
    vvi pontuacao(15, vi(2, 0));
    vi final(15, 0);
    vector<string> turnos(15);
    pontuacao[0][0] = pontuacao[0][1] = 10;
    for(int i=1; i<=10; i++){
        cin >> s;
        turnos[i] = s;
    }
    for(int i=10; i>0; i--){
        s = turnos[i];
        if(sz(s) == 3){
            if(s == "XXX"){
                final[i] = 30;
                pontuacao[i][0] = pontuacao[i][1] = 10;
            }
            else{
                if(s[0] == 'X'){
                    final[i] = 10;
                    pontuacao[i][0] = 10;
                }
                else{
                    final[i] = s[0]-'0';
                    pontuacao[i][0] = s[0]-'0';
                }
                if(s[1] == '/'){
                    final[i] += 10 - s[0]-'0';
                    pontuacao[i][1] = 10 - s[0]-'0';
                    if(s[2] == 'X')
                        final[i]+=10;
                    else
                        final[i]+=s[2]-'0';
                }
                else{
                    final[i] += s[1]-'0';
                    pontuacao[i][1] = s[1]-'0';
                    if(s[2] == 'X')
                        final[i]+=10;
                    else
                        final[i] += s[2]-'0';
                }
            }
        }
        else if(s ==  "X"){
            final[i] = 10;
            final[i] += pontuacao[i+1][0] + pontuacao[i+1][1];

            pontuacao[i][0] = 10;
            pontuacao[i][1] = pontuacao[i+1][0];
        }
        else if(s[1] == '/'){
            final[i] = 10 + pontuacao[i+1][0];
            pontuacao[i][0] = s[0]-'0';
            pontuacao[i][1] = 10-s[0]-'0';
        }
        else{
            pontuacao[i][0] = s[0]-'0';
            pontuacao[i][1] = s[1]-'0';
            final[i] = pontuacao[i][0] + pontuacao[i][1];
        }
    }
    for(int i=1; i<=10; i++)
        sumAtual += final[i];
    cout << sumAtual << '\n';
    /*sumAtual = 0;
    for(int i=1; i<=10; i++){
        cout << sumAtual << ' ' << final[i] << '\n';
        sumAtual += final[i];
    }*/       
    return 0;
}