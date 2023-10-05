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

const int MAXN = 505;

string codigoMorse[26];

void atribuicaoCodigoMorse(){
	// [a, z]
	codigoMorse[0] = "=.===";
	codigoMorse[1] = "===.=.=.=";
	codigoMorse[2] = "===.=.===.=";
	codigoMorse[3] = "===.=.=";
	codigoMorse[4] = "=";
	codigoMorse[5] = "=.=.===.=";
	codigoMorse[6] = "===.===.=";
	codigoMorse[7] = "=.=.=.=";
	codigoMorse[8] = "=.=";
	codigoMorse[9] = "=.===.===.===";
	codigoMorse[10] = "===.=.===";
	codigoMorse[11] = "=.===.=.=";
	codigoMorse[12] = "===.===";
	codigoMorse[13] = "===.=";
	codigoMorse[14] = "===.===.===";
	codigoMorse[15] = "=.===.===.=";
	codigoMorse[16] = "===.===.=.===";
	codigoMorse[17] = "=.===.=";
	codigoMorse[18] = "=.=.=";
	codigoMorse[19] = "===";
	codigoMorse[20] = "=.=.===";
	codigoMorse[21] = "=.=.=.===";
	codigoMorse[22] = "=.===.===";
	codigoMorse[23] = "===.=.=.===";
	codigoMorse[24] = "===.=.===.===";
	codigoMorse[25] = "===.===.=.=";
}

char morseCodigoLetra(string s){
	for(int i=0; i<26; i++)
		if(s == codigoMorse[i])
			return (char)('a'+i);
	return '#';
}

string decodifica(string &s){
	string ans;
	for(int i=0; i<sz(s); i++){
		string espaco = s.substr(i, 7);
		if(espaco == "......."){
			cout << "*";
			ans.push_back(' ');
			i += 6;
		}
		else{
			int j = i;
			while(j < sz(s) && s.substr(j, 3) != "...")
			 	j++;
			ans.push_back(morseCodigoLetra(s.substr(i, j-i)));
			i = j+2;
			espaco = s.substr(j, 7);
			if(espaco == "......."){
				ans.push_back(' ');
				i = j+6;
			}
		}
	}
	return ans;
}

int main(){
    fast
    int n;
    string s;
    atribuicaoCodigoMorse();
    cin >> n;
    while(n--){
    	cin >> s;
    	cout << decodifica(s) << '\n';
    }
    return 0;
}
