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

void task(){
    int n, m;
    set<string> undefined;
    map<string, int> definite;
    cin >> n >> m;
    string mat[n][m];
    int sumRow[n];
    int sumCol[m];
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cin >> mat[i][j];
    		undefined.insert(mat[i][j]);
    	}
    	cin >> sumRow[i];
    }
    for(int j=0; j<m; j++)
    	cin >> sumCol[j];
    while(sz(undefined)){
    	// row
    	for(int i=0; i<n; i++){
    		int sum = sumRow[i];
    		map<string, int> aux;
    		for(int j=0; j<m; j++){
    			if(definite.find(mat[i][j]) != definite.end())
    				sum -= definite[ mat[i][j] ];
    			else{
    				if(aux.find(mat[i][j]) == aux.end())
    					aux[ mat[i][j] ] = 0;
    				aux[ mat[i][j] ]++;
    			}
    		}
    		if(sz(aux) == 1){
    			definite[ aux.begin()->ff ] = sum / aux.begin()->ss;
    			undefined.erase(aux.begin()->ff);
    		}
    	}
    	// colum
    	for(int j=0; j<m; j++){
    		int sum = sumCol[j];
    		map<string, int> aux;
    		for(int i=0; i<n; i++){
    			if(definite.find(mat[i][j]) != definite.end())
    				sum -= definite[ mat[i][j] ];
    			else{
    				if(aux.find(mat[i][j]) == aux.end())
    					aux[ mat[i][j] ] = 0;
    				aux[ mat[i][j] ]++;
    			}
    		}
    		if(sz(aux) == 1){
    			definite[ aux.begin()->ff ] = sum / aux.begin()->ss;
    			undefined.erase(aux.begin()->ff);
    		}
    	}
    }
    
    for(auto &x: definite)
    	cout << x.ff << ' ' << x.ss << '\n';
}

int main(){
    fast
    int tes = 1;
    //cin >> tes;
    while(tes--)
        task();
    return 0;
}
