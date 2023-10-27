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
#define pb push_back

const int INF = 1e9;

int main(){
    fast
    int n, m;
    string nome, query;
    char ponto;
    int a, b;
    while(cin >> n >> m){
    	map<string, int> porcentagem;
    	while(n--){
    		cin >> nome >> a >> ponto >> b;
    		porcentagem[nome] = 10*a+b;
    	}
    	cin.ignore();
    	for(int i=1; i<=m; i++){
    		cout << "Guess #" << i << " was ";
    		getline(cin, query);
    		query.pb('0');
    		//cout << query << '\n';
    		stringstream separa(query);
    		separa >> nome;
    		int sum = porcentagem[nome];
    		while(separa >> nome){
    			if(nome == "<"){
    				separa >> nome;
    				cout << (sum < stoi(nome)? "" : "in");
    			}
    			else if(nome == "<="){
    				separa >> nome;
    				cout << (sum <= stoi(nome)? "" : "in");
    			}
    			else if(nome == ">"){
    				separa >> nome;
    				cout << (sum > stoi(nome)? "" : "in");
    			}
    			else if(nome == ">="){
    				separa >> nome;
    				cout << (sum >= stoi(nome)? "" : "in");
    			}
    			else if(nome == "="){
    				separa >> nome;
    				cout << (sum == stoi(nome)? "" : "in");
    			}
    			else{
    				separa >> nome;
    				sum += porcentagem[nome];
    			}
    		}
    		cout << "correct.\n";
    		//cout << sum << ' ' << nome << '\n';
    	}
    }
    return 0;
}
