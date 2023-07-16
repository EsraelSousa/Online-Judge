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
    int pontos = 0;
    string s;
    vi lance;
    vector<string> placar(10);
    for(auto &x: placar)
    	cin >> x;
    
    // 10 turno
    s = placar[9];
    for(int i=sz(s)-1; i>=0; i--){
    	if(s[i] == 'X')
    		lance.push_back(10);
    	else if(s[i] == '/')
    		lance.push_back(10 - (s[i-1] - '0'));
    	else
    		lance.push_back(s[i] - '0');
    	pontos += lance[ sz(lance)-1 ];
    }
    // demias turnos
    for(int i=8; i>=0; i--){
    	s = placar[i];
    	if(s == "X"){
    		pontos += 10;
    		// pegos 2 proximos lances
    		pontos += lance[ sz(lance)-1 ] + lance[ sz(lance)-2 ];
    		lance.push_back(10); // pontuacao lance
    	}
    	else{
    		for(int j = 1; j>=0; j--){
    			if(s[j] == '/'){
    				pontos += 10 - (s[j-1] - '0');
    				pontos += lance[ sz(lance)-1 ];
    				lance.push_back(10 - (s[j-1] - '0'));
    			}
    			else{
    				pontos += s[j] - '0';
    				lance.push_back(s[j] - '0');
    			}
    		}
    	}
    }
    cout << pontos << '\n';
    return 0;
}
