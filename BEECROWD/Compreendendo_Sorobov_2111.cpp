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

const int MAXN = 9;

vi zero = {1, 0, 0, 1, 1, 1, 1};

vvi number(7, vi(MAXN));

void reset(){
	for(int j=0; j<MAXN; j++)
		for(int i=0; i<sz(zero); i++)
			number[i][j] = zero[i];
}

void transformaDigito(int d, int p){
	if(d>=5){
		swap(number[0][p], number[1][p]);
		d -= 5;
	}
	for(int i=0; i<d; i++)
		swap(number[2+i][p], number[2+i+1][p]);	
}

void convert(int n){
	reset();
	int d = n%10;
	transformaDigito(d, MAXN-1);
	n /= 10;
	for(int p=MAXN-2; p>=0 && n; p--){
		d = n%10;
		n /= 10;
		transformaDigito(d, p);
	}
}

int main(){
    fast
    int n;
    while(cin >> n){
    	convert(n);
    	for(int i=0; i<sz(zero); i++){
    		for(int j=0; j<MAXN; j++)
    			cout << number[i][j];
    		cout << '\n';
    		if(i == 1){
    			for(int j=0; j<MAXN; j++)
    				cout << '-';
    			cout << '\n';
    		}
    	}
    	cout << '\n';
    }
    return 0;
}
