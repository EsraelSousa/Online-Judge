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

struct Data{
	int state;
	int moves;
	string sequence;
	
	Data(){}
	
	Data(int state, int moves, string sequence) : state(state), moves(moves), sequence(sequence){};
	
	bool operator>(const Data &other) const{
		if(this->moves == other.moves)
			return this->sequence < other.sequence;
		return this->moves < other.moves;
	}
};

vvi adj = {{1, 4}, {0, 4, 5, 2}, {1, 5, 6, 3}, {2, 6}, {0, 1, 5, 7}, {1, 2, 6, 8, 7, 4}, {2, 3, 8, 5}, {4, 5, 8, 9}, {5, 6, 9, 7}, {7, 8}};
int vis[1025];

int invert(int mask, int i){
	if(mask & (1 << i))
		mask -= (1 << i);
	else
		mask |= (1 << i);
	return mask;
}

string bfs(int mask){
	queue<Data> fila;
	fila.push(Data(mask, 0, ""));
	while(sz(fila)){
		Data v = fila.front();
		fila.pop();
		if(vis[v.state]) continue;
		if(v.state == (1 << 10) -1) return v.sequence;
		vis[ v.state ] = 1;
		for(int i=0; i<10; i++){
			int mask = v.state;
			int move = v.moves;
			string s = v.sequence;
			for(auto &u: adj[i]){
				mask = invert(mask, u);
			}
			if(!vis[mask]){
				s.push_back((char)('0'+i));
				move++;
				fila.push(Data(mask, move, s));
			}
		}
	}
	return "-1";
}

int main(){
    fast
    int mask = 0;
    int x;
    for(int i=0; i<10; i++){
    	cin >> x;
    	if(x)
    		mask |= (1 << i);
    }
    // todas as luzes ja estao acesas
    if(mask == (1 << 10) -1) cout << "0\n";
    else{
    	string ans = bfs(mask);
    	if(ans == "-1") cout << ans << '\n';
    	else{
    		cout << sz(ans) << '\n';
    		for(int i=0; i<sz(ans); i++){
    			if(ans[i] <= '8')
    				cout << (char)(ans[i]+1) << ((i == sz(ans)-1)? '\n' : ' ');
    			else
    				cout << "10" << ((i == sz(ans)-1)? '\n' : ' ');
    		}
    	}
    }
    return 0;
}
