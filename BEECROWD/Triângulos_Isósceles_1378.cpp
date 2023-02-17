#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e3+5;

double EPS = 1e-9, distPoints[MAXN][MAXN];
int coordenada[MAXN][2];
vector<pair<double, int>> v(MAXN, {0,0});
vector<vector<pair<double, int> > > aux(MAXN, v);

double dist(int a, int b){
	double x = coordenada[a][0] - coordenada[b][0];
	double y = coordenada[a][1] - coordenada[b][1];
	return sqrt(x*x + y*y);
}

int find(int p, double v, int n){
	int ans = n+1, l = 1, r = n, m;
	while(l <= r){
		m = (l+r)/2;
		if(aux[p][m].first >= v){
			ans = m;
			r = m-1;
		}
		else
			l = m+1;
	}
	return ans;
}

void brute(int n){
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			for(int k=1; k<=n; k++)
				if(i!=j && i!=k && j!=k && distPoints[i][j] == distPoints[j][k] && distPoints[k][i] != distPoints[i][j])
					cout << i << ' ' << j << ' ' << k << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, a, b;
    int indices[5];
    while(cin >> n && n){
    	for(int i=1; i<=n; i++)
    		for(int j=0; j<2; j++)
    			cin >> coordenada[i][j];
    	for(int i=1; i<=n; i++){
    		for(int j=i; j<=n; j++){
    			double d = dist(i, j);
    			distPoints[i][j] = distPoints[j][i] = d;
    			aux[i][j] = {d, j};
                aux[j][i] = {d, i};
    		}
    		sort(aux[i].begin()+1, aux[i].begin()+n+1);	
    	}
    	//brute(n);
    	set<pair<int, pair<int, int>>> diff;
    	set<pair<int, pair<int, int>>>::iterator it;
    	for(int i=1; i<=n; i++){
    		for(int j=1; j<=n; j++){
    			if(i != j){
    				int p = find(j, distPoints[i][j], n);
    				while(p <= n && aux[j][p].first == distPoints[i][j]){
    					if(aux[j][p].second != i && aux[j][p].second != j && distPoints[aux[j][p].second][i] != distPoints[i][j]){
    						indices[0] = i;
                            indices[1] = j;
                            indices[2] = aux[j][p].second;
                            sort(indices, indices+3);
    						diff.insert({indices[0], {indices[1], indices[2]}});
    					}
    					p++;
    				}
    			}
    		}
    	}
    	cout << diff.size() << '\n';
    }
    return 0;
}