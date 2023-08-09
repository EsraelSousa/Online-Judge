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

bool isDivisible(vi &s, int x, int base){
    int rest = 0;
    for(auto &c: s)
        rest = (base * rest + c) % x;
    //cout << s << ' ' << rest << '\n';
    return !rest;
}

int main(){
    fast
    int B, L;
    vi number;
    cin >> B >> L;
    B++;
    for(int i=0; i<L; i++){
        int c;
        cin >> c;
        number.push_back(c);
    }
    if(isDivisible(number, B, B-1)){
        cout << "0 0\n";
    }
    else{
        // busca
        for(int i=0; i<L; i++){
            int c = number[i];
            if(i == 0 && L > 1)
                number[i] = (number[1] > 0)? 0 : 0;
            else
                number[i] = 0;
            while(number[i] <= c && !isDivisible(number, B, B-1)){
                number[i]++;
            }
            if(isDivisible(number, B, B-1) && number[i] <= c){
                cout << i+1 << ' ' << number[i] << '\n';
                return 0;
            }
            number[i] = c;
        }
        // não encontra
        cout << "-1 -1\n";
    }
    return 0;
}
