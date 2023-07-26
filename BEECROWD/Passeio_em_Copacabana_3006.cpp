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

const int MAXN = 1e6+5;
const int IFN = 1e9;

struct Cafe{
    int firstLeftF;
    int firstRigthF;
};

struct Farmacia{
    int firstLeftC;
    int firstRigthC;
};

struct Restaurante{
    int firstLeftC;
    int firstLeftF;
    int firstRigthC;
    int firstRigthF;
};

Cafe cafe[MAXN];
Farmacia farmacia[MAXN];
Restaurante restaurante[MAXN];

void task(){
    string s;
    cin >> s;
    int lastF = IFN, lastC = IFN;
    int ans = 1e9;
    int n = sz(s);
    // compute left
    for(int i=0; i<n; i++){
        if(s[i] == 'R'){
            restaurante[i].firstLeftC = lastC;
            restaurante[i].firstLeftF = lastF;
        }
        else if(s[i] == 'F'){
            farmacia[i].firstLeftC = lastC;
            lastF = i;
        }
        else if(s[i] == 'C'){
            cafe[i].firstLeftF = lastF;
            lastC = i;
        }
    }
    // compute rigth
    lastC = lastF = IFN;
    for(int i=n-1; i>=0; i--){
        if(s[i] == 'R'){
            restaurante[i].firstRigthC = lastC;
            restaurante[i].firstRigthF = lastF;
        }
        else if(s[i] == 'F'){
            farmacia[i].firstRigthC = lastC;
            lastF = i;
        }
        else if(s[i] == 'C'){
            cafe[i].firstRigthF = lastF;
            lastC = i;
        }
    }
    // compute ans
    
    for(int i=0; i<n; i++){
        if(s[i] == 'R'){
            // pega primeiro o cafe a esquerda
            int p = restaurante[i].firstLeftC;
            if(p != IFN && cafe[p].firstLeftF != IFN)
                ans = min(ans, abs(i - p) + abs(p - cafe[p].firstLeftF));
            if(p != IFN && cafe[p].firstRigthF != IFN)
                ans = min(ans, abs(i - p) + abs(p - cafe[p].firstRigthF));
            // pega primeiro o cafe a direita
            p = restaurante[i].firstRigthC;
            if(p != IFN && cafe[p].firstLeftF != IFN)
                ans = min(ans, abs(i - p) + abs(p - cafe[p].firstLeftF));
            if(p != IFN && cafe[p].firstRigthF != IFN)
                ans = min(ans, abs(i - p) + abs(p - cafe[p].firstRigthF));
            // pega primeiro a farmacia a esquerda
            p = restaurante[i].firstLeftF;
            if(p != IFN && farmacia[p].firstLeftC != IFN)
                ans = min(ans, abs(p - i) + abs(p - farmacia[p].firstLeftC));
            if(p != IFN && farmacia[p].firstRigthC != IFN)
                ans = min(ans, abs(p - i) + abs(p - farmacia[p].firstRigthC));
            // pega primeiro a farmacia a direita
            p = restaurante[i].firstRigthF;
            if(p != IFN && farmacia[p].firstLeftC != IFN)
                ans = min(ans, abs(p - i) + abs(p - farmacia[p].firstLeftC));
            if(p != IFN && farmacia[p].firstRigthC != IFN)
                ans = min(ans, abs(p - i) + abs(p - farmacia[p].firstRigthC));
        }
    }
    cout << ans << '\n';
}

int main(){
    fast
    int tes;
    cin >> tes;
    while(tes--)
        task();
    return 0;
}