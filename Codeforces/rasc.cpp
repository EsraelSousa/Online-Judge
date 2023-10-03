#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string.h>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <cmath>
#include <numeric>
#include <string>
#include <ctype.h>
#include <tuple>

// feito em celular

//   #include <bits/stdc++.h>
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
	int n, k;
    ll ans = 0;
    cin >> n >> k;
    vi fruits(n);
    vi heights(n);
    for(auto &x: fruits) cin >> x;
    for(auto &x: heights) cin >> x;
    for(int i=0; i<n; i++){
    	if(fruits[i] > k) continue;
        if(fruits[i] <= k) ans = max(ans, 1LL); // pode pegar pelo menos 1
        /*Vamos tentar usar uma ideia de janela deslizante
        vamos colocando os elementos da esquerda enquantos as alturas forem divisiveis e somando a qtd de frutas
        quando atingimos a quantidade de frutas maxima, vamos removendo da esquerda
        talvez a complexidade fica O(N), mas é menor que O(N^2)*/
        int j = i;
        ll sum = fruits[i];
        ll qtd = 1;
        while(j+1 < n && heights[j] % heights[j+1] == 0 && heights[j] >= heights[j+1]){
            // vamos tirar da esquerda se precisar
            ans = max(ans, qtd);
            while(i <= j && sum + fruits[j+1] > k){
                sum -= fruits[i++];
                qtd--;
            }
            sum += fruits[j+1];
            j++;
            qtd++;
            ans = max(ans, qtd);
            //cout << qtd << ' ' << i << ' ' << j << '\n';
        }
        i = j;
    }
    cout << ans << '\n';
}

int main(){
    fast
    int tes = 1;
    cin >> tes;
    while(tes--){
    	task();
    }
    return 0;
}