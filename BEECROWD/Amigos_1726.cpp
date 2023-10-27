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

map<char, int> precedencia;
set<char> operador;

bool isOperador(char c){
	return (bool)(operador.find(c) != operador.end());
}

bool isOperando(char c){
	return (bool)((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
}

int solve(){
	
}

// Parsing de Expressao
//
// Operacoes associativas a esquerda por default
// Para mudar isso, colocar em r_assoc
// Operacoes com maior prioridade sao feitas primeiro

bool blank(char c) {
	return c == ' ';
}

bool is_unary(char c) {
	return c == '+' or c == '-';
}

bool is_op(char c) {
	if (is_unary(c)) return true;
	return c == '*' or c == '/' or c == '+' or c == '-';
}

bool r_assoc(char op) {
	// operator unario - deve ser assoc. a direita
	return op < 0;
}

int priority(char op) {
	// operator unario - deve ter precedencia maior
	if (op < 0) return INF;

	if (op == '*' or op == '/') return 2;
	if (op == '+' or op == '-') return 1;
	return -1;
}

void process_op(stack<int>& st, stack<int>& op) {
	char o = op.top(); op.pop();
	if (o < 0) {
		o *= -1;
		int l = st.top(); st.pop();
		if (o == '+') st.push(l);
		if (o == '-') st.push(-l);
	} else {
		int r = st.top(); st.pop();
		int l = st.top(); st.pop();
		if (o == '*') st.push(l & r);
		if (o == '/') st.push(l / r);
		if (o == '+') st.push(l | r);
		if (o == '-') st.push(l & (l ^ r));
	}
}

int eval(string& s) {
	stack<int> st, op;
	bool un = true;
	for (int i = 0; i < s.size(); i++) {
		if (blank(s[i])) continue;

		if (s[i] == '(') {
			op.push('(');
			un = true;
		} else if (s[i] == ')') {
			while (op.top() != '(') process_op(st, op);
			op.pop();
			un = false;
		} else if (is_op(s[i])) {
			char o = s[i];
			if (un and is_unary(o)) o *= -1;
			while (op.size() and (
						(!r_assoc(o) and priority(op.top()) >= priority(o)) or
						(r_assoc(o) and priority(op.top()) > priority(o))))
				process_op(st, op);
			op.push(o);
			un = true;
		} else {
			int val = 0;
			while (i < s.size() and isalnum(s[i]))
				val = val * 10 + s[i++] - '0';
			i--;
			st.push(val);
			un = false;
		}
	}

	while (op.size()) process_op(st, op);
	return st.top();
}

int main(){
    fast
    string expressao;
    string operadores = "+-*/><=#.|^";
    for(auto &x: operadores)
    	operador.insert(x);
    precedencia['^'] = 6;
    precedencia['*'] = precedencia['/'] = 5;
    precedencia['/'] = 4;
    precedencia['*'] = 3;
    precedencia['-'] = 2;
    precedencia['+'] = 1;
    string s;
    while(cin >> expressao){
    	s = "";
    	for(int i=0; i<sz(expressao); i++){
    		if(expressao[i] == '{'){
    			int n = 0;
    			i++;
    			while(expressao[i] != '}'){
    				n |= (1 << (expressao[i] - 'A'));
    				i++;
    			}
    			string number = to_string(n);
    			for(auto c: number)
    				s.pb(c);
    		}
    		else
    			s.pb(expressao[i]);
    	}
    	int ans = eval(s);
    	s = "{";
    	for(int i=0; i<26; i++)
    		if(ans & (1 << i))
    			s.pb((char)('A'+i));
    	s.pb('}');
    	cout << s << '\n';
    }
    return 0;
}
