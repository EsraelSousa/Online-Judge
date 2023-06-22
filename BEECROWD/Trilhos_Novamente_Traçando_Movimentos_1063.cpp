#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)

int main(){
    fast
    int n, p;
    string s;
    stack<char> estacao, input;
    char c;
    while(cin >> n && n){
        // leitura entrada
        for(int i=0; i<n; i++){
            cin >> c;
            s.push_back(c);
        }
        for(int i=n-1; i>=0; i--)
            input.push(s[i]);
        s.clear();
        for(int i=0; i<n; i++){
            cin >> c;
            s.push_back(c);
        }
        // processa
        p = 0;
        while(!input.empty()){
            estacao.push( input.top() );
            input.pop();
            cout << "I";
            while(!estacao.empty() && estacao.top() == s[p]){
                cout << "R";
                p++;
                estacao.pop();
            }
        }
        while(!estacao.empty() && estacao.top() == s[p]){
            cout << "R";
            p++;
            estacao.pop();
        }
        cout << (estacao.empty()? "\n" : " Impossible\n");
        // limpa para proximo caso
        s.clear();
        while(!estacao.empty())
            estacao.pop();
    }
    return 0;
}