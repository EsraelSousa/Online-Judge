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

const int MAXN = 1e2+5;

struct Data{
	int x;
	int y;
    int dist;
	int maskLower;
	int maskUpper;
	
	Data(){
		
	}
	
	Data(int _x, int _y, int _dist, int maskL, int maskU) : x(_x), y(_y), dist(_dist), maskLower(maskL), maskUpper(maskU){
	
	}
};

int n;
char mat[MAXN][MAXN];
int vis[MAXN][MAXN][1 << 10];
int vis1[MAXN][MAXN][1 << 10];
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};

int bfs(int x, int y){
	queue<Data> fila;
	int ans = 1e9;
    int maskL = 0, maskU = 0;
    if(islower(mat[x][y])) maskL |= 1 << (mat[x][y] - 'a');
    else maskU |= 1 << (mat[x][y] - 'A');
    //cout << maskL << ' ' << maskU << '\n';
	fila.push(Data(x, y, 1, maskL, maskU));
	while(sz(fila)){
		x = fila.front().x;
		y = fila.front().y;
		int maskL = fila.front().maskLower;
		int maskU = fila.front().maskUpper;
		int d = fila.front().dist;
		fila.pop();

		if(vis[x][y][maskL] && vis1[x][y][maskU]) continue;
		
        if(x == n && y == n)
            ans = min(ans, d);
		vis[x][y][maskL] = vis1[x][y][maskU] = 1;
		for(int i=0; i<4; i++){
			int xx = x + dx[i];
			int yy = y + dy[i];
			int maskLo = maskL;
			int maskUp = maskU;
			if(xx >= 1 && xx <= n && yy >= 1 && yy <= n){
				if(islower(mat[xx][yy])){
					if((maskU & (1 << (mat[xx][yy] - 'a'))) != 0) continue;
					maskLo |= 1 << (mat[xx][yy] - 'a');
					fila.push(Data(xx, yy, d+1, maskLo, maskUp));
				}
				else{
					if((maskL & (1 << (mat[xx][yy] - 'A'))) != 0) continue;
					maskUp |= 1 << (mat[xx][yy] - 'A');
					fila.push(Data(xx, yy, d+1, maskLo, maskUp));
				}
			}
		}
	}
	return (ans == 1e9)? -1 : ans;
}

void task(){
    cin >> n;
	for(int i=1; i<=n; i++)
		cin >> mat[i]+1;
		
    cout << bfs(1, 1) << '\n';
}

int main(){
    fast
    int tes = 1;
    //cin >> tes;
    while(tes--)
        task();
    return 0;
}

/*
6
DdaAaA
CBAcca
eEaeeE
bBbabB
DbDbDc
fFaAaC

*/
