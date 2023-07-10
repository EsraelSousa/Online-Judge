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

int posi[10][2];

void findPermutations(vvi &ans){
	vi numbers =  {1, 2, 3, 5, 6, 7};
	do{
		ans.push_back(numbers);
	}while(next_permutation(all(numbers)));
}

long double distt(int a, int b){
	long double x = posi[a][0] - posi[b][0];
	long double y = posi[a][1] - posi[b][1];
	return sqrt(x * x + y * y);
}

long double solve(vi &v){
	long double ans = distt(4, v[0]);
	for(int i=0; i<sz(v)-1; ++i)
		ans += distt(v[i], v[i+1]);
	return ans + distt(v[sz(v)-1], 4);
}

void task(vvi &ans){
    int id;
    long double best = 1e18;
    cin >> posi[4][0] >> posi[4][1];
    for(int i=0; i < 6; ++i){
    	cin >> id;
    	for(int j=0; j<2; ++j)
    		cin >> posi[id][j];
    }
    id = 0;
    for(int i=0; i<sz(ans); i++){
    	long double aux = solve(ans[i]);
    	if(aux < best && best - aux >= 0.00001){
    		best = aux;
    		id = i;
    	}
    }
    cout << "4->";
    for(auto &x: ans[id])
    	cout << x << "->";
    cout << "4: ";
    long double aux = best;
    
    cout << fixed << setprecision(5) << aux  << '\n';
}

int main(){
    fast
    int tes;
    int caso = 1;
    vvi permutations;
    findPermutations(permutations);
    cin >> tes;
    while(tes--){
    	cout << "Caso " << caso++ << ":\n";
        task(permutations);
    }
    return 0;
}
