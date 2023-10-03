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

map<char, int> precedencia;
set<char> operador;

bool isOperador(char c){
	return (bool)(operador.find(c) != operador.end());
}

bool isOperando(char c){
	return (bool)((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
}

string analise(string &expr){
	stack<char> pilha;
	string ans, erS = "Syntax Error!";;
	char c;
	int n = sz(expr);
	for(int i=0; i<n; i++){
		c = expr[i];
		if(!isOperador(c) && !isOperando(c) && c != '(' && c != ')')
			return "Lexical Error!";
	}
	for(int i=0; i<n; i++){
		c = expr[i];
		if(isOperador(c)){
			if(i == 0 || i+1 == n)
				return erS;
			else if(!isOperando(expr[i-1]) && expr[i-1] != ')')
				return erS;
			else if(!isOperando(expr[i+1]) && expr[i+1] != '(')
				return erS;
			else{
				while(!pilha.empty() && precedencia[ pilha.top() ] >= precedencia[c] && pilha.top() != '('){
					ans.push_back(pilha.top());
					pilha.pop();
				}
				pilha.push(c);
			}
		}
		else if(c == '('){
			if(i > 0 && (isOperando(expr[i-1]) || expr[i-1] == ')'))
				return erS;
			pilha.push(c);
		}
		else if(c == ')'){
			if((i>0 && expr[i-1] == '(') || pilha.empty())
				return erS;
			while(!pilha.empty() && pilha.top() != '('){
				ans.push_back(pilha.top());
				pilha.pop();
			}
			if(pilha.empty())
				return erS;
			pilha.pop();
		}
		else{
			if(i == 0)
				ans.push_back(c);
			else if(isOperador(expr[i-1]) || expr[i-1] == '(')
				ans.push_back(c);
			else 
				return erS;
		}
	}
	while(!pilha.empty() && pilha.top() != '('){
		ans.push_back(pilha.top());
		pilha.pop();
	}
	if(!pilha.empty()){
		return erS;
	}
	return ans;
}

int main(){
    fast
    string expressao;
    string operadores = "+-*/><=#.|^";
    for(auto &x: operadores)
    	operador.insert(x);
    precedencia['^'] = 6;
    precedencia['*'] = precedencia['/'] = 5;
    precedencia['-'] = precedencia['+'] = 4;
    precedencia['>'] = precedencia['<'] = precedencia['='] = precedencia['#'] = 3;
    precedencia['.'] = 2;
    precedencia['|'] = 1;
    while(cin >> expressao){
    	cout << analise(expressao) << '\n';
    }
    return 0;
}
